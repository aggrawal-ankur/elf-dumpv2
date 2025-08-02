#ifndef DUMP_ELF
#define DUMP_ELF

#include "../core_api/elf_parser.h"

int general_dump();
int dump_ehdr(ElfFile* AccessFile);
int dump_phdrs(ElfFile* AccessFile);
int dump_shdrs(ElfFile* AccessFile);
int dump_shstrtab(ElfFile* AccessELF);
int dump_strtab(ElfFile* AccessELF);
int dump_symtab(ElfFile* AccessFile);
int dump_dynsym(ElfFile* AccessFile);
int dump_relocations(ElfFile* AccessELF);
int dump_dynstr(ElfFile* AccessELF);

#endif