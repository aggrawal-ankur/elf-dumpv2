#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "parser.h"

int verify_elf(FILE* f_obj){
  unsigned char magic_bytes[4];

  if (fread(&magic_bytes, 1, 4, f_obj) != 4) {
    fprintf(stderr, "Error: `fread()`: Unable to read ELF magic bytes.\n");
    fclose(f_obj);
    return -1;
  }

  if (magic_bytes[0] != 0x7f || magic_bytes[1] != 'E' || magic_bytes[2] != 'L' || magic_bytes[3] != 'F'){
    fprintf(stderr, "Error: Unexpected magic bytes returned.\n  Expected: `0x7F, E, L, F`\n  Found: %02X, %02X, %02X, %02X\n", magic_bytes[0], magic_bytes[1], magic_bytes[2], magic_bytes[3]);
    fclose(f_obj);
    return -1;
  }

  return 0;
}

int parse_ehdr(FILE* f_obj, ElfFile* AccessELF){
  AccessELF->ehdr = malloc(sizeof(Elf64_Ehdr));
  if (!AccessELF->ehdr){
    fprintf(stderr, "Error: `malloc` failed to allocated memory for ehdr.\n");
    return -1;
  }

  // `verify_elf` has moved the file_ptr 4 bytes, so rewinding it.
  fseek(f_obj, 0, SEEK_SET);          // rewind(f_obj);
  if (fread(AccessELF->ehdr, 1, sizeof(Elf64_Ehdr), f_obj) != sizeof(Elf64_Ehdr)) {
    fprintf(stderr, "Error: Failed to parse program headers.\n  API: `parse_phdrs`.\n");

    free(AccessELF->ehdr);
    AccessELF->ehdr = NULL;
    return -1;
  }

  return 0;
}

int parse_phdrs(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_phdrs`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Off  phoff = AccessELF->ehdr->e_phoff;
  Elf64_Half phentsize = AccessELF->ehdr->e_phentsize;
  Elf64_Half phnum = AccessELF->ehdr->e_phnum;

  AccessELF->phdrs = malloc(phnum * sizeof(Elf64_Phdr));
  if (!AccessELF->phdrs){
    fprintf(stderr, "Error: `malloc` failed for `phdrs`.\n  API: `parse_phdrs`\n");
    return -1;
  }

  fseek(f_obj, phoff, SEEK_SET);
  if (fread(AccessELF->phdrs, phentsize, phnum, f_obj) != phnum){
    fprintf(stderr, "Error: `fread` failed to read program headers.\n");

    free(AccessELF->phdrs);
    AccessELF->phdrs = NULL;
    return -1;
  }

  return 0;
}

int parse_shdrs(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_shdrs`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Off  shoff = AccessELF->ehdr->e_shoff;
  Elf64_Half shnum = AccessELF->ehdr->e_shnum;
  Elf64_Half shentsize = AccessELF->ehdr->e_shentsize;

  AccessELF->shdrs = malloc(shnum * sizeof(Elf64_Shdr));
  if (!AccessELF->shdrs){
    fprintf(stderr, "Error: `malloc` failed for `shdrs`.\n  API: `parse_shdrs`\n");
    return -1;
  }

  fseek(f_obj, shoff, SEEK_SET);
  if (fread(AccessELF->shdrs, shentsize, shnum, f_obj) != shnum){
    fprintf(stderr, "Error: `fread` failed to read section headers.\n");

    free(AccessELF->shdrs);
    AccessELF->shdrs = NULL;
    return -1;
  }

  return 0;
}

int parse_shstrtab(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "Error: ELF file headers are empty.\n  API: `parse_shstrtab`\n");
    return -1;
  }

  if (!AccessELF->shdrs){
    fprintf(stderr, "Error: Section headers are empty.\n API: `parse_shstrtab`\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessELF->ehdr->e_shnum;

  /* Locating section header string table entry in shdrs */
  int idx  = AccessELF->ehdr->e_shstrndx;
  int off  = AccessELF->shdrs[idx].sh_offset;
  int size = AccessELF->shdrs[idx].sh_size;

  fseek(f_obj, off, SEEK_SET);

  /* Parse section header string table */

  // A flat 1-byte array to store section header string table entries.
  // Like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessELF->r_shstrtab = malloc(size);
  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: `malloc` failed for `r_shstrtab`.\n  API: `parse_shstrtab`\n");
    return -1;
  }

  fread(AccessELF->r_shstrtab, 1, size, f_obj);
    // Each entry: 1-byte
    // total entries: size

  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: Failed to parse section header string table in raw form.\n  API: `parse_shstrtab`\n");

    free(AccessELF->r_shstrtab);
    AccessELF->r_shstrtab = NULL;
    return -1;
  }

  /* Formatting raw shdr string table into distinct char entries */
  AccessELF->f_shstrtab = malloc(shdrs_count * sizeof(char*));
  if (!AccessELF->f_shstrtab){
    fprintf(stderr, "Error: `malloc` failed for `f_shstrtab`.\n API: `parse_shstrtab`\n");
    return -1;
  }

  for (int i = 0; i < shdrs_count; i++){
    AccessELF->f_shstrtab[i] = strdup(&AccessELF->r_shstrtab[AccessELF->shdrs[i].sh_name]);
    // Note: `strdup()` will manage allocating memory to char* entries
    // CHANGE THIS
  }

  AccessELF->r_shstr_count = size;
  AccessELF->f_shstr_count = shdrs_count;

  return 0;
}

