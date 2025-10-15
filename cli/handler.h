#ifndef HANDLER_H
#define HANDLER_H

#include "../core_api/parser.h"
#include <dump_structure/dump.h>

int dump_handler(const char* target, const char* filename, ElfFile* AccessFile);
int show_handler(const char* target, const char* filename, ElfFile* AccessFile);

// A generalizer for handler functions
typedef int (*cmd_handler)(const char*, const char*, ElfFile*);

typedef struct {
  const char* name;
  cmd_handler handler;
  const char* description;
} CmdStack;

CmdStack commands[] = {
  {"dump", dump_handler, "Dump the ELF layout in a C-style file."},
  {"show", show_handler, "Display the ELF layout on the terminal."},
  {NULL, NULL, NULL}
};

// A generalizer for dump APIs
typedef int (*target_handler)(ElfFile*);

typedef struct {
  const char* name;
  target_handler handler;
  const char* description;
} TargetSpec;

TargetSpec dump_targets[] = {
  {"all", dump_all, "Dump everything.\n"},
  {"ehdr", dump_ehdr, "Dump ELF file header.\n"},
  {"phdrs", dump_phdrs, "Dump program headers.\n"},
  {"shdrs", dump_shdrs, "Dump section headers.\n"},
  {"shstrtab", dump_shstrtab, "Dump section header string table.\n"},
  {"symtab", dump_symtab, "Dump global symbol table.\n"},
  {"strtab", dump_strtab, "Dump string table for global symbol table.\n"},
  {"dynsym", dump_dynsym, "Dump dynamic symbol table.\n"},
  {"dynstr", dump_dynstr, "Dump string table for dynamic symbol table.\n"},
  {"dynamic", dump_dynamic, "Dump dynamic section.\n"},
  {"relocations", dump_relocations, "Dump all relocation entries.\n"},
  {"reladyn", dump_reladyn, "Dump .rela.dyn relocation entries.\n"},
  {"relaplt", dump_relaplt, "Dump .rela.plt relocation entries.\n"},
};

#endif