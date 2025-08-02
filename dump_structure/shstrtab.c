#include <stdio.h>
#include <inttypes.h>
#include "../core_api/elf_parser.h"

int dump_shstrtab(ElfFile* AccessELF){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_shstrtab`\n");
    return -1;
  }

  fprintf(f_obj, "/* Section header string table (.shstrtab) flat-dump. */\n");
  fprintf(f_obj, "char* shstrtab = {\n  ");
  for (int i = 0; i < AccessELF->r_shstr_count; i++){
    if (AccessELF->r_shstrtab[i] == '\0'){
      fprintf(f_obj, "'\\0', ");
      continue;
    }
    fprintf(f_obj, "'%c', ", AccessELF->r_shstrtab[i]);
  }
  fprintf(f_obj, "\n};\n\n");

  fprintf(f_obj, "/* Section header string table (.shstrtab) formatted-dump. */\n");
  fprintf(f_obj, "char** shstrtab = {\n");
  for (int i = 0; i < AccessELF->f_shstr_count; i++){
    fprintf(f_obj, "  {\"%s\"},\n", AccessELF->f_shstrtab[i]);
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}