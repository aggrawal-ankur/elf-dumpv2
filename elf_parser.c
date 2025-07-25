#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "elf_parser.h"

int parse_elf(FILE* file_object){

  // Data type for elf_header struct, coming from the elf.h file 
  Elf64_Ehdr elf_header;

  // Reading the first 64-bytes directly into our elf_header struct
  // fread()'s signature is as follows: 
  if (fread(&elf_header, 1, sizeof(Elf64_Ehdr), file_object) != sizeof(Elf64_Ehdr)) {
    perror("Error: Not a valid ELF! `fread()`\n");
    fclose(file_object);
    return -1;
  }

  // We know that an ELF binary start with 4 magic bytes. These are `0x7f`, `E`, `L`, `F`
  // Our next task is to check this
  if (elf_header.e_ident[0] != 0x7f ||
      elf_header.e_ident[1] != 'E' ||
      elf_header.e_ident[2] != 'L' ||
      elf_header.e_ident[3] != 'F')
  {
    fprintf(stderr, "Error: Magic number mismatch.\n");
    fclose(file_object);
    return -1;
  }
  printf("Valid ELF file detected.\n  Entry point: 0x%lx\n", elf_header.e_entry);

  return 0;
}