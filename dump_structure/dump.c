#include <stdio.h>
#include <inttypes.h>
#include "dump.h"
#include "mappings.h"

int general_dump(){
  FILE* f_obj = fopen("./output/dump.c", "w");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `general_dump`\n");
    return -1;
  }

  fprintf(f_obj, "/* This is the raw C-style dump! */\n\n");

  fprintf(f_obj, "/* Header file to obtain ELF type definitions. */\n");
  fprintf(f_obj, "#include <elf.h>\n\n");

  fclose(f_obj);
  return 0;
}

int dump_ehdr(ElfFile* AccessFile){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_ehdr`\n");
    return -1;
  }

  fprintf(f_obj, "/* ELF file header (ehdr) dump. */\n");
  fprintf(f_obj, "Elf64_Ehdr ehdr = {\n");

  fprintf(f_obj, "  /* e_ident[16] */     {\n    ");
  for (int i = 0; i < 16; i++){
    fprintf(f_obj, "0x%02x%s", AccessFile->ehdr->e_ident[i], (i == 15) ? "" : ", ");
  }
  fprintf(f_obj, "\n  },\n");

  for (int i = 0; i < ET_NUM; i++){
    if (d_ehtypes[i].value == AccessFile->ehdr->e_type){
      fprintf(f_obj, "  /* e_type        */     %" PRIu16 "        /* %s */,\n", AccessFile->ehdr->e_type, d_ehtypes[i].macro);
      break;
    }
  }

  for (int i = 0; i < 8; i++){
    if (d_ehmachines[i].value == AccessFile->ehdr->e_machine){
      fprintf(f_obj, "  /* e_machine     */     %" PRIu16 "       /* %s */,\n", AccessFile->ehdr->e_machine, d_ehmachines[i].macro);
      break;
    }
  }

  fprintf(f_obj, "  /* e_version     */     %" PRIu32 "        /* %s */,\n", AccessFile->ehdr->e_version, (1 == 0) ? "EV_NONE" : "EV_CURRENT");
  fprintf(f_obj, "  /* e_ehsize      */     %" PRIu16 "       /* size in decimal bytes */,\n", AccessFile->ehdr->e_ehsize);
  fprintf(f_obj, "  /* e_entry       */     %" PRIu64 ",    /* bytes (in decimal) in the binary */\n", AccessFile->ehdr->e_entry);
  fprintf(f_obj, "  /* e_phoff       */     %" PRIu64 "       /* bytes (in decimal) in the binary */,\n", AccessFile->ehdr->e_phoff);
  fprintf(f_obj, "  /* e_phnum       */     %" PRIu16 ",\n", AccessFile->ehdr->e_phnum);
  fprintf(f_obj, "  /* e_phentsize   */     %" PRIu16 "       /* size in decimal bytes */,\n", AccessFile->ehdr->e_phentsize);
  fprintf(f_obj, "  /* e_shoff       */     %" PRIu64 "    /* bytes (in decimal) in the binary */,\n", AccessFile->ehdr->e_shoff);
  fprintf(f_obj, "  /* e_shnum       */     %" PRIu16 ",\n", AccessFile->ehdr->e_shnum);
  fprintf(f_obj, "  /* e_shentsize   */     %" PRIu16 ",      /* size in decimal bytes */\n", AccessFile->ehdr->e_shentsize);
  fprintf(f_obj, "  /* e_shstrndx    */     %" PRIu16 ",\n", AccessFile->ehdr->e_shstrndx);
  fprintf(f_obj, "  /* e_flags       */     %" PRIu32 ",\n", AccessFile->ehdr->e_flags);
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}

int dump_phdrs(ElfFile* AccessFile){
  FILE* f_obj = fopen("output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.  Inside `dump_phdrs`\n ");
    return -1;
  }

  fprintf(f_obj, "/* Program headers (phdrs) dump. */\n");
  fprintf(f_obj, "Elf64_Phdr phdrs = {\n");

  
  for (int i = 0; i < AccessFile->ehdr->e_phnum; i++){
    fprintf(f_obj, "  {\n");

    for (int j = 0; j < 22; j++){
      if (AccessFile->phdrs[i].p_type == d_phtypes[j].value){
        fprintf(f_obj, "    /* p_type      */     %" PRIu32 "      /* %s */,\n", AccessFile->phdrs[i].p_type, d_phtypes[j].macro);
        break;
      }
    }

    fprintf(f_obj, "    /* p_flags     */     %" PRIu32 "      /* ", AccessFile->phdrs[i].p_flags);
    if (AccessFile->phdrs[i].p_flags & d_phflags[0].value) fprintf(f_obj, d_phflags[0].macro);
    if (AccessFile->phdrs[i].p_flags & d_phflags[1].value) fprintf(f_obj, d_phflags[1].macro);
    if (AccessFile->phdrs[i].p_flags & d_phflags[2].value) fprintf(f_obj, d_phflags[2].macro);
    fprintf(f_obj, " */,\n");

    fprintf(f_obj, "    /* p_offset    */     %" PRIu64 "      /* bytes (in decimal) in the binary */,\n", AccessFile->phdrs[i].p_offset);
    fprintf(f_obj, "    /* p_vaddr     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_vaddr);
    fprintf(f_obj, "    /* p_paddr     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_paddr);
    fprintf(f_obj, "    /* p_filesz    */     %" PRIu64 "      /* size in (decimal) bytes */,\n", AccessFile->phdrs[i].p_filesz);
    fprintf(f_obj, "    /* p_memsz     */     %" PRIu64 "      /* size in (decimal) bytes */,\n", AccessFile->phdrs[i].p_memsz);
    fprintf(f_obj, "    /* p_align     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_align);
    fprintf(f_obj, "  },\n");
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}

int dump_shdrs(ElfFile* AccessFile){
  FILE* f_obj = fopen("output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed. Inside `dump_shdrs`\n");
    return -1;
  }

  fprintf(f_obj, "/* Section headers (shdrs) dump. */\n");
  fprintf(f_obj, "Elf64_Shdr shdrs = {\n");

  for (int i = 0; i < AccessFile->ehdr->e_shnum; i++){
    fprintf(f_obj, "  {\n");
    fprintf(f_obj, "    /* sh_name         */     %" PRIu32 "       /* offset (in decimal) in section header string table */ ,\n", AccessFile->shdrs[i].sh_name);

    for (int j = 0; j < 36; j++){
      if (AccessFile->shdrs[i].sh_type == d_shtypes[j].value){
        fprintf(f_obj, "    /* sh_type         */     %" PRIu32 "         /* %s */,\n", AccessFile->shdrs[i].sh_type, d_shtypes[j].macro);
        break;
      }
    }

    fprintf(f_obj, "    /* sh_flags        */     %" PRIu64 "         /* ", AccessFile->shdrs[i].sh_flags);
    for (int k = 0; k < 16; k++){
      if (AccessFile->shdrs[i].sh_flags & d_shflags[k].value) fprintf(f_obj, d_shflags[k].macro);
    }
    fprintf(f_obj, " */,\n");

    fprintf(f_obj, "    /* sh_addr         */     %" PRIu64 "     /* Section virtual addr at execution (in decimal) */,\n", AccessFile->shdrs[i].sh_addr);
    fprintf(f_obj, "    /* sh_offset       */     %" PRIu64 "     /* bytes (in decimal) in the binary */,\n", AccessFile->shdrs[i].sh_offset);
    fprintf(f_obj, "    /* sh_size         */     %" PRIu64 "         /* in bytes (decimal) */,\n", AccessFile->shdrs[i].sh_size);
    fprintf(f_obj, "    /* sh_link         */     %" PRIu32 ",\n", AccessFile->shdrs[i].sh_link);
    fprintf(f_obj, "    /* sh_info         */     %" PRIu32 ",\n", AccessFile->shdrs[i].sh_info);
    fprintf(f_obj, "    /* sh_addralign    */     %" PRIu64 ",\n", AccessFile->shdrs[i].sh_addralign);
    fprintf(f_obj, "    /* sh_entsize      */     %" PRIu64 "         /* in bytes (decimal) */,\n", AccessFile->shdrs[i].sh_entsize);
    fprintf(f_obj, "  },\n");
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}

int dump_shstrtab(ElfFile* AccessELF){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_shstrtab`\n");
    return -1;
  }

  fprintf(f_obj, "/* Section header string table (.shstrtab) flat-dump. */\n");
  fprintf(f_obj, "char* r_shstrtab = {\n  ");
  for (int i = 0; i < AccessELF->r_shstr_count; i++){
    if (AccessELF->r_shstrtab[i] == '\0'){
      fprintf(f_obj, "'\\0', ");
      continue;
    }
    fprintf(f_obj, "'%c', ", AccessELF->r_shstrtab[i]);
  }
  fprintf(f_obj, "\n};\n\n");

  fprintf(f_obj, "/* Section header string table (.shstrtab) formatted-dump. */\n");
  fprintf(f_obj, "char** f_shstrtab = {\n");
  for (int i = 0; i < AccessELF->f_shstr_count; i++){
    fprintf(f_obj, "  \"%s\",\n", AccessELF->f_shstrtab[i]);
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}

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

