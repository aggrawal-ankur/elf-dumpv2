#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "elf_parser.h"

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
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_phdrs`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Off phoff = AccessELF->ehdr->e_phoff;
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
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: File headers are empty.\n  API: `parse_shdrs`.\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Off shoff = AccessELF->ehdr->e_shoff;
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
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: ELF file headers are empty.\n  API: `parse_shstrtab`\n");
    return -1;
  }

  if (!(&AccessELF->shdrs)){
    fprintf(stderr, "Error: Section headers are empty.\n API: `parse_shstrtab`\n");
    return -1;
  }

  // Shorthand declarations
  Elf64_Half shdrs_count = AccessELF->ehdr->e_shnum;

  /* Locating section header string table entry in shdrs */
  int shstr_idx  = AccessELF->ehdr->e_shstrndx;
  int shstr_off  = AccessELF->shdrs[shstr_idx].sh_offset;
  int shstr_size = AccessELF->shdrs[shstr_idx].sh_size;

  fseek(f_obj, shstr_off, SEEK_SET);

  /* Parse section header string table */

  // A flat 1-byte array to store section header string table entries.
  // Like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessELF->r_shstrtab = malloc(shstr_size);
  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: `malloc` failed for `r_shstrtab`.\n  API: `parse_shstrtab`\n");
    return -1;
  }

  fread(AccessELF->r_shstrtab, 1, shstr_size, f_obj);
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

  AccessELF->r_shstr_count = shstr_size;
  AccessELF->f_shstr_count = shdrs_count;

  return 0;
}

int parse_strtab(FILE* f_obj, ElfFile* AccessELF){
  if (!(&AccessELF->ehdr)){
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
  int strtab_idx, strtab_off, strtab_size;

  for (int i = 0; i < shdrs_count; i++){
    int tmp_off = AccessELF->shdrs[i].sh_name;
    if (AccessELF->shdrs[i].sh_type == SHT_STRTAB && (strcmp(&AccessELF->r_shstrtab[tmp_off], ".strtab") == 0)){
      strtab_idx = i;
      strtab_off = (AccessELF->shdrs)[strtab_idx].sh_offset;
      strtab_size = (AccessELF->shdrs)[strtab_idx].sh_size;
      break;
    }
  }

  if (!strtab_off){
    fprintf(stderr, "Error: .strtab can not be found!\n  API: `parse_strtab`\n");
    return -1;
  }

  /* Parse string table*/

  // A flat 1-byte array to store the string table content in raw form.
  // Like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessELF->r_strtab = malloc(strtab_size);
  if (!AccessELF->r_strtab){
    fprintf(stderr, "Error: `malloc` failed for `r_strtab`.\n  API: `parse_strtab`\n");
    return -1;
  }

  fread(AccessELF->r_strtab, 1, strtab_size, f_obj);

  // Finding total no. of distinct entries in the string table
  int strtab_ecount = 0;
  for (int i = 0; i < strtab_size; i++){
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
  for (int i = 0; i < strtab_size; i++){
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
    AccessELF->f_strtab[i][j++] = '\0';

    temp++;
  }

  /* Export lengths */
  AccessELF->f_str_count = strtab_ecount;
  AccessELF->r_str_count = strtab_size;

  return 0;
}

int parse_symtab(FILE* f_obj, ElfFile* AccessELF){
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "  └─ Error: File headers are empty.\n     API: `parse_symtab`.\n");
    return -1;
  }

  if (!(&AccessELF->shdrs)){
    fprintf(stderr, "  └─ Error: Section headers are empty.\n     API: `parse_symtab`.\n");
    return -1;
  }

  // Shorthand declarations
  int shdr_count = AccessELF->ehdr->e_shnum;

  /* Find .symtab entry in section headers */
  int idx, off, size, entSize, nEnt;
  for (int i = 0; i < shdr_count; i++){
    if (AccessELF->shdrs[i].sh_type == SHT_SYMTAB){
      idx = i;
      off = AccessELF->shdrs[i].sh_offset;
      size = AccessELF->shdrs[i].sh_size;
      entSize = AccessELF->shdrs[i].sh_entsize;
    }
  }
  nEnt = size/entSize;

  AccessELF->symtab = malloc(size);
  if (!AccessELF->symtab){
    fprintf(stderr, "  └─ Error: `malloc` failed for `symtab`.\n    API: `parse_symtab`\n");
    return -1;
  }

  fseek(f_obj, off, SEEK_SET);
  if (fread(AccessELF->symtab, entSize, nEnt, f_obj) != nEnt){
    fprintf(stderr, "  └─ Error: failed to parse .symtab\n     API: `parse_symtab`\n");

    free(AccessELF->symtab);
    AccessELF->symtab = NULL;
    return -1;
  }

  return 0;
}