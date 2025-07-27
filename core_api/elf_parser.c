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

int parse_program_headers(FILE* file_object, Elf64_Phdr** phdrs_out, int* phdrs_count){
  Elf64_Ehdr file_headers;

  // Read the ELF file headers
  if (parse_elf_header(file_object, &file_headers) != 0){
    fprintf(stderr, "Error: `parse_elf_header`: ELF file headers can't be parsed!\n");
    return -1;
  }

  // Seek to the offset where the program headers table start from
  fseek(file_object, file_headers.e_phoff, SEEK_SET);

  // Normal arrays are stack-allocated.
    // Their lifecycle is the lifecycle of the block that contains them.
    // Therefore, we can't use them for returning the extracted phdrs.
  // Instead, we can create a dynamically allocated array, which is a heap-allocated array.
    // It's lives until it is deallocated.
    // We will allocate size enough for total entries in the phdr table.
  Elf64_Phdr* phdrs = malloc(file_headers.e_phnum * sizeof(Elf64_Phdr));

  // Verify allocation
  if (!phdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap.\n");
    return -1;
    free(phdrs);
  }
  
  // Read phdrs now
  if (fread(phdrs, file_headers.e_phentsize, file_headers.e_phnum, file_object) != file_headers.e_phnum){
    fprintf(stderr, "Error: `fread` failed to read program headers.\n");
    
    // free the memory if it couldn't be used.
    free(phdrs);
    return -1;
  }

  // Export the phdrs to the outer pointer.
  *phdrs_out = phdrs;
  // And the count of phdrs so that we don't have to use file_header api to get that value.
  *phdrs_count = file_headers.e_phnum;

  return 0;
}

int parse_section_headers(FILE* file_object, Elf64_Shdr** shdrs_out, int* shdrs_count){
  Elf64_Ehdr file_headers;

  // Parse ELF file headers
  if (parse_elf_header(file_object, &file_headers) != 0){
    fprintf(stderr, "Error: `parse_elf_header()` ELF file headers can't be parsed!\n");
    return -1;
  }

  // Seek
  fseek(file_object, file_headers.e_shoff, SEEK_SET);

  // Allocate memory
  Elf64_Shdr* shdrs = malloc(file_headers.e_shnum * sizeof(Elf64_Shdr));

  // Verify allocation
  if (!shdrs){
    fprintf(stderr, "Error: `malloc` failed to allocate memory in heap.\n");
    return -1;
  }

  // Read shdrs now.
  if (fread(shdrs, file_headers.e_shentsize, file_headers.e_shnum, file_object) != file_headers.e_shnum){
    fprintf(stderr, "Error: `fread` failed to read section headers.\n");
    free(shdrs);
    return -1;
  }

  // Export
  *shdrs_out = shdrs;
  *shdrs_count = file_headers.e_shnum;

  return 0;
}

int parse_section_str_table(FILE* file_object, char*** shdr_strtab_out, int* entry_count){
  Elf64_Ehdr file_headers;

  if (parse_elf_header(file_object, &file_headers) != 0){
    fprintf(stderr, "Error: `parse_elf_header`: ELF file headers can not be parsed!\n");
    return -1;
  }
  
  Elf64_Shdr* shdrs = NULL;
  int section_count = 0;
  
  fseek(file_object, file_headers.e_shoff, SEEK_SET);
  
  if (parse_section_headers(file_object, &shdrs, &section_count) != 0){
    fprintf(stderr, "Error: `parse_section_headers` failed to parse section headers.\n");
    return -1;
  }

  int idx = file_headers.e_shstrndx;
  int offset = (shdrs)[idx].sh_offset;
  int size = (shdrs)[idx].sh_size;

  fseek(file_object, offset, SEEK_SET);

  char* raw_shdr_str_tab = malloc(size);
  fread(raw_shdr_str_tab, 1, size, file_object);

  char** shdr_strtab = malloc(section_count * sizeof(char*));
  for (int i = 0; i < section_count; i++){
    shdr_strtab[i] = strdup(&raw_shdr_str_tab[shdrs[i].sh_name]);
  }

  *shdr_strtab_out = shdr_strtab;
  *entry_count = section_count;
  free(raw_shdr_str_tab);
  free(shdrs);

  return 0;
}

int parse_string_table(FILE* file_object, char*** str_tab_out, int* entry_count){
  Elf64_Ehdr file_headers;
  
  if (parse_file_headers(file_object, &file_headers) != 0){
    fprintf(stderr, "Error: `parse_file_headers` failed to parse the ELF file headers!\n");
    return -1;
  }

  /* Parsing section headers*/
  Elf64_Shdr* shdrs = NULL;
  int section_count = 0;

  fseek(file_object, file_headers.e_shoff, SEEK_SET);

  if (parse_section_headers(file_object, &shdrs, &section_count) != 0){
    fprintf(stderr, "Error: `parse_section_headers` failed to parse section headers.\n");
    return -1;
  }

  /* Parsing section header string table for matching .strtab offset */
    // Make a struct of these 3 as it is repeated (do it later)
  int shdr_strtab_idx = file_headers.e_shstrndx;
  int shdr_strtab_offset = (shdrs)[shdr_strtab_idx].sh_offset;
  int shdr_str_size = (shdrs)[shdr_strtab_idx].sh_size;
  fseek(file_object, shdr_strtab_offset, SEEK_SET);

  char* raw_shdr_str_tab = malloc(shdr_str_size);
  fread(raw_shdr_str_tab, 1, shdr_str_size, file_object);

  int strtab_idx, strtab_offset, strtab_size;
  // Optimize this for loop with any data structure, if possible (do it later).
  for (int i = 0; i < section_count; i++){
    if (shdrs[i].sh_type == SHT_STRTAB && (strcmp(&raw_shdr_str_tab[shdrs[i].sh_name], ".strtab") == 0)){
      strtab_idx = i;
      strtab_offset = (shdrs)[strtab_idx].sh_offset;
      strtab_size = (shdrs)[strtab_idx].sh_size;
      break;
    }
  }

  /* Parsing the string table */
  char* raw_str_tab = malloc(strtab_size);
  fread(raw_str_tab, 1, strtab_size, file_object);

  // Finding the total entries in the string table
  int total_entries = 0;
  for (int i = 0; i < strtab_size; i++){
    if (raw_str_tab[i] == '\0'){
      total_entries++;
    }
  }

  // Finding the length of each entry
  int length_each_entry[total_entries];
  int entry_cnt = 0;
  int len_count = 0;
  for (int i = 0; i < strtab_size; i++){
    if (raw_str_tab[i] != '\0'){
      len_count++ ;
    }
    else{
      length_each_entry[entry_cnt] = len_count;
      entry_cnt++ ;
    }
  }

  // Making them distinct
  char** str_tab = malloc(total_entries * sizeof(char*));
  for (int ith_entry = 0; ith_entry < total_entries; ith_entry++){
    // Allocate individual char* entries inside char**
    str_tab[ith_entry] = malloc(length_each_entry[ith_entry] + 1);

    int jth_offset_in_ith_entry = 0;
    for (; *raw_str_tab != '\0'; jth_offset_in_ith_entry++){
      str_tab[ith_entry][jth_offset_in_ith_entry] = *raw_str_tab;
      raw_str_tab++;
    }
    str_tab[ith_entry][jth_offset_in_ith_entry++] = '\0';
    raw_str_tab++;
  }

  // Export
  *str_tab_out = str_tab;
  *entry_count = total_entries;

  free(shdrs);
  free(raw_shdr_str_tab);

  return 0;
}

// a b c d \0 e f g h \0