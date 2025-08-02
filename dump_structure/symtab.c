#include <stdio.h>
#include <inttypes.h>
#include "../core_api/elf_parser.h"
#include "./symtab.h"

struct stTypes st_types[] = {
  {0, "STT_NOTYPE"},
  {1, "STT_OBJECT"},
  {2, "STT_FUNC"},
  {3, "STT_SECTION"},
  {4, "STT_FILE"},
  {5, "STT_COMMON"},
  {6, "STT_TLS"},
};

struct Binds sbinds[] = {
  {0,  "STB_LOCAL"},
  {1,  "STB_GLOBAL"},
  {2,  "STB_WEAK"},
  {10, "STB_GNU_UNIQUE"},
};

struct Visibility svisible[] = {
  {0, "STV_DEFAULT"},
  {1, "STV_INTERNAL"},
  {2, "STV_HIDDEN"},
  {3, "STV_PROTECTED"},
};

int dump_symtab(ElfFile* AccessFile){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_ehdr`\n");
    return -1;
  }

  fprintf(f_obj, "/* Symbol table (.symtab) dump. */\n");
  fprintf(f_obj, "Elf64_Sym symtab = {\n");

  for (int i = 0; i < AccessFile->symtab_count; i++){
    fprintf(f_obj, "  {\n");
    fprintf(f_obj, "    /* st_name      */     %" PRIu32 ",     /* offset (decimal ) in .strtab */\n\n", AccessFile->symtab[i].st_name);
    fprintf(f_obj, "    /* st_info      */ {          /* %d */\n", AccessFile->symtab[i].st_info);

    for (int j = 0; j < 7; j++){
      if ((AccessFile->symtab[i].st_info & 0xf) == st_types[j].value){
        fprintf(f_obj, "      /* type       */     %d,     /* %s */\n", AccessFile->symtab[i].st_info & 0xf, st_types[j].macro);
        break;
      }
    }

    for (int k = 0; k < 4; k++){
      if ((AccessFile->symtab[i].st_info >> 4) == sbinds[k].value){
        fprintf(f_obj, "      /* binding    */     %d,     /* %s */\n", AccessFile->symtab[i].st_info >> 4, sbinds[k].macro);
        break;
      }
    }
    fprintf(f_obj, "    },\n\n");
    
    for (int l = 0; l < 4; l++){
      if ((AccessFile->symtab[i].st_other & 0x03) == svisible[l].value){
        fprintf(f_obj, "    /* st_other     */     %d,     /* symbol visibility, %s */\n", AccessFile->symtab[i].st_other, svisible[l].macro);
        break;
      }
    }

    fprintf(f_obj, "    /* st_shdx      */     %" PRIu16 ",     /* section (idx) it is present in */\n", AccessFile->symtab[i].st_shndx);
    fprintf(f_obj, "    /* st_value     */     %" PRIu64 ",     /* symbol value (in decimal) */\n", AccessFile->symtab[i].st_value);
    fprintf(f_obj, "    /* st_size      */     %" PRIu64 ",     /* symbol size (in decimal) */\n", AccessFile->symtab[i].st_size);
    fprintf(f_obj, "  },\n");
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}