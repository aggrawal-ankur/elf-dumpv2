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

  // Because the verification function has moved the file ptr 4 bytes
  fseek(f_obj, 0, SEEK_SET);          // rewind(f_obj);
  if (fread(AccessELF->ehdr, 1, sizeof(Elf64_Ehdr), f_obj) != sizeof(Elf64_Ehdr)) {
    fprintf(stderr, "Error: `fread()`: Not a valid ELF! Unexpected bytes returned.\n");

    free(AccessELF->ehdr);
    AccessELF->ehdr = NULL;
    return -1;
  }

  return 0;
}

int parse_phdrs(FILE* f_obj, ElfFile* AccessELF){
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_phdrs`.\n");
    return -1;
  }

  // Normal arrays are stack-allocated.
    // Their lifecycle is the lifecycle of the block that contains them.
    // Therefore, we can't use them for returning the extracted phdrs.
  // Instead, we can create a dynamically allocated array, which is a heap-allocated array.
    // It's lives until it is deallocated.
    // We will allocate size enough for total entries in the phdr table.
  AccessELF->phdrs = malloc(AccessELF->ehdr->e_phnum * sizeof(Elf64_Phdr));

  if (!AccessELF->phdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `phdrs`.\n");
    return -1;
  }

  // Seek to the offset where the program headers table start from
  fseek(f_obj, AccessELF->ehdr->e_phoff, SEEK_SET);

  // Read phdrs now
  if (fread(AccessELF->phdrs, AccessELF->ehdr->e_phentsize, AccessELF->ehdr->e_phnum, f_obj) != AccessELF->ehdr->e_phnum){
    fprintf(stderr, "Error: `fread` failed to read program headers.\n");

    free(AccessELF->phdrs);
    AccessELF->phdrs = NULL;
    return -1;
  }

  AccessELF->phdrs_count = AccessELF->ehdr->e_phnum;

  return 0;
}

int parse_shdrs(FILE* f_obj, ElfFile* AccessELF){
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_shdrs`.\n");
    return -1;
  }

  // Since ehdr is a pointer to a struct now, we can't use `.` based referencing.
  // We have to dereference the pointer, then access the value.
  // AccessELF->ehdr->e_shnum = (*ehdr).e_shnum
  AccessELF->shdrs = malloc(AccessELF->ehdr->e_shnum * sizeof(Elf64_Shdr));
  if (!AccessELF->shdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `shdrs`.\n");
    return -1;
  }

  // Seek to the offset where section headers are located.
  fseek(f_obj, AccessELF->ehdr->e_shoff, SEEK_SET);
  if (fread(AccessELF->shdrs, AccessELF->ehdr->e_shentsize, AccessELF->ehdr->e_shnum, f_obj) != AccessELF->ehdr->e_shnum){
    fprintf(stderr, "Error: `fread` failed to read section headers.\n");
    free(AccessELF->shdrs);
    return -1;
  }

  AccessELF->shdrs_count = AccessELF->ehdr->e_shnum;

  return 0;
}

int parse_shstrtab(FILE* f_obj, ElfFile* AccessELF){
  /* Part 1: Check if file headers are received or not */
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: ELF file headers not received.\n  Inside `parse_shdrs`.\n");
    return -1;
  }

  /* Part 2: Parsing section headers*/
  if (parse_shdrs(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: `parse_shdrs` failed to parse section headers.\n");
    return -1;
  }

  /* Part 3: Using section header string table to find the location of string table */
  int shstr_idx = AccessELF->ehdr->e_shstrndx;
  int shstr_offset = AccessELF->shdrs[shstr_idx].sh_offset;
  int shstr_size = AccessELF->shdrs[shstr_idx].sh_size;

  // Seek to the offset where the section header string table is located.
  fseek(f_obj, shstr_offset, SEEK_SET);
  
  // A flat 1-byte array to store section header string table entries.
  // It would be something like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessELF->r_shstrtab = malloc(shstr_size);

  // Verify memory allocation
  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `raw_shstrtab`.\n");
    return -1;
  }
  fread(AccessELF->r_shstrtab, 1, shstr_size, f_obj);
    // Each entry 1 byte, total entry = size

  if (!AccessELF->r_shstrtab){
    printf("null str tab.\n");
    return -1;
  }

  /* Part 4: Making the string entries distinct */

  // A pointer to pointers pointing to individual entries
  AccessELF->f_shstrtab = malloc(AccessELF->shdrs_count * sizeof(char*));

  // Verify memory allocation
  if (!AccessELF->f_shstrtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `shdr_strtab` .\n");
    return -1;
  }

  for (int i = 0; i < AccessELF->shdrs_count; i++){
    AccessELF->f_shstrtab[i] = strdup(&AccessELF->r_shstrtab[AccessELF->shdrs[i].sh_name]);
    // Note: `strdup()` will manage allocating memory to char* entries
  }

  AccessELF->f_shstr_count = AccessELF->shdrs_count;
  AccessELF->r_shstr_count = shstr_size;

  return 0;
}

