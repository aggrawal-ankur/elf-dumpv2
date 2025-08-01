#ifndef PHDRS_INTERP
#define PHDRS_INTERP

#include "../core_api/elf_parser.h"

struct pTypes {
  uint32_t value;
  const char* macro;
};

struct pFlags {
  uint32_t value;
  const char* macro;
};

int dump_phdrs(ElfFile* AccessFile);

#endif