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

int parse_ehdr(FILE* f_obj, ElfFile* AccessFile){
  AccessFile->ehdr = malloc(sizeof(Elf64_Ehdr));
  if (!AccessFile->ehdr){
    fprintf(stderr, "Error: `malloc` failed to allocated memory for ehdr.\n");
    return -1;
  }

  // `verify_elf` has moved the file_ptr 4 bytes, so rewinding it.
  fseek(f_obj, 0, SEEK_SET);          // rewind(f_obj);
  if (fread(AccessFile->ehdr, 1, sizeof(Elf64_Ehdr), f_obj) != sizeof(Elf64_Ehdr)) {
    fprintf(stderr, "Error: Failed to parse program headers.\n  API: `parse_phdrs`.\n");

    free(AccessFile->ehdr);
    AccessFile->ehdr = NULL;
    return -1;
  }

  return 0;
}

int parse_phdrs(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_phdrs`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Off  phoff = AccessFile->ehdr->e_phoff;
  Elf64_Half phentsize = AccessFile->ehdr->e_phentsize;
  Elf64_Half phnum = AccessFile->ehdr->e_phnum;

  AccessFile->phdrs = malloc(phnum * sizeof(Elf64_Phdr));
  if (!AccessFile->phdrs){
    fprintf(stderr, "Error: `malloc` failed for `phdrs`.\n  API: `parse_phdrs`\n");
    return -1;
  }

  fseek(f_obj, phoff, SEEK_SET);
  if (fread(AccessFile->phdrs, phentsize, phnum, f_obj) != phnum){
    fprintf(stderr, "Error: `fread` failed to read program headers.\n");

    free(AccessFile->phdrs);
    AccessFile->phdrs = NULL;
    return -1;
  }

  return 0;
}

int parse_shdrs(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_shdrs`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Off  shoff = AccessFile->ehdr->e_shoff;
  Elf64_Half shnum = AccessFile->ehdr->e_shnum;
  Elf64_Half shentsize = AccessFile->ehdr->e_shentsize;

  AccessFile->shdrs = malloc(shnum * sizeof(Elf64_Shdr));
  if (!AccessFile->shdrs){
    fprintf(stderr, "Error: `malloc` failed for `shdrs`.\n  API: `parse_shdrs`\n");
    return -1;
  }

  fseek(f_obj, shoff, SEEK_SET);
  if (fread(AccessFile->shdrs, shentsize, shnum, f_obj) != shnum){
    fprintf(stderr, "Error: `fread` failed to read section headers.\n");

    free(AccessFile->shdrs);
    AccessFile->shdrs = NULL;
    return -1;
  }

  return 0;
}