int parse_strtab(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_strtab`.\n");
    return -1;
  }

  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: Raw section header string table is empty.\n  API: `parse_strtab`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessELF->ehdr->e_shnum;

  // Extracting metadata about string table
  int idx = -1, off = 0, size = 0;
  for (int i = 0; i < shdrs_count; i++){
    int tmp_off = AccessELF->shdrs[i].sh_name;
    if (AccessELF->shdrs[i].sh_type == SHT_STRTAB && (strcmp(&AccessELF->r_shstrtab[tmp_off], ".strtab") == 0)){
      idx = i;
      off = (AccessELF->shdrs)[idx].sh_offset;
      size = (AccessELF->shdrs)[idx].sh_size;
      break;
    }
  }

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "Error: .strtab can not be found!\n  API: `parse_strtab`\n");
    return -1;
  }

  /* Parse string table*/

  // A flat 1-byte array to store the string table content in raw form.
  // Like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessELF->r_strtab = malloc(size);
  if (!AccessELF->r_strtab){
    fprintf(stderr, "Error: `malloc` failed for `r_strtab`.\n  API: `parse_strtab`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  fread(AccessELF->r_strtab, 1, size, f_obj);

  // Finding total no. of distinct entries in the string table
  int strtab_ecount = 0;
  for (int i = 0; i < size; i++){
    if (AccessELF->r_strtab[i] == '\0'){
      strtab_ecount++;
    }
  }

  // Finding the length of each entry.
  int* strtab_entsizes = malloc(strtab_ecount * sizeof(int));
  if (!strtab_entsizes){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `strtab_entsizes`.\n");
    return -1;
  }

  int e_cnt = 0;  // entry  counter variable; traversing based on number of entries
  int l_cnt = 0;  // length counter variable; traversing based on the characters in each entry
  for (int i = 0; i < size; i++){
    if (AccessELF->r_strtab[i] != '\0'){
      l_cnt++ ;
    }
    else{
      strtab_entsizes[e_cnt] = l_cnt;
      e_cnt++ ;
      l_cnt = 0;
    }
  }

  /* Formatting raw string table into distinct char entries */

  AccessELF->f_strtab = malloc(strtab_ecount * sizeof(char*));
  if (!AccessELF->f_strtab){
    fprintf(stderr, "Error: `malloc` failed for `str_tab`.\n API: `parse_strtab`\n");
    return -1;
  }

  // i: each individual entry of type char*
  // j: individual characters in each entry of type char*
  char* temp = AccessELF->r_strtab;
  for (int i = 0; i < strtab_ecount; i++){
    // Allocate individual char* entries inside char**
    AccessELF->f_strtab[i] = malloc(strtab_entsizes[i] + 1);

    int j = 0;
    for (; *temp != '\0'; j++){
      AccessELF->f_strtab[i][j] = *temp;
      temp++;
    }
    AccessELF->f_strtab[i][j] = '\0';

    temp++;
  }

  free(strtab_entsizes);

  /* Export lengths */
  AccessELF->f_str_count = strtab_ecount;
  AccessELF->r_str_count = size;

  return 0;
}

int parse_symtab(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_symtab`.\n");
    return -1;
  }

  if (!AccessELF->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_symtab`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdrs_count = AccessELF->ehdr->e_shnum;

  /* Find .symtab entry in section headers */
  int idx = -1, off = 0, size = 0, entSize = 0, nEnt = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessELF->shdrs[i].sh_type == SHT_SYMTAB){
      idx = i;
      off = AccessELF->shdrs[idx].sh_offset;
      size = AccessELF->shdrs[idx].sh_size;
      entSize = AccessELF->shdrs[idx].sh_entsize;
    }
  }
  nEnt = size/entSize;

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .symtab table not found.\n     API: `parse_symtab`\n");
    return -1;
  }

  AccessELF->symtab = malloc(size);
  if (!AccessELF->symtab){
    fprintf(stderr, "  └─ Error: `malloc` failed for `.symtab`.\n     API: `parse_symtab`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessELF->symtab, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .symtab\n     API: `parse_symtab`\n");

    free(AccessELF->symtab);
    AccessELF->symtab = NULL;
    return -1;
  }

  AccessELF->symtab_count = nEnt;

  return 0;
}

int parse_dynsym(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_dynsym`.\n");
    return -1;
  }

  if (!AccessELF->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_dynsym`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdrs_count = AccessELF->ehdr->e_shnum;

  /* Find .dynsym entry in section headers */
  int idx = -1, off = 0, size = 0, entSize = 0, nEnt = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessELF->shdrs[i].sh_type == SHT_DYNSYM){
      idx = i;
      off = AccessELF->shdrs[idx].sh_offset;
      size = AccessELF->shdrs[idx].sh_size;
      entSize = AccessELF->shdrs[idx].sh_entsize;
    }
  }
  nEnt = size/entSize;

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .dynsym table not found.\n     API: `parse_reocations`\n");
    return -1;
  }

  AccessELF->dynsym = malloc(size);
  if (!AccessELF->dynsym){
    fprintf(stderr, "  └─ Error: `malloc` failed for `.dynsym`.\n    API: `parse_dynsym`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessELF->dynsym, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .dynsym\n     API: `parse_dynsym`\n");

    free(AccessELF->dynsym);
    AccessELF->dynsym = NULL;
    return -1;
  }

  AccessELF->dynsym_count = nEnt;

  return 0;
}

int parse_relocations(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_relocations`.\n");
    return -1;
  }

  if (!AccessELF->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_relocations`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdrs_count = AccessELF->ehdr->e_shnum;

  /* Finding relocation tables in shdrs */
  int dyn_idx, dyn_off, dyn_size, dyn_entSize, dyn_nEnt;
  int plt_idx, plt_off, plt_size, plt_entSize, plt_nEnt;
  for (int i = 0; i < shdrs_count; i++){
    if ((AccessELF->shdrs[i].sh_type == SHT_RELA) && (strcmp(AccessELF->f_shstrtab[i], ".rela.dyn") == 0)){
      // printf("here\n");
      dyn_idx = i;
      dyn_off = AccessELF->shdrs[dyn_idx].sh_offset;
      dyn_size = AccessELF->shdrs[dyn_idx].sh_size;
      dyn_entSize = AccessELF->shdrs[dyn_idx].sh_entsize;
    }

    if ((AccessELF->shdrs[i].sh_type == SHT_RELA) && (strcmp(AccessELF->f_shstrtab[i], ".rela.plt") == 0)){
      plt_idx = i;
      plt_off = AccessELF->shdrs[plt_idx].sh_offset;
      plt_size = AccessELF->shdrs[plt_idx].sh_size;
      plt_entSize = AccessELF->shdrs[plt_idx].sh_entsize;
    }
  }
  dyn_nEnt = dyn_size/dyn_entSize;
  plt_nEnt = plt_size/plt_entSize;

  if (!dyn_off){
    fprintf(stderr, "  └─ Error: .rela.dyn entries not found.\n     API: `parse_reocations`\n");
    return -1;
  }
  if (!plt_off){
    fprintf(stderr, "  └─ Error: .rela.plt entries not found.\n     API: `parse_reocations`\n");
    return -1;
  }

  AccessELF->reladyn = malloc(dyn_size);
  if (!AccessELF->reladyn){
    fprintf(stderr, "  └─ Error: `malloc` failed for `rela_dyn`.\n     API: `parse_relocations`\n");
    return -1;
  }

  fseek(f_obj, dyn_off, SEEK_SET);
  if (fread(AccessELF->reladyn, dyn_entSize, dyn_nEnt, f_obj) != dyn_nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .rela.dyn entries.\n     API: `parse_relocations`\n");

    free(AccessELF->reladyn);
    AccessELF->reladyn = NULL;
    return -1;
  }

  AccessELF->relaplt = malloc(plt_size);
  if (!AccessELF->relaplt){
    fprintf(stderr, "  └─ Error: `malloc` failed for `relaplt`.\n     API: `parse_relocations`\n");
    return -1;
  }

  fseek(f_obj, plt_off, SEEK_SET);
  if (fread(AccessELF->relaplt, plt_entSize, plt_nEnt, f_obj) != plt_nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .rela.plt entries.\n     API: `parse_relocations`\n");

    free(AccessELF->relaplt);
    AccessELF->relaplt = NULL;
    return -1;
  }

  AccessELF->reladyn_count = dyn_nEnt;
  AccessELF->relaplt_count = plt_nEnt;

  return 0;
}

int parse_dynstr(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_dynstr`.\n");
    return -1;
  }

  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: Raw section header string table is empty.\n  API: `parse_dynstr`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessELF->ehdr->e_shnum;

  // Extract metadata about .dynstr
  int idx = -1, off = 0, size = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessELF->shdrs[i].sh_type == SHT_STRTAB && (strcmp(AccessELF->f_shstrtab[i] , ".dynstr") == 0)){
      idx  = i;
      off  = AccessELF->shdrs[i].sh_offset;
      size = AccessELF->shdrs[i].sh_size;
    }
  }

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .dynstr table not found.\n     API: `parse_dynstr`\n");
    return -1;
  }

  AccessELF->r_dynstr = malloc(size);
  if (!AccessELF->r_dynstr){
    fprintf(stderr, "  └─ Error: malloc failed for `r_dynstr`\n     API: `parse_dynstr`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessELF->r_dynstr, 1, size, f_obj) != size){
    fprintf(stderr, "  └─ Error: `fread` failed to parse .dynstr\n     API: `parse_dynstr`\n");

    free(AccessELF->r_dynstr);
    AccessELF->r_dynstr = NULL;
    return -1;
  }

  int nEnt = 0;
  for (int i = 0; i < size; i++){
    if (AccessELF->r_dynstr[i] == '\0'){
      nEnt++ ;
    }
  }

  int e_cnt = 0;
  int len_cnt = 0;
  int* entSizes = malloc(size);
  for (int i = 0; i < size; i++){
    if (AccessELF->r_dynstr[i] != '\0'){
      len_cnt++ ;
    }
    else{
      entSizes[e_cnt] = len_cnt;
      e_cnt++;
      len_cnt = 0;
    }
  }

  /* Formatted .dynstr */
  AccessELF->f_dynstr = malloc(nEnt * sizeof(char*));
  if (!AccessELF->f_dynstr){
    fprintf(stderr, "  └─ Error: `malloc` failed for `f_dynstr`.\n     API: `parse_dynstr`\n");
    return -1;
  }

  char *temp = AccessELF->r_dynstr;
  for (int i = 0; i < nEnt; i++){
    AccessELF->f_dynstr[i] = malloc(entSizes[i] + 1);

    int j = 0;
    for (; *temp != '\0' ;j++){
      AccessELF->f_dynstr[i][j] = *temp;
      temp++ ;
    }
    AccessELF->f_dynstr[i][j] = '\0';

    temp++ ;
  }

  free(entSizes);

  AccessELF->r_dstr_count = size;
  AccessELF->f_dstr_count = nEnt;

  return 0;
}

