#ifndef ELF_HEADER_PARSER_H
#define ELF_HEADER_PARSER_H

#include <stdio.h>
#include <elf.h>

int parse_ehdr(FILE* f_obj, Elf64_Ehdr* out_ehdr);
int parse_phdrs(FILE* f_obj, Elf64_Ehdr* ehdr, Elf64_Phdr** out_phdrs, int* phdrs_count);
int parse_shdrs(FILE* f_obj, Elf64_Ehdr* ehdr, Elf64_Shdr** out_shdrs, int* shdrs_count);
int parse_shstrtab(FILE* f_obj, Elf64_Ehdr* ehdr, char** out_raw_shstrtab, char*** out_shstrtab, int* entry_count);
int parse_strtab(FILE* f_obj, Elf64_Ehdr* ehdr, char*** out_strtab, int* entry_count);

#endif