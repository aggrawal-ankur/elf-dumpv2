#include <stdio.h>
#include "core_api/verify_elf.h"
#include "core_api/elf_parser.h"

int main(int argc, char *argv[]){
  if (argc != 2){
    fprintf(stderr, "Usage: %s <elf-binary>\n", argv[0]);
    return 1;
  }

  FILE* file_object = fopen(argv[1], "rb");
  if (!file_object){
    fprintf(stderr, "Error: `fopen()`: file can't be opened!\n");
    return -1;
  }

  if (verify_elf(file_object) != 0){
    fprintf(stderr, "Error: `parse_elf()`: Failed to verify the ELF file.\n");
    return 1;
  }

  fclose(file_object);
  return 0;
}