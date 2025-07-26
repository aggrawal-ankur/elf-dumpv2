#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include "elf_parser.h"

int parse_elf_header(FILE* file_object, Elf64_Ehdr* elf_hdr_out){
  if (fread(&elf_hdr_out, 1, sizeof(Elf64_Ehdr), file_object) != sizeof(Elf64_Ehdr)) {
    fprintf(stderr, "Error: `fread()`: Not a valid ELF! Unexpected bytes returned.\n");
    return -1;
  }
  return 0;
}