#ifndef SHDR_INTERP
#define SHDR_INTERP

#include "../core_api/elf_parser.h"

struct sTypes {
  uint32_t value;
  const char *macro;
};

struct sFlags {
  uint32_t value;
  const char *macro;
};

int dump_shdrs(ElfFile* AccessFile);

#endif