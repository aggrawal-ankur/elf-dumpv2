// Explanation at [GitBook](https://ankuragrawal.gitbook.io/home/my-first-c-project-an-elf-parser-and-interpreter/magic-verification-api)
#include <stdio.h>
#include <string.h>
#include "verify_elf.h"

int verify_elf(FILE* f_obj){
  unsigned char magic_bytes[4];

  if (fread(&magic_bytes, 1, 4, f_obj) != 4) {
    fprintf(stderr, "Error: `fread()`: Unable to read ELF magic bytes.\n");
    fclose(f_obj);
    return -1;
  }

  if (magic_bytes[0] != 0x7f || magic_bytes[1] != 'E' || magic_bytes[2] != 'L' || magic_bytes[3] != 'F'){
    fprintf(stderr, "Error: Unexpected magic bytes returned.\n  Expected: `0x7F, E, L, F`\n  Found: %02X, %02X, %02X, %02X\n", magic_bytes[0], magic_bytes[1], magic_bytes[2], magic_bytes[3]);
    fclose(f_obj);
    return -1;
  }

  return 0;
}