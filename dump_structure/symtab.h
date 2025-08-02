#ifndef DUMP_SYMTAB
#define DUMP_SYMTAB

#include "../core_api/elf_parser.h"

struct Binds {
  uint32_t value;
  const char* macro;
};

struct stTypes {
  uint32_t value;
  const char* macro;
};

struct Visibility {
  uint32_t value;
  const char* macro;
};

int dump_symtab(ElfFile* AccessFile);

#endif