int parse_shstrtab(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "Error: ELF file headers are empty.\n  API: `parse_shstrtab`\n");
    return -1;
  }

  if (!AccessFile->shdrs){
    fprintf(stderr, "Error: Section headers are empty.\n API: `parse_shstrtab`\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessFile->ehdr->e_shnum;

  /* Locating section header string table entry in shdrs */
  int idx  = AccessFile->ehdr->e_shstrndx;
  int off  = AccessFile->shdrs[idx].sh_offset;
  int size = AccessFile->shdrs[idx].sh_size;

  fseek(f_obj, off, SEEK_SET);

  /* Parse section header string table */

  // A flat 1-byte array to store section header string table entries.
  // Like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessFile->r_shstrtab = malloc(size);
  if (!AccessFile->r_shstrtab){
    fprintf(stderr, "Error: `malloc` failed for `r_shstrtab`.\n  API: `parse_shstrtab`\n");
    return -1;
  }

  fread(AccessFile->r_shstrtab, 1, size, f_obj);
    // Each entry: 1-byte
    // total entries: size

  if (!AccessFile->r_shstrtab){
    fprintf(stderr, "Error: Failed to parse section header string table in raw form.\n  API: `parse_shstrtab`\n");

    free(AccessFile->r_shstrtab);
    AccessFile->r_shstrtab = NULL;
    return -1;
  }

  /* Formatting raw shdr string table into distinct char entries */
  AccessFile->f_shstrtab = malloc(shdrs_count * sizeof(char*));
  if (!AccessFile->f_shstrtab){
    fprintf(stderr, "Error: `malloc` failed for `f_shstrtab`.\n API: `parse_shstrtab`\n");
    return -1;
  }

  for (int i = 0; i < shdrs_count; i++){
    AccessFile->f_shstrtab[i] = strdup(&AccessFile->r_shstrtab[AccessFile->shdrs[i].sh_name]);
    // Note: `strdup()` will manage allocating memory to char* entries
    // CHANGE THIS
  }

  AccessFile->r_shstr_count = size;
  AccessFile->f_shstr_count = shdrs_count;

  return 0;
}

int parse_strtab(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_strtab`.\n");
    return -1;
  }

  if (!AccessFile->r_shstrtab){
    fprintf(stderr, "Error: Raw section header string table is empty.\n  API: `parse_strtab`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessFile->ehdr->e_shnum;

  // Extracting metadata about string table
  int idx = -1, off = 0, size = 0;
  for (int i = 0; i < shdrs_count; i++){
    int tmp_off = AccessFile->shdrs[i].sh_name;
    if (AccessFile->shdrs[i].sh_type == SHT_STRTAB && (strcmp(&AccessFile->r_shstrtab[tmp_off], ".strtab") == 0)){
      idx = i;
      off = (AccessFile->shdrs)[idx].sh_offset;
      size = (AccessFile->shdrs)[idx].sh_size;
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
  AccessFile->r_strtab = malloc(size);
  if (!AccessFile->r_strtab){
    fprintf(stderr, "Error: `malloc` failed for `r_strtab`.\n  API: `parse_strtab`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  fread(AccessFile->r_strtab, 1, size, f_obj);

  // Finding total no. of distinct entries in the string table
  int strtab_ecount = 0;
  for (int i = 0; i < size; i++){
    if (AccessFile->r_strtab[i] == '\0'){
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
    if (AccessFile->r_strtab[i] != '\0'){
      l_cnt++ ;
    }
    else{
      strtab_entsizes[e_cnt] = l_cnt;
      e_cnt++ ;
      l_cnt = 0;
    }
  }

  /* Formatting raw string table into distinct char entries */

  AccessFile->f_strtab = malloc(strtab_ecount * sizeof(char*));
  if (!AccessFile->f_strtab){
    fprintf(stderr, "Error: `malloc` failed for `str_tab`.\n API: `parse_strtab`\n");
    return -1;
  }

  // i: each individual entry of type char*
  // j: individual characters in each entry of type char*
  char* temp = AccessFile->r_strtab;
  for (int i = 0; i < strtab_ecount; i++){
    // Allocate individual char* entries inside char**
    AccessFile->f_strtab[i] = malloc(strtab_entsizes[i] + 1);

    int j = 0;
    for (; *temp != '\0'; j++){
      AccessFile->f_strtab[i][j] = *temp;
      temp++;
    }
    AccessFile->f_strtab[i][j] = '\0';

    temp++;
  }

  free(strtab_entsizes);

  /* Export lengths */
  AccessFile->f_str_count = strtab_ecount;
  AccessFile->r_str_count = size;

  return 0;
}

int parse_symtab(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_symtab`.\n");
    return -1;
  }

  if (!AccessFile->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_symtab`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdrs_count = AccessFile->ehdr->e_shnum;

  /* Find .symtab entry in section headers */
  int idx = -1, off = 0, size = 0, entSize = 0, nEnt = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessFile->shdrs[i].sh_type == SHT_SYMTAB){
      idx = i;
      off = AccessFile->shdrs[idx].sh_offset;
      size = AccessFile->shdrs[idx].sh_size;
      entSize = AccessFile->shdrs[idx].sh_entsize;
    }
  }
  nEnt = size/entSize;

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .symtab table not found.\n     API: `parse_symtab`\n");
    return -1;
  }

  AccessFile->symtab = malloc(size);
  if (!AccessFile->symtab){
    fprintf(stderr, "  └─ Error: `malloc` failed for `.symtab`.\n     API: `parse_symtab`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessFile->symtab, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .symtab\n     API: `parse_symtab`\n");

    free(AccessFile->symtab);
    AccessFile->symtab = NULL;
    return -1;
  }

  AccessFile->symtab_count = nEnt;

  return 0;
}

int parse_dynsym(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_dynsym`.\n");
    return -1;
  }

  if (!AccessFile->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_dynsym`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdrs_count = AccessFile->ehdr->e_shnum;

  /* Find .dynsym entry in section headers */
  int idx = -1, off = 0, size = 0, entSize = 0, nEnt = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessFile->shdrs[i].sh_type == SHT_DYNSYM){
      idx = i;
      off = AccessFile->shdrs[idx].sh_offset;
      size = AccessFile->shdrs[idx].sh_size;
      entSize = AccessFile->shdrs[idx].sh_entsize;
    }
  }
  nEnt = size/entSize;

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .dynsym table not found.\n     API: `parse_reocations`\n");
    return -1;
  }

  AccessFile->dynsym = malloc(size);
  if (!AccessFile->dynsym){
    fprintf(stderr, "  └─ Error: `malloc` failed for `.dynsym`.\n    API: `parse_dynsym`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessFile->dynsym, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .dynsym\n     API: `parse_dynsym`\n");

    free(AccessFile->dynsym);
    AccessFile->dynsym = NULL;
    return -1;
  }

  AccessFile->dynsym_count = nEnt;

  return 0;
}

int parse_relocations(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_relocations`.\n");
    return -1;
  }

  if (!AccessFile->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_relocations`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdrs_count = AccessFile->ehdr->e_shnum;

  /* Finding relocation tables in shdrs */
  int dyn_idx, dyn_off, dyn_size, dyn_entSize, dyn_nEnt;
  int plt_idx, plt_off, plt_size, plt_entSize, plt_nEnt;
  for (int i = 0; i < shdrs_count; i++){
    if ((AccessFile->shdrs[i].sh_type == SHT_RELA) && (strcmp(AccessFile->f_shstrtab[i], ".rela.dyn") == 0)){
      // printf("here\n");
      dyn_idx = i;
      dyn_off = AccessFile->shdrs[dyn_idx].sh_offset;
      dyn_size = AccessFile->shdrs[dyn_idx].sh_size;
      dyn_entSize = AccessFile->shdrs[dyn_idx].sh_entsize;
    }

    if ((AccessFile->shdrs[i].sh_type == SHT_RELA) && (strcmp(AccessFile->f_shstrtab[i], ".rela.plt") == 0)){
      plt_idx = i;
      plt_off = AccessFile->shdrs[plt_idx].sh_offset;
      plt_size = AccessFile->shdrs[plt_idx].sh_size;
      plt_entSize = AccessFile->shdrs[plt_idx].sh_entsize;
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

  AccessFile->reladyn = malloc(dyn_size);
  if (!AccessFile->reladyn){
    fprintf(stderr, "  └─ Error: `malloc` failed for `rela_dyn`.\n     API: `parse_relocations`\n");
    return -1;
  }

  fseek(f_obj, dyn_off, SEEK_SET);
  if (fread(AccessFile->reladyn, dyn_entSize, dyn_nEnt, f_obj) != dyn_nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .rela.dyn entries.\n     API: `parse_relocations`\n");

    free(AccessFile->reladyn);
    AccessFile->reladyn = NULL;
    return -1;
  }

  AccessFile->relaplt = malloc(plt_size);
  if (!AccessFile->relaplt){
    fprintf(stderr, "  └─ Error: `malloc` failed for `relaplt`.\n     API: `parse_relocations`\n");
    return -1;
  }

  fseek(f_obj, plt_off, SEEK_SET);
  if (fread(AccessFile->relaplt, plt_entSize, plt_nEnt, f_obj) != plt_nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .rela.plt entries.\n     API: `parse_relocations`\n");

    free(AccessFile->relaplt);
    AccessFile->relaplt = NULL;
    return -1;
  }

  AccessFile->reladyn_count = dyn_nEnt;
  AccessFile->relaplt_count = plt_nEnt;

  return 0;
}

int parse_dynstr(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_dynstr`.\n");
    return -1;
  }

  if (!AccessFile->r_shstrtab){
    fprintf(stderr, "Error: Raw section header string table is empty.\n  API: `parse_dynstr`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessFile->ehdr->e_shnum;

  // Extract metadata about .dynstr
  int idx = -1, off = 0, size = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessFile->shdrs[i].sh_type == SHT_STRTAB && (strcmp(AccessFile->f_shstrtab[i] , ".dynstr") == 0)){
      idx  = i;
      off  = AccessFile->shdrs[i].sh_offset;
      size = AccessFile->shdrs[i].sh_size;
    }
  }

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .dynstr table not found.\n     API: `parse_dynstr`\n");
    return -1;
  }

  AccessFile->r_dynstr = malloc(size);
  if (!AccessFile->r_dynstr){
    fprintf(stderr, "  └─ Error: malloc failed for `r_dynstr`\n     API: `parse_dynstr`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessFile->r_dynstr, 1, size, f_obj) != size){
    fprintf(stderr, "  └─ Error: `fread` failed to parse .dynstr\n     API: `parse_dynstr`\n");

    free(AccessFile->r_dynstr);
    AccessFile->r_dynstr = NULL;
    return -1;
  }

  int nEnt = 0;
  for (int i = 0; i < size; i++){
    if (AccessFile->r_dynstr[i] == '\0'){
      nEnt++ ;
    }
  }

  int e_cnt = 0;
  int len_cnt = 0;
  int* entSizes = malloc(size);
  for (int i = 0; i < size; i++){
    if (AccessFile->r_dynstr[i] != '\0'){
      len_cnt++ ;
    }
    else{
      entSizes[e_cnt] = len_cnt;
      e_cnt++;
      len_cnt = 0;
    }
  }

  /* Formatted .dynstr */
  AccessFile->f_dynstr = malloc(nEnt * sizeof(char*));
  if (!AccessFile->f_dynstr){
    fprintf(stderr, "  └─ Error: `malloc` failed for `f_dynstr`.\n     API: `parse_dynstr`\n");
    return -1;
  }

  char *temp = AccessFile->r_dynstr;
  for (int i = 0; i < nEnt; i++){
    AccessFile->f_dynstr[i] = malloc(entSizes[i] + 1);

    int j = 0;
    for (; *temp != '\0' ;j++){
      AccessFile->f_dynstr[i][j] = *temp;
      temp++ ;
    }
    AccessFile->f_dynstr[i][j] = '\0';

    temp++ ;
  }

  free(entSizes);

  AccessFile->r_dstr_count = size;
  AccessFile->f_dstr_count = nEnt;

  return 0;
}

