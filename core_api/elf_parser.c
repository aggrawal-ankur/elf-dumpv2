#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "elf_parser.h"

int parse_file_headers(FILE* file_object, Elf64_Ehdr* elf_hdr_out){
  if (fread(elf_hdr_out, 1, sizeof(Elf64_Ehdr), file_object) != sizeof(Elf64_Ehdr)) {
    fprintf(stderr, "Error: `fread()`: Not a valid ELF! Unexpected bytes returned.\n");
    return -1;
  }
  return 0;
}

int parse_program_headers(FILE* file_object, Elf64_Ehdr* file_headers, Elf64_Phdr** phdrs_out, int* phdrs_count){
  // Check if file headers are received or not
  if (!file_headers){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_program_headers`.\n");
    return -1;
  }

  // Normal arrays are stack-allocated.
    // Their lifecycle is the lifecycle of the block that contains them.
    // Therefore, we can't use them for returning the extracted phdrs.
  // Instead, we can create a dynamically allocated array, which is a heap-allocated array.
    // It's lives until it is deallocated.
    // We will allocate size enough for total entries in the phdr table.
  Elf64_Phdr* phdrs = malloc(file_headers->e_phnum * sizeof(Elf64_Phdr));

  // Verify memory allocation
  if (!phdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `phdrs`.\n");
    return -1;
    free(phdrs);
  }

  // Seek to the offset where the program headers table start from
  fseek(file_object, file_headers->e_phoff, SEEK_SET);
  
  // Read phdrs now
  if (fread(phdrs, file_headers->e_phentsize, file_headers->e_phnum, file_object) != file_headers->e_phnum){
    fprintf(stderr, "Error: `fread` failed to read program headers.\n");

    // free the memory if it couldn't be used.
    free(phdrs);
    return -1;
  }

  // Export the phdrs to the outer pointer.
  *phdrs_out = phdrs;
  // And the count of phdrs so that we don't have to use file_header api to get that value.
  *phdrs_count = file_headers->e_phnum;

  return 0;
}

int parse_section_headers(FILE* file_object, Elf64_Ehdr* file_headers, Elf64_Shdr** shdrs_out, int* shdrs_count){
  // Check if file headers are received or not
  if (!file_headers){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_section_headers`.\n");
    return -1;
  }

  // Since file_headers is a pointer to a struct now, we can't use `.` based referencing.
  // We have to dereference the pointer, then access the value.
  // file_headers->e_shnum = (*file_headers).e_shnum
  Elf64_Shdr* shdrs = malloc(file_headers->e_shnum * sizeof(Elf64_Shdr));
  if (!shdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `shdrs`.\n");
    return -1;
  }

  // Seek to the offset where section headers are located.
  fseek(file_object, file_headers->e_shoff, SEEK_SET);
  if (fread(shdrs, file_headers->e_shentsize, file_headers->e_shnum, file_object) != file_headers->e_shnum){
    fprintf(stderr, "Error: `fread` failed to read section headers.\n");
    free(shdrs);
    return -1;
  }

  // Export
  *shdrs_out = shdrs;
  *shdrs_count = file_headers->e_shnum;

  return 0;
}

int parse_section_str_table(FILE* file_object, Elf64_Ehdr* file_headers, char*** shdr_strtab_out, int* entry_count){
  /* Part 1: Check if file headers are received or not */
  if (!file_headers){
    fprintf(stderr, "Error: ELF file headers not received, inside `parse_section_headers`.\n");
    return -1;
  }

  /* Part 2: Parsing section headers*/
  Elf64_Shdr* shdrs = NULL;
  int section_count = 0;

  if (parse_section_headers(file_object, file_headers, &shdrs, &section_count) != 0){
    fprintf(stderr, "Error: `parse_section_headers` failed to parse section headers.\n");
    return -1;
  }

  /* Part 3: Parsing section header string table to find the location of string table */
  int idx = file_headers->e_shstrndx;
  int offset = (shdrs)[idx].sh_offset;
  int size = (shdrs)[idx].sh_size;

  // Seek to the offset where the section header string table is located.
  fseek(file_object, offset, SEEK_SET);

  // A flat 1-byte array to store section header string table entries.
  // It would be something like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  char* raw_shdr_str_tab = malloc(size);

  // Verify memory allocation
  if (!raw_shdr_str_tab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `raw_shdr_str_tab`.\n");
    return -1;
  }
  fread(raw_shdr_str_tab, 1, size, file_object);
    // Each entry 1 byte, total entry = size

  /* Part 4: Making the string entries distinct */

  // A pointer to pointers pointing to individual entries
  char** shdr_strtab = malloc(section_count * sizeof(char*));

  // Verify memory allocation
  if (!shdr_strtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `shdr_strtab` .\n");
    return -1;
  }

  for (int i = 0; i < section_count; i++){
    shdr_strtab[i] = strdup(&raw_shdr_str_tab[shdrs[i].sh_name]);
    // Note: `strdup()` will manage allocating memory to char* entries
  }

  /* Part 5: Export section header string table and the entry count */
  *shdr_strtab_out = shdr_strtab;
  *entry_count = section_count;

  /* Part 6: Free the heap-allocated memory used in mgmt */
  free(raw_shdr_str_tab);
  free(shdrs);

  return 0;
}

