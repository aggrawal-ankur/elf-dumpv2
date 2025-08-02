#include <stdio.h>
#include "../core_api/elf_parser.h"

int dump_strtab(ElfFile* AccessELF){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_strtab`\n");
    return -1;
  }

  fprintf(f_obj, "/* String table (.strtab) flat-dump. */\n");
  fprintf(f_obj, "char* r_strtab = {\n  ");

  for (int i = 0; i < AccessELF->r_str_count; i++){
    if (AccessELF->r_strtab[i] == '\0'){
      fprintf(f_obj, "'\\0', ");
      continue;
    }
    fprintf(f_obj, "'%c', ", AccessELF->r_strtab[i]);
  }
  fprintf(f_obj, "\n};\n\n");

  fprintf(f_obj, "/* String table (.strtab) formatted-dump. */\n");
  fprintf(f_obj, "char** f_strtab = {\n");

  for (int i = 0; i < AccessELF->f_str_count; i++){
    fprintf(f_obj, "  \"%s\",\n", AccessELF->f_strtab[i]);
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}