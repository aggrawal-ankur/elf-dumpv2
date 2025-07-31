#ifndef ELF_HEADER_PARSER_H
#define ELF_HEADER_PARSER_H

#include <stdio.h>
#include <elf.h>

typedef struct {
  Elf64_Ehdr* ehdr;         // File Header
  Elf64_Phdr* phdrs;        // Program Headers
  Elf64_Shdr* shdrs;        // Section Headers

  char* r_shstrtab;         // flat section header string table dump
  int r_shstr_count;        // └─ count of total bytes

  char** f_shstrtab;        // formatted dump of section header string table
  int f_shstr_count;        // └─ count of total individual entries

  char* r_strtab;           // flat string table dump
  int r_str_count;          // └─ count of total bytes

  char** f_strtab;          // formatted dump of string table
  int f_str_count;          // └─ count of total individual entries

  Elf64_Sym* symtab;        // Symbol Table
  int symtab_count;         // └─ entry count

  Elf64_Sym* dynsym;        // Dynamic Symbol Table
  int dynsym_count;         // └─ entry count

  Elf64_Rela* reladyn;      // .rela.dyn Table
  int reladyn_count;        // └─ entry count

  Elf64_Rela* relaplt;      // .rela.plt Table
  int relaplt_count;        // └─ entry count

  char* r_dynstr;           // flat .dynstr dump
  int r_dstr_count;         // └─ count of total bytes

  char** f_dynstr;          // formatted dump of .dynstr table
  int f_dstr_count;         // └─ count of total individual entries

  Elf64_Dyn* dynamic;       // Dynamic Section
  int dyn_ent;              // └─ entry count
} ElfFile;

int parse_ehdr(FILE* f_obj, ElfFile* AccessFile);
int parse_phdrs(FILE* f_obj, ElfFile* AccessFile);
int parse_shdrs(FILE* f_obj, ElfFile* AccessFile);
int parse_shstrtab(FILE* f_obj, ElfFile* AccessFile);
int parse_strtab(FILE* f_obj, ElfFile* AccessFile);
int parse_symtab(FILE* f_obj, ElfFile* AccessFile);
int parse_dynsym(FILE* f_obj, ElfFile* AccessELF);
int parse_relocations(FILE* f_obj, ElfFile* AccessELF);
int parse_dynstr(FILE* f_obj, ElfFile* AccessELF);
int parse_dynamic(FILE* f_obj, ElfFile* AccessELF);

#endif