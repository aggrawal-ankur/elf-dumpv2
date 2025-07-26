#ifndef ELF_HEADER_PARSER_H
#define ELF_HEADER_PARSER_H

#include <stdio.h>
#include <elf.h>

int parse_elf_header(FILE* file_object, Elf64_Ehdr* elf_hdr_out);

#endif 