int dump_symtab(ElfFile* AccessFile){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_symtab`\n");
    return -1;
  }

  fprintf(f_obj, "/* Symbol table (.symtab) dump. */\n");
  fprintf(f_obj, "Elf64_Sym symtab = {\n");

  for (int i = 0; i < AccessFile->symtab_count; i++){
    fprintf(f_obj, "  {\n");
    fprintf(f_obj, "    /* st_name      */     %" PRIu32 ",     /* offset (decimal ) in .strtab */\n\n", AccessFile->symtab[i].st_name);
    fprintf(f_obj, "    /* st_info      */ {          /* %d */\n", AccessFile->symtab[i].st_info);

    for (int j = 0; j < 7; j++){
      if ((AccessFile->symtab[i].st_info & 0xf) == d_sttypes[j].value){
        fprintf(f_obj, "      /* type       */     %d,     /* %s */\n", AccessFile->symtab[i].st_info & 0xf, d_sttypes[j].macro);
        break;
      }
    }

    for (int k = 0; k < 4; k++){
      if ((AccessFile->symtab[i].st_info >> 4) == d_stbinds[k].value){
        fprintf(f_obj, "      /* binding    */     %d,     /* %s */\n", AccessFile->symtab[i].st_info >> 4, d_stbinds[k].macro);
        break;
      }
    }
    fprintf(f_obj, "    },\n\n");
    
    for (int l = 0; l < 4; l++){
      if ((AccessFile->symtab[i].st_other & 0x03) == d_stvisible[l].value){
        fprintf(f_obj, "    /* st_other     */     %d,     /* symbol visibility, %s */\n", AccessFile->symtab[i].st_other, d_stvisible[l].macro);
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


int dump_dynsym(ElfFile* AccessFile){
  FILE* f_obj = fopen("./output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n  Inside `dump_dynsym`\n");
    return -1;
  }

  fprintf(f_obj, "/* Dynamic Symbol table (.dynsym) dump. */\n");
  fprintf(f_obj, "Elf64_Sym dynsym = {\n");

  for (int i = 0; i < AccessFile->dynsym_count; i++){
    fprintf(f_obj, "  {\n");
    fprintf(f_obj, "    /* st_name      */     %" PRIu32 ",     /* offset (decimal ) in .strtab */\n\n", AccessFile->dynsym[i].st_name);
    fprintf(f_obj, "    /* st_info      */ {          /* %d */\n", AccessFile->dynsym[i].st_info);

    for (int j = 0; j < 7; j++){
      if ((AccessFile->dynsym[i].st_info & 0xf) == d_sttypes[j].value){
        fprintf(f_obj, "      /* type       */     %d,     /* %s */\n", AccessFile->dynsym[i].st_info & 0xf, d_sttypes[j].macro);
        break;
      }
    }

    for (int k = 0; k < 4; k++){
      if ((AccessFile->dynsym[i].st_info >> 4) == d_stbinds[k].value){
        fprintf(f_obj, "      /* binding    */     %d,     /* %s */\n", AccessFile->dynsym[i].st_info >> 4, d_stbinds[k].macro);
        break;
      }
    }
    fprintf(f_obj, "    },\n\n");
    
    for (int l = 0; l < 4; l++){
      if ((AccessFile->dynsym[i].st_other & 0x03) == d_stvisible[l].value){
        fprintf(f_obj, "    /* st_other     */     %d,     /* symbol visibility, %s */\n", AccessFile->dynsym[i].st_other, d_stvisible[l].macro);
        break;
      }
    }

    fprintf(f_obj, "    /* st_shdx      */     %" PRIu16 ",     /* section (idx) it is present in */\n", AccessFile->dynsym[i].st_shndx);
    fprintf(f_obj, "    /* st_value     */     %" PRIu64 ",     /* symbol value (in decimal) */\n", AccessFile->dynsym[i].st_value);
    fprintf(f_obj, "    /* st_size      */     %" PRIu64 ",     /* symbol size (in decimal) */\n", AccessFile->dynsym[i].st_size);
    fprintf(f_obj, "  },\n");
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}