#include <stdio.h>
#include "core_api/verify_elf.h"
#include "core_api/elf_parser.h"

int main(int argc, char *argv[]){
  if (argc != 2){
    fprintf(stderr, "Usage: %s <elf-binary>\n", argv[0]);
    return 1;
  }

  printf("Opening the file....\n");
  FILE* file_object = fopen(argv[1], "rb");
  if (!file_object){
    fprintf(stderr, "  Error: `fopen()`: file can't be opened!\n");
    return -1;
  }
  printf("  File opened successfully!\n");

  printf("Checking for ELF....\n");
  if (verify_elf(file_object) != 0){
    fprintf(stderr, "  Error: `parse_elf()`: Failed to verify the ELF file.\n");
    return 1;
  }
  printf("  The file is a valid ELF.\n");

  Elf64_Ehdr ehdr;
  printf("Parsing file headers....\n");
  if (parse_ehdr(file_object, &ehdr) != 0){
    fprintf(stderr, "  Error: file headers can't be parsed!\n");
    return -1;
  }
  printf("  File headers parsed successfully.\n");

  Elf64_Phdr* phdrs = NULL;
  int phdr_count = 0;
  printf("Parsing program headers....\n");
  if (parse_phdrs(file_object, &ehdr, &phdrs, &phdr_count) != 0){
    fprintf(stderr, "  Error: program headers can't be parsed!\n");
    return -1;
  }
  printf("  Program headers parsed successfully.\n");

  Elf64_Shdr* shdrs = NULL;
  int shdr_count = 0;
  printf("Parsing section headers....\n");
  if (parse_shdrs(file_object, &ehdr, &shdrs, &shdr_count) != 0){
    fprintf(stderr, "  Error: section headers can't be parsed!\n");
    return -1;
  }
  printf("  Section headers parsed successfully.\n");
  
  char* out_raw_shstrtab = NULL;
  char** out_shstrtab = NULL;
  int sh_entry_count = 0;
  printf("Parsing section header string table....\n");
  if (parse_shstrtab(file_object, &ehdr, out_raw_shstrtab, &out_shstrtab, &sh_entry_count) != 0){
    fprintf(stderr, "  Error: section header string table can not be parsed.\n");
    return -1;
  }
  printf("  Section header string table parsed successfully.\n");
  
  char** out_strtab = NULL;
  int str_entry_count = 0;
  printf("Parsing string table....\n");
  if (parse_strtab(file_object, &ehdr, &out_strtab, &str_entry_count) != 0){
    fprintf(stderr, "Error: string table can not be parsed.\n");
    return -1;
  }
  printf("  String table parsed successfully.\n");

  fclose(file_object);
  return 0;
}