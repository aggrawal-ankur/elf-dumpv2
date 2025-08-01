#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "../core_api/elf_parser.h"
#include "ehdr.h"

struct Types e_types[] = {
  {0, "ET_NONE"},
  {1, "ET_REL"},
  {2, "ET_EXEC"},
  {3, "ET_DYN"},
  {4, "ET_CORE"},
  {5, "ET_NUM"}
};

struct Machines e_machines[] = {
  {0, "EM_NONE"},
  {3, "EM_386"},
  {7, "EM_860"},
  {19, "EM_960"},
  {40, "EM_ARM"},
  {62, "EM_X86_64"},
  {183, "EM_AARCH64"},
  {243, "EM_RISCV"},
};

int dump_ehdr(ElfFile* AccessFile){
  FILE* f_obj = fopen("./output/dump.c", "w");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `raw_ehdr`\n");
    return -1;
  }

  fprintf(f_obj, "/* This is the raw C-style dump! */\n\n");

  fprintf(f_obj, "/* Header file to obtain ELF type definitions. */\n");
  fprintf(f_obj, "#include <elf.h>\n\n");

  fprintf(f_obj, "/* ELF file header (ehdr) dump */\n");
  fprintf(f_obj, "Elf64_Ehdr ehdr = {\n");

  fprintf(f_obj, "  /* e_ident[16] */     {\n    ");
  for (int i = 0; i < 16; i++){
    fprintf(f_obj, "0x%02x%s", AccessFile->ehdr->e_ident[i], (i == 15) ? "" : ", ");
  }
  fprintf(f_obj, "\n  },\n");

  for (int i = 0; i < ET_NUM; i++){
    if (e_types[i].value == AccessFile->ehdr->e_type){
      fprintf(f_obj, "  /* e_type      */     %" PRIu16 "        /* %s */,\n", AccessFile->ehdr->e_type, e_types[i].macro);
      break;
    }
  }

  for (int i = 0; i < 8; i++){
    if (e_machines[i].value == AccessFile->ehdr->e_machine){
      fprintf(f_obj, "  /* e_machine   */     %" PRIu16 "       /* %s */,\n", AccessFile->ehdr->e_machine, e_machines[i].macro);
      break;
    }
  }

  fprintf(f_obj, "  /* e_version   */     %" PRIu32 "        /* %s */,\n", AccessFile->ehdr->e_version, (1 == 0) ? "EV_NONE" : "EV_CURRENT");
  fprintf(f_obj, "  /* e_ehsize    */     %" PRIu16 "       /* size in decimal bytes */,\n", AccessFile->ehdr->e_ehsize);
  fprintf(f_obj, "  /* e_entry     */     %" PRIu64 ",    /* bytes (in decimal) in the binary */\n", AccessFile->ehdr->e_entry);
  fprintf(f_obj, "  /* e_phoff     */     %" PRIu64 "       /* bytes (in decimal) in the binary */,\n", AccessFile->ehdr->e_phoff);
  fprintf(f_obj, "  /* e_phnum     */     %" PRIu16 ",\n", AccessFile->ehdr->e_phnum);
  fprintf(f_obj, "  /* e_phentsize */     %" PRIu16 "       /* size in decimal bytes */,\n", AccessFile->ehdr->e_phentsize);
  fprintf(f_obj, "  /* e_shoff     */     %" PRIu64 "    /* bytes (in decimal) in the binary */,\n", AccessFile->ehdr->e_shoff);
  fprintf(f_obj, "  /* e_shnum     */     %" PRIu16 ",\n", AccessFile->ehdr->e_shnum);
  fprintf(f_obj, "  /* e_shentsize */     %" PRIu16 ",      /* size in decimal bytes */\n", AccessFile->ehdr->e_shentsize);
  fprintf(f_obj, "  /* e_shstrndx  */     %" PRIu16 ",\n", AccessFile->ehdr->e_shstrndx);
  fprintf(f_obj, "  /* e_flags     */     %" PRIu32 ",\n", AccessFile->ehdr->e_flags);
  fprintf(f_obj, "};\n");

  fclose(f_obj);
  return 0;
}