int parse_strtab(FILE* f_obj, ElfFile* AccessELF){
  /* Part 1: Check if file headers are received or not */
  if (!(&AccessELF->ehdr)){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_string_table`.\n");
    return -1;
  }

  /* Part 2: Parsing section header string table */
  if (parse_shdrs(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: `parse_shdrs` failed to parse section headers!\n");    
    return -1;
  }

  if (parse_shstrtab(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: `parse_shstrtab` failed to parse section header string table.\n");
    return -1;
  }

  if (!AccessELF->r_shstrtab){
    fprintf(stderr, "Error: raw section header string table is null\n");
    return -1;
  }

  // Extracting metadata about string table
  int strtab_idx, strtab_offset, strtab_size;
  char* str = ".strtab";

  for (int i = 0; i < AccessELF->shdrs_count; i++){
    if (AccessELF->shdrs[i].sh_type == SHT_STRTAB && (strcmp(&AccessELF->r_shstrtab[AccessELF->shdrs[i].sh_name], str) == 0)){
      strtab_idx = i;
      strtab_offset = (AccessELF->shdrs)[strtab_idx].sh_offset;
      strtab_size = (AccessELF->shdrs)[strtab_idx].sh_size;
      break;
    }
  }

  // If string table is not found, report and exit.
  if (!strtab_offset){
    fprintf(stderr, "Error: .strtab can not be found!");
    return -1;
  }

  /* Part 4: Parsing the string table */

  // A flat 1-byte array to store the string table content in raw form.
  // It would be something like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  AccessELF->r_strtab = malloc(strtab_size);

  if (!AccessELF->r_strtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `raw_str_tab` .\n");
    return -1;
  }

  fread(AccessELF->r_strtab, 1, strtab_size, f_obj);

  // Finding total no. of entries in the string table
  int entry_len_strtab = 0;
  for (int i = 0; i < strtab_size; i++){
    if (AccessELF->r_strtab[i] == '\0'){
      entry_len_strtab++;
    }
  }

  // Find the length of each entry.
  // Heap allocating the array so that it doesn't end up exhausting the stack and boom, an overflow!
  int* entry_lengths = malloc(entry_len_strtab * sizeof(int));

  // Verify memory allocation
  if (!entry_lengths){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `entry_lengths`.\n");
    return -1;
  }

  int entry_cnt = 0;  // traversing based on the number of entry
  int len_count = 0;  // traversing based on the characters in each entry
  for (int i = 0; i < strtab_size; i++){
    if (AccessELF->r_strtab[i] != '\0'){
      len_count++ ;
    }
    else{
      entry_lengths[entry_cnt] = len_count;
      entry_cnt++ ;
      len_count = 0;
    }
  }

  /* Part 5: Making the string entries distinct */

  // A pointer to pointers pointing to individual entries
  AccessELF->f_strtab = malloc(entry_len_strtab * sizeof(char*));

  // Verify memory allocation
  if (!AccessELF->f_strtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `str_tab`.\n");
    return -1;
  }

  // i: each individual entry of type char*
  // j: individual characters in each entry of type char*
  char* temp = AccessELF->r_strtab;
  for (int i = 0; i < entry_len_strtab; i++){
    // Allocate individual char* entries inside char**
    AccessELF->f_strtab[i] = malloc(entry_lengths[i] + 1);

    int j = 0;
    for (; *temp != '\0'; j++){
      AccessELF->f_strtab[i][j] = *temp;
      temp++;
    }
    AccessELF->f_strtab[i][j++] = '\0';

    temp++;
  }

  /* Part 6: Export */
  AccessELF->f_str_count = entry_len_strtab;
  AccessELF->r_str_count = strtab_size;

  return 0;
}