#include <stdio.h>
#include "elf_parser.h"

int main(int argc, char *argv[]){
  if (argc != 2){
    fprintf(stderr, "Usage: %s <elf-binary>\n", argv[0]);
    return 1;
  }

  FILE* file_object = fopen(argv[1], "rb");
  if (!file_object){
    perror("Error: file can't be opened! `fopen()`\n");
    return -1;
  }

  if (parse_elf(file_object) != 0){
    fprintf(stderr, "Failed to parse the ELF file.\n");
    return 1;
  }

  fclose(file_object);
  return 0;
}