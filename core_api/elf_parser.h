#ifndef ELF_HEADER_PARSER_H
#define ELF_HEADER_PARSER_H

#include <stdio.h>
#include <elf.h>

int parse_file_headers(FILE* file_object, Elf64_Ehdr* elf_hdr_out);
int parse_program_headers(FILE* file_object, Elf64_Phdr** phdrs_out, int* phdrs_count);
int parse_section_headers(FILE* file_object, Elf64_Shdr** shdrs_out, int* shdrs_count);
int parse_section_str_table(FILE* file_object, char*** shdr_strtab_out, int* entry_count);
int parse_string_table(FILE* file_object, char*** str_tab_out, int* entry_count);

#endif