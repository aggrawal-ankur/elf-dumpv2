#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "core_api/verify_elf.h"
#include "core_api/elf_parser.h"
#include "raw_interp/raw_shstrtab.h"

int main(int argc, char *argv[]){
  if (argc != 2){
    fprintf(stderr, "Usage: %s <elf-binary>\n", argv[0]);
    return 1;
  }

  printf("Opening the file....\n");
  FILE* f_obj = fopen(argv[1], "rb");
  if (!f_obj){
    fprintf(stderr, "  Error: `fopen()`: file can't be opened!\n");
    return -1;
  }
  printf("  File opened successfully!\n");

  printf("Checking for ELF validity....\n");
  if (verify_elf(f_obj) != 0){
    fprintf(stderr, "  Error: `parse_elf()`: Failed to verify the ELF file.\n");
    return 1;
  }
  printf("  The file is a valid ELF.\n");

  ElfFile* AccessELF = malloc(sizeof(ElfFile));
  if (!AccessELF){
    fprintf(stderr, "Error: `malloc` failed to allocate memory for `AccessELF`\n");
    return -1;
  }
  memset(AccessELF, 0, sizeof(ElfFile));           // To make ptrs null and variables 0 in one hit.

  printf("Parsing file headers....\n");
  if (parse_ehdr(f_obj, AccessELF) != 0){
    fprintf(stderr, "  Error: file headers can't be parsed!\n");
    return -1;
  }
  printf("  File headers parsed successfully.\n");

  printf("Parsing program headers....\n");
  if (parse_phdrs(f_obj, AccessELF) != 0){
    fprintf(stderr, "  Error: program headers can't be parsed!\n");
    return -1;
  }
  printf("  Program headers parsed successfully.\n");

  printf("Parsing section headers....\n");
  if (parse_shdrs(f_obj, AccessELF) != 0){
    fprintf(stderr, "  Error: section headers can't be parsed!\n");
    return -1;
  }
  printf("  Section headers parsed successfully.\n");

  printf("Parsing section header string table....\n");
  if (parse_shstrtab(f_obj, AccessELF) != 0){
    fprintf(stderr, "  Error: section header string table can not be parsed.\n");
    return -1;
  }
  printf("  Section header string table parsed successfully.\n");

  printf("Parsing string table....\n");
  if (parse_strtab(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: string table can not be parsed.\n");
    return -1;
  }
  printf("  String table parsed successfully.\n");

  printf("Parsing symbol table....\n");
  if (parse_symtab(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: .symtab can not be parsed.\n");
    return -1;
  }
  printf("  Symbol table parsed successfully.\n");

  printf("Parsing dynamic symbol table....\n");
  if (parse_dynsym(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: .dynsym can not be parsed.\n");
    return -1;
  }
  printf("  Dynamic symbol table parsed successfully.\n");

  printf("Parsing relocation table....\n");
  if (parse_relocations(f_obj, AccessELF) != 0){
    fprintf(stderr, "Error: .rela.* entries can not be parsed.\n");
    return -1;
  }
  printf("  Relocation table parsed successfully.\n");

  printf("Parsing dynamic string table....\n");
  if (parse_dynstr(f_obj, AccessELF) != 0){
    fprintf(stderr, "  └─ Error: .dynstr entries can not be parsed.\n");
    return -1;
  }
  printf("  Dynamic string table parsed successfully.\n");

  printf("Parsing dynamic section....\n");
  if (parse_dynstr(f_obj, AccessELF) != 0){
    fprintf(stderr, "  └─ Error: .dynamic entries can not be parsed.\n");
    return -1;
  }
  printf("  Dynamic section parsed successfully.\n");

  fclose(f_obj);
  return 0;
}