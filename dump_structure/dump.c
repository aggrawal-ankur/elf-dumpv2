#include <stdio.h>
#include <inttypes.h>
#include "dump.h"
#include "mappings.h"

#define _PRINT(fo, name, fmt, value, comment) fprintf(fo, "  %-14s = %-10" fmt ",  /* %s */\n", name, value, comment)

int general_dump(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "w");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `general_dump`\n");
    return -1;
  }

  fprintf(fobj, "/* C-style dump of %s! */\n\n", AccessFile->filename);
  fprintf(fobj, "#include <elf.h>\n\n");

  fclose(fobj);
  return 0;
}

int dump_ehdr(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_ehdr`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Ehdr ehdr = {\n");

  fprintf(fobj, "  e_ident[16] =  {\n    ");
  for (int i = 0; i < 16; i++){
    fprintf(fobj, "0x%02x%s", AccessFile->ehdr->e_ident[i], (i == 15) ? "" : ", ");
  }
  fprintf(fobj, "\n  },\n");

  for (int i = 0; i < ET_NUM; i++){
    if (d_ehtypes[i].value == AccessFile->ehdr->e_type){
      _PRINT(fobj, "e_type", PRIu16, AccessFile->ehdr->e_type, d_ehtypes[i].macro);
      break;
    }
  }

  for (int i = 0; i < 8; i++){
    if (d_ehmachines[i].value == AccessFile->ehdr->e_machine){
      _PRINT(fobj, "e_machine", PRIu16, AccessFile->ehdr->e_machine, d_ehmachines[i].macro);
      break;
    }
  }

  _PRINT(fobj, "e_version",   PRIu32, AccessFile->ehdr->e_version, (1 == 0) ? "EV_NONE" : "EV_CURRENT");
  _PRINT(fobj, "e_ehsize",    PRIu16, AccessFile->ehdr->e_ehsize,    "size (in bytes)");
  _PRINT(fobj, "e_entry",     PRIu64, AccessFile->ehdr->e_entry,     "(bytes into file)");
  _PRINT(fobj, "e_phoff",     PRIu64, AccessFile->ehdr->e_phoff,     "(bytes into file)");
  _PRINT(fobj, "e_phnum",     PRIu16, AccessFile->ehdr->e_phnum,     "");
  _PRINT(fobj, "e_phentsize", PRIu16, AccessFile->ehdr->e_phentsize, "size (in bytes)");
  _PRINT(fobj, "e_shoff",     PRIu64, AccessFile->ehdr->e_shoff,     "(bytes into file)");
  _PRINT(fobj, "e_shnum",     PRIu16, AccessFile->ehdr->e_shnum,     "");
  _PRINT(fobj, "e_shentsize", PRIu16, AccessFile->ehdr->e_shentsize, "size (in bytes)");
  _PRINT(fobj, "e_shstrndx",  PRIu16, AccessFile->ehdr->e_shstrndx,  "");
  _PRINT(fobj, "e_flags",     PRIu32, AccessFile->ehdr->e_flags,     "");
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_phdrs(ElfFile* AccessFile){
  FILE* fobj = fopen("output/dump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.  Inside `dump_phdrs`\n ");
    return -1;
  }

  fprintf(fobj, "/* Program headers (phdrs) dump. */\n");
  fprintf(fobj, "Elf64_Phdr phdrs = {\n");

  
  for (int i = 0; i < AccessFile->ehdr->e_phnum; i++){
    fprintf(fobj, "  {\n");

    for (int j = 0; j < 22; j++){
      if (AccessFile->phdrs[i].p_type == d_phtypes[j].value){
        fprintf(fobj, "    /* p_type      */     %" PRIu32 "      /* %s */,\n", AccessFile->phdrs[i].p_type, d_phtypes[j].macro);
        break;
      }
    }

    fprintf(fobj, "    /* p_flags     */     %" PRIu32 "      /* ", AccessFile->phdrs[i].p_flags);
    if (AccessFile->phdrs[i].p_flags & d_phflags[0].value) fprintf(fobj, d_phflags[0].macro);
    if (AccessFile->phdrs[i].p_flags & d_phflags[1].value) fprintf(fobj, d_phflags[1].macro);
    if (AccessFile->phdrs[i].p_flags & d_phflags[2].value) fprintf(fobj, d_phflags[2].macro);
    fprintf(fobj, " */,\n");

    fprintf(fobj, "    /* p_offset    */     %" PRIu64 "      /* bytes (in decimal) in the binary */,\n", AccessFile->phdrs[i].p_offset);
    fprintf(fobj, "    /* p_vaddr     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_vaddr);
    fprintf(fobj, "    /* p_paddr     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_paddr);
    fprintf(fobj, "    /* p_filesz    */     %" PRIu64 "      /* size in (decimal) bytes */,\n", AccessFile->phdrs[i].p_filesz);
    fprintf(fobj, "    /* p_memsz     */     %" PRIu64 "      /* size in (decimal) bytes */,\n", AccessFile->phdrs[i].p_memsz);
    fprintf(fobj, "    /* p_align     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_align);
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_shdrs(ElfFile* AccessFile){
  FILE* fobj = fopen("output/dump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed. Inside `dump_shdrs`\n");
    return -1;
  }

  fprintf(fobj, "/* Section headers (shdrs) dump. */\n");
  fprintf(fobj, "Elf64_Shdr shdrs = {\n");

  for (int i = 0; i < AccessFile->ehdr->e_shnum; i++){
    fprintf(fobj, "  {\n");
    fprintf(fobj, "    /* sh_name         */     %" PRIu32 "       /* offset (in decimal) in section header string table */ ,\n", AccessFile->shdrs[i].sh_name);

    for (int j = 0; j < 36; j++){
      if (AccessFile->shdrs[i].sh_type == d_shtypes[j].value){
        fprintf(fobj, "    /* sh_type         */     %" PRIu32 "         /* %s */,\n", AccessFile->shdrs[i].sh_type, d_shtypes[j].macro);
        break;
      }
    }

    fprintf(fobj, "    /* sh_flags        */     %" PRIu64 "         /* ", AccessFile->shdrs[i].sh_flags);
    for (int k = 0; k < 16; k++){
      if (AccessFile->shdrs[i].sh_flags & d_shflags[k].value) fprintf(fobj, d_shflags[k].macro);
    }
    fprintf(fobj, " */,\n");

    fprintf(fobj, "    /* sh_addr         */     %" PRIu64 "     /* Section virtual addr at execution (in decimal) */,\n", AccessFile->shdrs[i].sh_addr);
    fprintf(fobj, "    /* sh_offset       */     %" PRIu64 "     /* bytes (in decimal) in the binary */,\n", AccessFile->shdrs[i].sh_offset);
    fprintf(fobj, "    /* sh_size         */     %" PRIu64 "         /* in bytes (decimal) */,\n", AccessFile->shdrs[i].sh_size);
    fprintf(fobj, "    /* sh_link         */     %" PRIu32 ",\n", AccessFile->shdrs[i].sh_link);
    fprintf(fobj, "    /* sh_info         */     %" PRIu32 ",\n", AccessFile->shdrs[i].sh_info);
    fprintf(fobj, "    /* sh_addralign    */     %" PRIu64 ",\n", AccessFile->shdrs[i].sh_addralign);
    fprintf(fobj, "    /* sh_entsize      */     %" PRIu64 "         /* in bytes (decimal) */,\n", AccessFile->shdrs[i].sh_entsize);
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_shstrtab(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_shstrtab`\n");
    return -1;
  }

  fprintf(fobj, "/* Section header string table (.shstrtab) flat-dump. */\n");
  fprintf(fobj, "char* r_shstrtab = {\n  ");
  for (int i = 0; i < AccessFile->r_shstr_count; i++){
    if (AccessFile->r_shstrtab[i] == '\0'){
      fprintf(fobj, "'\\0', ");
      continue;
    }
    fprintf(fobj, "'%c', ", AccessFile->r_shstrtab[i]);
  }
  fprintf(fobj, "\n};\n\n");

  fprintf(fobj, "/* Section header string table (.shstrtab) formatted-dump. */\n");
  fprintf(fobj, "char** f_shstrtab = {\n");
  for (int i = 0; i < AccessFile->f_shstr_count; i++){
    fprintf(fobj, "  \"%s\",\n", AccessFile->f_shstrtab[i]);
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_strtab(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_strtab`\n");
    return -1;
  }

  fprintf(fobj, "/* String table (.strtab) flat-dump. */\n");
  fprintf(fobj, "char* r_strtab = {\n  ");

  for (int i = 0; i < AccessFile->r_str_count; i++){
    if (AccessFile->r_strtab[i] == '\0'){
      fprintf(fobj, "'\\0', ");
      continue;
    }
    fprintf(fobj, "'%c', ", AccessFile->r_strtab[i]);
  }
  fprintf(fobj, "\n};\n\n");

  fprintf(fobj, "/* String table (.strtab) formatted-dump. */\n");
  fprintf(fobj, "char** f_strtab = {\n");

  for (int i = 0; i < AccessFile->f_str_count; i++){
    fprintf(fobj, "  \"%s\",\n", AccessFile->f_strtab[i]);
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_symtab(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_symtab`\n");
    return -1;
  }

  fprintf(fobj, "/* Symbol table (.symtab) dump. */\n");
  fprintf(fobj, "Elf64_Sym symtab = {\n");

  for (int i = 0; i < AccessFile->symtab_count; i++){
    fprintf(fobj, "  {\n");
    fprintf(fobj, "    /* looped_idx   */     %d,     /* loop counter */\n", i);
    fprintf(fobj, "    /* st_name      */     %" PRIu32 ",     /* offset (decimal ) in .strtab */\n\n", AccessFile->symtab[i].st_name);
    fprintf(fobj, "    /* st_info      */ {          /* %d */\n", AccessFile->symtab[i].st_info);

    for (int j = 0; j < 7; j++){
      if ((AccessFile->symtab[i].st_info & 0xf) == d_sttypes[j].value){
        fprintf(fobj, "      /* type       */     %d,     /* %s */\n", AccessFile->symtab[i].st_info & 0xf, d_sttypes[j].macro);
        break;
      }
    }

    for (int k = 0; k < 4; k++){
      if ((AccessFile->symtab[i].st_info >> 4) == d_stbinds[k].value){
        fprintf(fobj, "      /* binding    */     %d,     /* %s */\n", AccessFile->symtab[i].st_info >> 4, d_stbinds[k].macro);
        break;
      }
    }
    fprintf(fobj, "    },\n\n");
    
    for (int l = 0; l < 4; l++){
      if ((AccessFile->symtab[i].st_other & 0x03) == d_stvisible[l].value){
        fprintf(fobj, "    /* st_other     */     %d,     /* symbol visibility, %s */\n", AccessFile->symtab[i].st_other, d_stvisible[l].macro);
        break;
      }
    }

    fprintf(fobj, "    /* st_shdx      */     %" PRIu16 ",     /* section (idx) it is present in */\n", AccessFile->symtab[i].st_shndx);
    fprintf(fobj, "    /* st_value     */     %" PRIu64 ",     /* symbol value (in decimal) */\n", AccessFile->symtab[i].st_value);
    fprintf(fobj, "    /* st_size      */     %" PRIu64 ",     /* symbol size (in decimal) */\n", AccessFile->symtab[i].st_size);
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_dynsym(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_dynsym`\n");
    return -1;
  }

  fprintf(fobj, "/* Dynamic Symbol table (.dynsym) dump. */\n");
  fprintf(fobj, "Elf64_Sym dynsym = {\n");

  for (int i = 0; i < AccessFile->dynsym_count; i++){
    fprintf(fobj, "  {\n");
    fprintf(fobj, "    /* looped_idx   */     %d,     /* loop counter */\n", i);
    fprintf(fobj, "    /* st_name      */     %" PRIu32 ",     /* offset (decimal ) in .strtab */\n\n", AccessFile->dynsym[i].st_name);
    fprintf(fobj, "    /* st_info      */ {          /* %d */\n", AccessFile->dynsym[i].st_info);

    for (int j = 0; j < 7; j++){
      if ((AccessFile->dynsym[i].st_info & 0xf) == d_sttypes[j].value){
        fprintf(fobj, "      /* type       */     %d,     /* %s */\n", AccessFile->dynsym[i].st_info & 0xf, d_sttypes[j].macro);
        break;
      }
    }

    for (int k = 0; k < 4; k++){
      if ((AccessFile->dynsym[i].st_info >> 4) == d_stbinds[k].value){
        fprintf(fobj, "      /* binding    */     %d,     /* %s */\n", AccessFile->dynsym[i].st_info >> 4, d_stbinds[k].macro);
        break;
      }
    }
    fprintf(fobj, "    },\n\n");
    
    for (int l = 0; l < 4; l++){
      if ((AccessFile->dynsym[i].st_other & 0x03) == d_stvisible[l].value){
        fprintf(fobj, "    /* st_other     */     %d,     /* symbol visibility, %s */\n", AccessFile->dynsym[i].st_other, d_stvisible[l].macro);
        break;
      }
    }

    fprintf(fobj, "    /* st_shdx      */     %" PRIu16 ",     /* section (idx) it is present in */\n", AccessFile->dynsym[i].st_shndx);
    fprintf(fobj, "    /* st_value     */     %" PRIu64 ",     /* symbol value (in decimal) */\n", AccessFile->dynsym[i].st_value);
    fprintf(fobj, "    /* st_size      */     %" PRIu64 ",     /* symbol size (in decimal) */\n", AccessFile->dynsym[i].st_size);
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_relocations(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_relocations`\n");
    return -1;
  }

  fprintf(fobj, "/* Eager Binding Relocations Table (.rela.dyn) dump. */\n");
  fprintf(fobj, "Elf64_Rela rela_dyn = {\n");
  for (int i = 0; i < AccessFile->reladyn_count; i++){
    fprintf(fobj, "  {\n");
    fprintf(fobj, "    /* r_offset       */     %" PRIu64 "       /* offset (in decimal) in the binary */,\n\n", AccessFile->reladyn[i].r_offset);
    fprintf(fobj, "    /* r_info         */ {               /* %" PRIx64 ",\n", AccessFile->reladyn[i].r_info);

    for (int j = 0; j < 40; j++){
      if ((AccessFile->reladyn[i].r_info & 0xffffffff) == rtypes[j].value){
        fprintf(fobj, "      /* rel_type     */     %" PRIu64 "           /* %s */,\n", AccessFile->reladyn[i].r_info & 0xffffffff, rtypes[j].macro);
        break;
      }
    }
    fprintf(fobj, "      /* sym_idx      */     %" PRIu64 ",\n", AccessFile->reladyn[i].r_info  >> 32);
    fprintf(fobj, "    },\n\n");
    fprintf(fobj, "    /* r_addend       */     %" PRIi64 ",\n", AccessFile->reladyn[i].r_addend);
    fprintf(fobj, "  },\n");
  }

  fprintf(fobj, "};\n\n");

  fprintf(fobj, "/* Lazy Binding Relocations Table (.rela.plt) dump. */\n");
  fprintf(fobj, "Elf64_Rela rela_plt = {\n");
  for (int i = 0; i < AccessFile->relaplt_count; i++){
    fprintf(fobj, "  {\n");
    fprintf(fobj, "    /* r_offset       */     %" PRIu64 "       /* offset (in decimal) in the binary */,\n\n", AccessFile->reladyn[i].r_offset);
    fprintf(fobj, "    /* r_info         */ {               /* %" PRIx64 ",\n", AccessFile->relaplt[i].r_info);

    for (int j = 0; j < 40; j++){
      if ((AccessFile->relaplt[i].r_info & 0xffffffff) == rtypes[j].value){
        fprintf(fobj, "      /* rel_type     */     %" PRIu64 "           /* %s */,\n", AccessFile->relaplt[i].r_info & 0xffffffff, rtypes[j].macro);
        break;
      }
    }
    fprintf(fobj, "      /* sym_idx      */     %" PRIu64 ",\n", AccessFile->relaplt[i].r_info  >> 32);
    fprintf(fobj, "    },\n\n");
    fprintf(fobj, "    /* r_addend       */     %" PRIi64 ",\n", AccessFile->relaplt[i].r_addend);
    fprintf(fobj, "  },\n");
  }

  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_dynstr(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_dynstr`\n");
    return -1;
  }

  fprintf(fobj, "/* Dynamic String Table (.dynstr) flat-dump. */\n");
  fprintf(fobj, "char* r_dynstr = {\n  ");

  for (int i = 0; i < AccessFile->r_dstr_count; i++){
    if (AccessFile->r_dynstr[i] == '\0'){
      fprintf(fobj, "'\\0', ");
      continue;
    }
    fprintf(fobj, "'%c', ", AccessFile->r_dynstr[i]);
  }
  fprintf(fobj, "\n};\n\n");

  fprintf(fobj, "/* Dynamic String Table (.dynstr) formatted-dump. */\n");
  fprintf(fobj, "char** f_dynstr = {\n");

  for (int i = 0; i < AccessFile->f_dstr_count; i++){
    fprintf(fobj, "  \"%s\",\n", AccessFile->f_dynstr[i]);
  }
  fprintf(fobj, "};\n\n\n");

  fclose(fobj);
  return 0;
}

int dump_dynamic(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_dynstr`\n");
    return -1;
  }

  fprintf(fobj, "/* Dynamic section dump. */\n");
  fprintf(fobj, "Elf64_Dyn dynamic = {\n");

  for (int i = 0; i < AccessFile->dyn_ent; i++){
    fprintf(fobj, "  {\n");
    for (int k = 0; k < 47; k++){
      if (AccessFile->dynamic[i].d_tag == d_dtypes[k].value){
        fprintf(fobj, "    /* d_tag */        %" PRIi64 "    /* entry type, %s */,\n", AccessFile->dynamic[i].d_tag, d_dtypes[k].macro);
        break;
      }
    }
    fprintf(fobj, "    /* d_un  */   {\n");
    fprintf(fobj, "      /* d_ptr */      %" PRIu64 "    /* address value (in decimal) */,\n", AccessFile->dynamic[i].d_un.d_ptr);
    fprintf(fobj, "      /* d_val */      %" PRIu64 "    /* integer value,  */,\n", AccessFile->dynamic[i].d_un.d_val);
    fprintf(fobj, "    }\n");
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_all(ElfFile* AccessFile){
  if (general_dump(AccessFile) != 0){
    fprintf(stderr, "Error in dump_general \n");
  }
  if (dump_ehdr(AccessFile) != 0){
    fprintf(stderr, "Error in dump_ehdr \n");
  }
  if (dump_phdrs(AccessFile) != 0){
    fprintf(stderr, "Error in dump_phdrs \n");
  }
  if (dump_shdrs(AccessFile) != 0){
    fprintf(stderr, "Error in dump_shdrs \n");
  }
  if (dump_shstrtab(AccessFile) != 0){
    fprintf(stderr, "Error in dump_shstrtab \n");
  }
  if (dump_strtab(AccessFile) != 0){
    fprintf(stderr, "Error in dump_strtab \n");
  }
  if (dump_symtab(AccessFile) != 0){
    fprintf(stderr, "Error in dump_symtab \n");
  }
  if (dump_dynsym(AccessFile) != 0){
    fprintf(stderr, "Error in dump_dynsym \n");
  }
  if (dump_relocations(AccessFile) != 0){
    fprintf(stderr, "Error in dump_relocs \n");
  }
  if (dump_dynstr(AccessFile) != 0){
    fprintf(stderr, "Error in dump_dynstr \n");
  }
  if (dump_dynamic(AccessFile) != 0){
    fprintf(stderr, "Error in dump_dynamic \n");
  }
  return 0;
}

int dump_reladyn(ElfFile* AccessFile){return 0;}
int dump_relaplt(ElfFile* AccessFile){return 0;}