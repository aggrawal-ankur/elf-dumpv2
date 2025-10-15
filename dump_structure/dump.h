#ifndef DUMP_H
#define DUMP_H

#include "../core_api/parser.h"

int general_dump(ElfFile* AccessFile);
int dump_ehdr(ElfFile* AccessFile);
int dump_phdrs(ElfFile* AccessFile);
int dump_shdrs(ElfFile* AccessFile);
int dump_shstrtab(ElfFile* AccessELF);
int dump_strtab(ElfFile* AccessELF);
int dump_symtab(ElfFile* AccessFile);
int dump_dynsym(ElfFile* AccessFile);
int dump_relocations(ElfFile* AccessELF);
int dump_dynstr(ElfFile* AccessELF);
int dump_dynamic(ElfFile* AccessELF);
int dump_reladyn(ElfFile* AccessFile);
int dump_relaplt(ElfFile* AccessFile);
int dump_all(ElfFile* AccessFile);

#endif