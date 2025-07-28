#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "elf_parser.h"

int parse_ehdr(FILE* f_obj, Elf64_Ehdr* out_ehdr){
  // Start the file object from 0
  fseek(f_obj, 0, SEEK_SET);          // rewind(f_obj);
  if (fread(out_ehdr, 1, sizeof(Elf64_Ehdr), f_obj) != sizeof(Elf64_Ehdr)) {
    fprintf(stderr, "Error: `fread()`: Not a valid ELF! Unexpected bytes returned.\n");
    return -1;
  }

  return 0;
}

int parse_phdrs(FILE* f_obj, Elf64_Ehdr* ehdr, Elf64_Phdr** out_phdrs, int* phdrs_count){
  // Check if file headers are received or not
  if (!ehdr){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_program_headers`.\n");
    return -1;
  }

  // Normal arrays are stack-allocated.
    // Their lifecycle is the lifecycle of the block that contains them.
    // Therefore, we can't use them for returning the extracted phdrs.
  // Instead, we can create a dynamically allocated array, which is a heap-allocated array.
    // It's lives until it is deallocated.
    // We will allocate size enough for total entries in the phdr table.
  Elf64_Phdr* phdrs = malloc(ehdr->e_phnum * sizeof(Elf64_Phdr));

  // Verify memory allocation
  if (!phdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `phdrs`.\n");
    return -1;
  }

  // Seek to the offset where the program headers table start from
  fseek(f_obj, ehdr->e_phoff, SEEK_SET);

  // Read phdrs now
  if (fread(phdrs, ehdr->e_phentsize, ehdr->e_phnum, f_obj) != ehdr->e_phnum){
    fprintf(stderr, "Error: `fread` failed to read program headers.\n");
    free(phdrs);        // free the memory if it couldn't be used.
    return -1;
  }

  // Export the phdrs to the outer pointer.
  *out_phdrs = phdrs;
  // And the count of phdrs so that we don't have to use file_header api to get that value.
  *phdrs_count = ehdr->e_phnum;

  printf("It reached the end!\n");
  return 0;
}

int parse_shdrs(FILE* f_obj, Elf64_Ehdr* ehdr, Elf64_Shdr** out_shdrs, int* shdrs_count){
  // Check if file headers are received or not
  if (!ehdr){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_shdrs`.\n");
    return -1;
  }

  // Since ehdr is a pointer to a struct now, we can't use `.` based referencing.
  // We have to dereference the pointer, then access the value.
  // ehdr->e_shnum = (*ehdr).e_shnum
  Elf64_Shdr* shdrs = malloc(ehdr->e_shnum * sizeof(Elf64_Shdr));
  if (!shdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `shdrs`.\n");
    return -1;
  }

  // Seek to the offset where section headers are located.
  fseek(f_obj, ehdr->e_shoff, SEEK_SET);
  if (fread(shdrs, ehdr->e_shentsize, ehdr->e_shnum, f_obj) != ehdr->e_shnum){
    fprintf(stderr, "Error: `fread` failed to read section headers.\n");
    free(shdrs);
    return -1;
  }

  // Export
  *out_shdrs = shdrs;
  *shdrs_count = ehdr->e_shnum;

  // printf("phdr count: %d\n", ehdr->e_phnum);
  // printf("shdr count: %d\n", ehdr->e_shnum);
  // printf("phdr size: %d\n", ehdr->e_phentsize);
  // printf("shdr size: %d\n", ehdr->e_shentsize);
  return 0;
}