int parse_string_table(FILE* file_object, Elf64_Ehdr* file_headers, char*** str_tab_out, int* entry_count){
  /* Part 1: Check if file headers are received or not */
  if (!file_headers){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_string_table`.\n");
    return -1;
  }

  /* Part 2: Parsing section headers*/
  Elf64_Shdr* shdrs = NULL;
  int section_count = 0;

  if (parse_section_headers(file_object, file_headers, &shdrs, &section_count) != 0){
    fprintf(stderr, "Error: `parse_section_headers` failed to parse section headers.\n");
    return -1;
  }

  /* Part 3: Parsing section header string table to find the location of string table */
  int shdr_strtab_idx = file_headers->e_shstrndx;
  int shdr_strtab_offset = (shdrs)[shdr_strtab_idx].sh_offset;
  int shdr_str_size = (shdrs)[shdr_strtab_idx].sh_size;

  // Seek to the offset where the section header string table is located.
  fseek(file_object, shdr_strtab_offset, SEEK_SET);

  // A flat 1-byte array to store section header string table entries.
  // It would be something like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  char* raw_shdr_str_tab = malloc(shdr_str_size);

  // Verify memory allocation
  if (!raw_shdr_str_tab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `raw_shdr_str_tab`.\n");
    return -1;
  }

  fread(raw_shdr_str_tab, 1, shdr_str_size, file_object);
    // Each entry 1 byte, total entry = size

  // Extracting metadata about string table
  int strtab_idx, strtab_offset, strtab_size;
  for (int i = 0; i < section_count; i++){
    if (shdrs[i].sh_type == SHT_STRTAB && (strcmp(&raw_shdr_str_tab[shdrs[i].sh_name], ".strtab") == 0)){
      strtab_idx = i;
      strtab_offset = (shdrs)[strtab_idx].sh_offset;
      strtab_size = (shdrs)[strtab_idx].sh_size;
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
  char* raw_str_tab = malloc(strtab_size);

  // Verify memory allocation
  if (!raw_str_tab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `raw_str_tab` .\n");
    return -1;
  }

  fread(raw_str_tab, 1, strtab_size, file_object);

  // Finding total no. of entries in the string table
  int entry_len_strtab = 0;
  for (int i = 0; i < strtab_size; i++){
    if (raw_str_tab[i] == '\0'){
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
    if (raw_str_tab[i] != '\0'){
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
  char** str_tab = malloc(entry_len_strtab * sizeof(char*));

  // Verify memory allocation
  if (!str_tab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `str_tab`.\n");
    return -1;
  }

  // i: each individual entry of type char*
  // j: individual characters in each entry of type char*
  for (int i = 0; i < entry_len_strtab; i++){
    // Allocate individual char* entries inside char**
    str_tab[i] = malloc(entry_lengths[i] + 1);

    int j = 0;
    for (; *raw_str_tab != '\0'; j++){
      str_tab[i][j] = *raw_str_tab;
      raw_str_tab++;
    }
    str_tab[i][j++] = '\0';

    raw_str_tab++;
  }

  /* Part 6: Export the string table and the entry count */
  *str_tab_out = str_tab;
  *entry_count = entry_len_strtab;

  /* Part 7: Free the heap-allocated memory used in mgmt */
  free(shdrs);
  free(raw_shdr_str_tab);
  free(raw_str_tab);

  return 0;
}