int parse_dynamic(FILE* f_obj, ElfFile* AccessFile){
  if (!AccessFile->ehdr){
    fprintf(stderr, "  └─ Error: ELF file headers are empty.\n  API: `parse_dynamic`\n");
    return -1;
  }

  if (!AccessFile->shdrs){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n API: `parse_dynamic`\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessFile->ehdr->e_shnum;

  /* Find where it is */
  int idx = -1, off = 0, size = 0, entSize = 0;
  for (int i = 0; i < shdrs_count; i++){
    if (AccessFile->shdrs[i].sh_type == SHT_DYNAMIC){
      idx  = i;
      off  = AccessFile->shdrs[i].sh_offset;
      size = AccessFile->shdrs[i].sh_size;
      entSize = AccessFile->shdrs[i].sh_entsize;
    }
  }
  int nEnt = size/entSize;

  if (idx < 0 || idx > shdrs_count){
    fprintf(stderr, "  └─ Error: .rela.dyn entries not found.\n     API: `parse_reocations`\n");
    return -1;
  }

  AccessFile->dynamic = malloc(size);
  if (!AccessFile->dynamic){
    fprintf(stderr, "  └─ Erro: `malloc` failed for `dynamic`.\n     API: `parse_dynamic`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessFile->dynamic, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: `fread` failed to read .dynamic.\n     API: `parse_dynamic`\n");

    free(AccessFile->dynamic);
    AccessFile->dynamic = NULL;
    return -1;
  }
  AccessFile->dyn_ent = nEnt;

  return 0;
}

int deallocator(ElfFile* AccessFile){
  if (!AccessFile){
    return 0;
  }

  printf("Cleanup begins....\n");
  free(AccessFile->ehdr);
  free(AccessFile->phdrs);
  free(AccessFile->shdrs);

  free(AccessFile->r_shstrtab);
  free(AccessFile->r_strtab);
  free(AccessFile->r_dynstr);

  free(AccessFile->symtab);
  free(AccessFile->dynsym);
  
  free(AccessFile->reladyn);
  free(AccessFile->relaplt);

  free(AccessFile->dynamic);

  for (int i = 0; i < AccessFile->f_shstr_count; i++){
    free(AccessFile->f_shstrtab[i]);
  }
  free(AccessFile->f_shstrtab);

  for (int i = 0; i < AccessFile->f_dstr_count; i++){
    free(AccessFile->f_dynstr[i]);
  }
  free(AccessFile->f_dynstr);

  for (int i = 0; i < AccessFile->f_str_count; i++){
    free(AccessFile->f_strtab[i]);
  }
  free(AccessFile->f_strtab);

  free(AccessFile);
  printf("Cleanup ends!\n");

  return 0;
}