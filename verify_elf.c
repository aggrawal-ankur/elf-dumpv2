#include <stdio.h>
#include "verify_elf.h"

int parse_elf(FILE* file_object){

  // Store the 4 bytes of magic number
  unsigned char magic_number[4];

  // Reading the first 4-bytes into our magic_number array
  if (fread(&magic_number, 1, 4, file_object) != 4) {
    fprintf(stderr, "Error: `fread()`: Unable to read ELF magic bytes.\n");
    fclose(file_object);
    return -1;
  }
  
  // We know that an ELF binary start with 4 magic bytes. These are `0x7f`, `E`, `L`, `F`.
  // Lets verify this.
  if (magic_number[0] != 0x7f || magic_number[1] != 'E' || magic_number[2] != 'L' || magic_number[3] != 'F'){
    fprintf(stderr, "Error: Unexpected magic bytes returned.\n  Expected: `0x7F, E, L, F`\n  Found: %c, %c, %c, %c\n", magic_number[0], magic_number[1], magic_number[2], magic_number[3]);
    fclose(file_object);
    return -1;
  }
  printf("The file is a valid ELF. Proceeding with complete parsing.\n");

  return 0;
}