// Explanation at [GitBook](https://ankuragrawal.gitbook.io/home/my-first-c-project-an-elf-parser-and-interpreter/magic-verification-api)
#include <stdio.h>
#include <string.h>
#include "verify_elf.h"

int verify_elf(FILE* file_object){
  unsigned char magic_number[4];

  fseek(file_object, 0, SEEK_SET);
  if (fread(&magic_number, 1, 4, file_object) != 4) {
    fprintf(stderr, "Error: `fread()`: Unable to read ELF magic bytes.\n");
    fclose(file_object);
    return -1;
  }

  if (magic_number[0] != 0x7f || magic_number[1] != 'E' || magic_number[2] != 'L' || magic_number[3] != 'F'){
    fprintf(stderr, "Error: Unexpected magic bytes returned.\n  Expected: `0x7F, E, L, F`\n  Found: %02X, %02X, %02X, %02X\n", magic_number[0], magic_number[1], magic_number[2], magic_number[3]);
    fclose(file_object);
    return -1;
  }

  return 0;
}