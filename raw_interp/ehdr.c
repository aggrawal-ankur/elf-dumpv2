#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "../core_api/elf_parser.h"

// int raw_ehdr(FILE* f_obj, ElfFile* AccessFile){
int raw_ehdr(ElfFile* AccessFile){
  FILE* f_obj = fopen("./output/raw_dump.c", "w");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `raw_ehdr`\n");
    return -1;
  }

  fprintf(f_obj, "/* This is the raw C-style dump! */\n\n");

  fprintf(f_obj, "/* Header file to obtain ELF type definitions. */\n");
  fprintf(f_obj, "#include <elf.h>\n\n");

  fprintf(f_obj, "/* ELF file header (ehdr) dump */\n");
  fprintf(f_obj, "Elf64_Ehdr ehdr = {\n");
  
  fprintf(f_obj, "  /* e_ident[16] */     { ");
  for (int i = 0; i < 16; i++){
    fprintf(f_obj, "0x%02x%s", AccessFile->ehdr->e_ident[i], (i == 15) ? "" : ", ");
  }
  fprintf(f_obj, "},\n");
  fprintf(f_obj, "  /* e_type      */     %" PRIu16 ",\n", AccessFile->ehdr->e_type);
  fprintf(f_obj, "  /* e_machine   */     %" PRIu16 ",\n", AccessFile->ehdr->e_machine);
  fprintf(f_obj, "  /* e_version   */     %" PRIu32 ",\n", AccessFile->ehdr->e_version);
  fprintf(f_obj, "  /* e_ehsize    */     %" PRIu16 "       /* size in decimal bytes */,\n", AccessFile->ehdr->e_ehsize);
  fprintf(f_obj, "  /* e_entry     */     %" PRIu64 ",    /* in decimal */\n", AccessFile->ehdr->e_entry);
  fprintf(f_obj, "  /* e_phoff     */     %" PRIu64 "       /* in decimal */,\n", AccessFile->ehdr->e_phoff);
  fprintf(f_obj, "  /* e_phnum     */     %" PRIu16 ",\n", AccessFile->ehdr->e_phnum);
  fprintf(f_obj, "  /* e_phentsize */     %" PRIu16 "       /* size in decimal bytes */,\n", AccessFile->ehdr->e_phentsize);
  fprintf(f_obj, "  /* e_shoff     */     %" PRIu64 "    /* in decimal */,\n", AccessFile->ehdr->e_shoff);
  fprintf(f_obj, "  /* e_shnum     */     %" PRIu16 ",\n", AccessFile->ehdr->e_shnum);
  fprintf(f_obj, "  /* e_shentsize */     %" PRIu16 ",      /* size in decimal bytes */\n", AccessFile->ehdr->e_shentsize);
  fprintf(f_obj, "  /* e_shstrndx  */     %" PRIu16 ",\n", AccessFile->ehdr->e_shstrndx);
  fprintf(f_obj, "  /* e_flags     */     %" PRIu32 ",\n", AccessFile->ehdr->e_flags);
  fprintf(f_obj, "};\n");

  fclose(f_obj);
  return 0;
}