int parse_dynamic(FILE* f_obj, ElfFile* AccessELF){
  if (!AccessELF->ehdr){
    fprintf(stderr, "  └─ Error: ELF file headers are empty.\n  API: `parse_dynamic`\n");
    return -1;
  }

  if (!AccessELF->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n API: `parse_dynamic`\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessELF->ehdr->e_shnum;

  /* Find where it is */
  int idx = -1, off = 0, size = 0, entSize = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessELF->shdrs[i].sh_type == SHT_DYNAMIC){
      idx  = i;
      off  = AccessELF->shdrs[i].sh_offset;
      size = AccessELF->shdrs[i].sh_size;
      entSize = AccessELF->shdrs[i].sh_entsize;
    }
  }
  int nEnt = size/entSize;

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .rela.dyn entries not found.\n     API: `parse_reocations`\n");
    return -1;
  }

  AccessELF->dynamic = malloc(size);
  if (!AccessELF->dynamic){
    fprintf(stderr, "  └─ Erro: `malloc` failed for `dynamic`.\n     API: `parse_dynamic`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessELF->dynamic, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: `fread` failed to read .dynamic.\n     API: `parse_dynamic`\n");

    free(AccessELF->dynamic);
    AccessELF->dynamic = NULL;
    return -1;
  }
  AccessELF->dyn_ent = nEnt;

  return 0;
}

int deallocator(ElfFile* AccessELF){
  if (!AccessELF){
    return 0;
  }

  printf("Cleanup begins....\n");
  free(AccessELF->ehdr);
  free(AccessELF->phdrs);
  free(AccessELF->shdrs);

  free(AccessELF->r_shstrtab);
  free(AccessELF->r_strtab);
  free(AccessELF->r_dynstr);

  free(AccessELF->symtab);
  free(AccessELF->dynsym);
  
  free(AccessELF->reladyn);
  free(AccessELF->relaplt);

  free(AccessELF->dynamic);

  for (int i = 0; i < AccessELF->f_shstr_count; i++){
    free(AccessELF->f_shstrtab[i]);
  }
  free(AccessELF->f_shstrtab);

  for (int i = 0; i < AccessELF->f_dstr_count; i++){
    free(AccessELF->f_dynstr[i]);
  }
  free(AccessELF->f_dynstr);

  for (int i = 0; i < AccessELF->f_str_count; i++){
    free(AccessELF->f_strtab[i]);
  }
  free(AccessELF->f_strtab);

  free(AccessELF);
  printf("Cleanup ends!\n");

  return 0;
}