#ifndef RAW_EHDR_INTERP
#define RAW_EHDR_INTERP

#include "../core_api/elf_parser.h"

struct Types {
  uint16_t value;
  const char *macro;
};

struct Machines {
  uint16_t value;
  const char *macro;
};

int dump_ehdr(ElfFile* AccessFile);

#endif