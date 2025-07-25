#include <stdio.h>
#include "elf_parser.h"

int main(int argc, char *argv[]){
  if (argc != 2){
    fprintf(stderr, "Usage: %s <elf-binary>\n", argv[0]);
    return 1;
  }

  if (parse_elf(argv[1]) != 0){
    fprintf(stderr, "Failed to parse the ELF file.\n");
    return 1;
  }

  return 0;
}