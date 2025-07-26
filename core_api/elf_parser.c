#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "elf_parser.h"

int parse_elf_header(FILE* file_object, Elf64_Ehdr* elf_hdr_out){
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