int parse_shstrtab(FILE* f_obj, Elf64_Ehdr* ehdr, char** out_raw_shstrtab, char*** out_shstrtab, int* entry_count){
  /* Part 1: Check if file headers are received or not */
  if (!ehdr){
    fprintf(stderr, "Error: ELF file headers not received, inside `parse_shdrs`.\n");
    return -1;
  }

  /* Part 2: Parsing section headers*/
  Elf64_Shdr* shdrs = NULL;
  int shdr_count = 0;

  if (parse_shdrs(f_obj, ehdr, &shdrs, &shdr_count) != 0){
    fprintf(stderr, "Error: `parse_shdrs` failed to parse section headers.\n");
    return -1;
  }

  /* Part 3: Using section header string table to find the location of string table */
  int shstr_idx = ehdr->e_shstrndx;
  int shstr_offset = (shdrs)[shstr_idx].sh_offset;
  int shstr_size = (shdrs)[shstr_idx].sh_size;

  // Seek to the offset where the section header string table is located.
  fseek(f_obj, shstr_offset, SEEK_SET);

  // A flat 1-byte array to store section header string table entries.
  // It would be something like this: `s, e, c, t, i, o, n, \0, h, e, a, d, e, r, \0` and so on.
  char* raw_shstrtab = malloc(shstr_size);

  // Verify memory allocation
  if (!raw_shstrtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `raw_shstrtab`.\n");
    return -1;
  }
  fread(raw_shstrtab, 1, shstr_size, f_obj);
    // Each entry 1 byte, total entry = size

  if (!raw_shstrtab){
    printf("null str tab\n");
    return -1;
  }
  /* Print raw_shdr_strtab
  for (int i = 0; i < shstr_size; i++){
    if (raw_shstrtab[i] == '\0')
      putchar('\n');
    else
      putchar(raw_shstrtab[i]);
  }
  */

  /* Part 4: Making the string entries distinct */

  // A pointer to pointers pointing to individual entries
  char** shdr_strtab = malloc(shdr_count * sizeof(char*));

  // Verify memory allocation
  if (!shdr_strtab){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap for `shdr_strtab` .\n");
    return -1;
  }

  for (int i = 0; i < shdr_count; i++){
    shdr_strtab[i] = strdup(&raw_shstrtab[shdrs[i].sh_name]);
    // Note: `strdup()` will manage allocating memory to char* entries
  }

  /* Print formatted section header string table
  for (int i = 0; i < shdr_count; i++) {
    printf("%s\n", shdr_strtab[i]);
  }
  */

  /* Part 5: Export section header string table and the entry count */
  *out_shstrtab = shdr_strtab;
  *out_raw_shstrtab = raw_shstrtab;
  *entry_count = shdr_count;

  /* Part 6: Free the heap-allocated memory used in mgmt */
  free(shdrs);

  return 0;
}

int parse_strtab(FILE* f_obj, Elf64_Ehdr* ehdr, char*** out_strtab, int* entry_count){
  /* Part 1: Check if file headers are received or not */
  if (!ehdr){
    fprintf(stderr, "Error: File headers not received.\n  Inside `parse_string_table`.\n");
    return -1;
  }

  /* Part 2: Parsing section header string table */
  Elf64_Shdr* shdrs = NULL;
  int shdr_count = 0;

  if (parse_shdrs(f_obj, ehdr, &shdrs, &shdr_count) != 0){
    fprintf(stderr, "Error: `parse_shdrs` failed to parse section headers!\n");    
    return -1;
  }

  char* raw_shstrtab = NULL;
  char** fshstrtab = NULL;
  int total_entries = 0;

  if (parse_shstrtab(f_obj, ehdr, &raw_shstrtab, &fshstrtab, &total_entries) != 0){
    fprintf(stderr, "Error: `parse_shstrtab` failed to parse section header string table.\n");
    return -1;
  }

  if (!raw_shstrtab){
    fprintf(stderr, "Error: null");
    return -1;
  }

  // Extracting metadata about string table
  int strtab_idx, strtab_offset, strtab_size;
  char* str = ".strtab";

  // for (int i =0; i < shdr_count; i++){
  //   printf("%s\n", &raw_shstrtab[shdrs[i].sh_name]);
  //   if (strcmp(&raw_shstrtab[shdrs[i].sh_name], str) == 0){
  //     printf("inside\n");
  //     break;
  //   }
  // }

  for (int i = 0; i < shdr_count; i++){
    if (shdrs[i].sh_type == SHT_STRTAB && (strcmp(&raw_shstrtab[shdrs[i].sh_name], str) == 0)){
      strtab_idx = i;
      strtab_offset = (shdrs)[strtab_idx].sh_offset;
      strtab_size = (shdrs)[strtab_idx].sh_size;
      break;
    }
  }
  printf("done so far\n");
  
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

  fread(raw_str_tab, 1, strtab_size, f_obj);

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
  char* temp = raw_str_tab;
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
  *out_strtab = str_tab;
  *entry_count = entry_len_strtab;

  /* Part 7: Free the heap-allocated memory used in mgmt */
  free(shdrs);
  free(raw_shstrtab);
  free(temp);

  return 0;
}