#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "dump.h"
#include "mappings.h"

char* identvals[] =  {"EI_MAG0", "EI_MAG1", "EI_MAG2", "EI_MAG3", "EI_CLASS", "EI_DATA", "EI_VERSION", "EI_PAD", "EI_NIDENT"};

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

  fprintf(fobj, "  e_ident[16] = {\n");
  for (int i = 0; i < 16; i++){
    switch(i){
      case 0: case 1: case 2: case 3:
        _exPRINT(fobj, i, identvals[i], AccessFile->ehdr->e_ident[i]);
        break;
        case 4:
        _eIPRINT(fobj, i, identvals[i], AccessFile->ehdr->e_ident[i], d_class[AccessFile->ehdr->e_ident[i]].macro);
        break;
        case 5:
        _eIPRINT(fobj, i, identvals[i], AccessFile->ehdr->e_ident[i], ei_data[AccessFile->ehdr->e_ident[i]].macro);
        break;
        case 6:
        _eIPRINT(fobj, i, identvals[i], AccessFile->ehdr->e_ident[i], (1 == 0) ? "EV_NONE" : "EV_CURRENT");
        break;
      default:
        _exPRINT(fobj, i, "EI_PAD", AccessFile->ehdr->e_ident[i]);
    }
  }
  fprintf(fobj, "  },\n");

  for (struct Mapp* types = d_ehtypes; types->macro != NULL; types++){
    if (types->value == AccessFile->ehdr->e_type){
      _cPRINT(fobj, "e_type", PRIu16, AccessFile->ehdr->e_type, types->macro);
      break;
    }
  }

  for (struct Mapp* machines = d_ehmachines; machines->macro != NULL; machines++){
    if (machines->value == AccessFile->ehdr->e_machine){
      _cPRINT(fobj, "e_machine", PRIu16, AccessFile->ehdr->e_machine, machines->macro);
      break;
    }
  }

  _cPRINT(fobj, "e_version",   PRIu32, AccessFile->ehdr->e_version, (1 == 0) ? "EV_NONE" : "EV_CURRENT");
  _dPRINT(fobj, "e_ehsize",    PRIu16, AccessFile->ehdr->e_ehsize,    "/* Size of file header (in bytes) */");
  _xPRINT(fobj, "e_entry",     PRIx64, AccessFile->ehdr->e_entry,     "/* Bytes into file */");
  _dPRINT(fobj, "e_phoff",     PRIu64, AccessFile->ehdr->e_phoff,     "/* Bytes into file */");
  _dPRINT(fobj, "e_phnum",     PRIu16, AccessFile->ehdr->e_phnum,     "/* Number of program headers */");
  _dPRINT(fobj, "e_phentsize", PRIu16, AccessFile->ehdr->e_phentsize, "/* Size of program headers (in bytes) */");
  _dPRINT(fobj, "e_shoff",     PRIu64, AccessFile->ehdr->e_shoff,     "/* Bytes into file */");
  _dPRINT(fobj, "e_shnum",     PRIu16, AccessFile->ehdr->e_shnum,     "/* Number of section headers */");
  _dPRINT(fobj, "e_shentsize", PRIu16, AccessFile->ehdr->e_shentsize, "/* Size of section headers (in bytes) */");
  _dPRINT(fobj, "e_shstrndx",  PRIu16, AccessFile->ehdr->e_shstrndx,  "/* Section header string table index in the section headers table */");
  _xPRINT(fobj, "e_flags",     PRIu32, AccessFile->ehdr->e_flags,     "/* Flags */");
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_phdrs(ElfFile* AccessFile){
  FILE* fobj = fopen("output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.  Inside `dump_phdrs`\n ");
    return -1;
  }

  fprintf(fobj, "Elf64_Phdr phdrs = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->ehdr->e_phnum);

  for (int i = 0; i < AccessFile->ehdr->e_phnum; i++){
    fprintf(fobj, "  /* Program Header #%d */\n", i);
    fprintf(fobj, "  {\n");

    for (struct Mapp* types = d_phtypes; types->macro != NULL; types++){
      if (AccessFile->phdrs[i].p_type == types->value){
        _P1PRINT(fobj, "p_type",   PRIu32, AccessFile->phdrs[i].p_type, types->macro);
        break;
      }
    }

    _PPRINT(fobj,  "p_offset", PRIu64, AccessFile->phdrs[i].p_offset, "OFFSET in the file this segment starts from");
    _P3PRINT(fobj, "p_vaddr",  PRIx64, AccessFile->phdrs[i].p_vaddr,  "Virtual address");
    _P3PRINT(fobj, "p_paddr",  PRIx64, AccessFile->phdrs[i].p_paddr,  "Physical address");
    _PPRINT(fobj,  "p_filesz", PRIu64, AccessFile->phdrs[i].p_filesz, "Segment size in bytes");
    _PPRINT(fobj,  "p_memsz",  PRIu64, AccessFile->phdrs[i].p_memsz,  "Segment size in bytes");

    _P2PRINT(fobj, "p_flags",  PRIu32, AccessFile->phdrs[i].p_flags,  "Memory protection flags:");
    if (AccessFile->phdrs[i].p_flags & d_phflags[0].value) fprintf(fobj, d_phflags[0].macro);
    if (AccessFile->phdrs[i].p_flags & d_phflags[1].value) fprintf(fobj, d_phflags[1].macro);
    if (AccessFile->phdrs[i].p_flags & d_phflags[2].value) fprintf(fobj, d_phflags[2].macro);
    fprintf(fobj, " */,\n");

    _PPRINT(fobj,  "p_align",  PRIu64, AccessFile->phdrs[i].p_align,  "Alignment requirement");
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_shdrs(ElfFile* AccessFile){
  FILE* fobj = fopen("output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed. Inside `dump_shdrs`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Shdr shdrs = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->ehdr->e_shnum);

  for (int i = 0; i < AccessFile->ehdr->e_shnum; i++){
    fprintf(fobj, "  /* Section Header #%d */\n", i);
    fprintf(fobj, "  {\n");

    if (i == 0){
      _PRINT(fobj, "    sh_name",      "d", (0), "No name");
      _PRINT(fobj, "    sh_type",      "d", (0), "SHT_NULL");
      _PRINT(fobj, "    sh_flags",     "d", (0), "No flags");
      _PRINT(fobj, "    sh_addr",      "d", (0), "No Address");
      _PRINT(fobj, "    sh_offset",    "d", (0), "No file offset");
      _PRINT(fobj, "    sh_size",      "d", (0), "No size");
      _PRINT(fobj, "    sh_link",      "d", (0), "[SHN_UNDEF]: No link information");
      _PRINT(fobj, "    sh_info",      "d", (0), "No auxiliary information");
      _PRINT(fobj, "    sh_addralign", "d", (0), "No alignment requirement");
      _PRINT(fobj, "    sh_entsize",   "d", (0), "No entries");
    }

    else{

      _fPRINT(fobj, "    sh_name", PRIu32, AccessFile->shdrs[i].sh_name, "/* OFFSET in .shstrtab");
      char* temp = AccessFile->r_shstrtab;
      temp += AccessFile->shdrs[i].sh_name;
      fprintf(fobj, "[%s] */\n", temp);

      for (struct Mapp* types = d_shtypes; types->macro != NULL; types++){
        if (AccessFile->shdrs[i].sh_type == types->value){
          _iPRINT(fobj, "    sh_type", PRIu32, AccessFile->shdrs[i].sh_type, types->macro);
          break;
        }
      }
      
      _fPRINT(fobj, "    sh_flags", PRIu64, AccessFile->shdrs[i].sh_flags, "/* BIT-MASKED value, interpreted as");
      if (i == 0) fprintf(fobj, "[NO_FLAGS]");
      else {
        for (struct Mapp* flags = d_shflags; flags->macro != NULL; flags++){
          if (AccessFile->shdrs[i].sh_flags & flags->value) fprintf(fobj, "[%s], ", flags->macro);
        }
      }
      fprintf(fobj, " */\n");
      
      _PRINT(fobj, "    sh_addr",      PRIu64, AccessFile->shdrs[i].sh_addr,      "Virtual Address of this section entry");
      _PRINT(fobj, "    sh_offset",    PRIu64, AccessFile->shdrs[i].sh_offset,    "OFFSET in the file this section entry starts from");
      _PRINT(fobj, "    sh_size",      PRIu64, AccessFile->shdrs[i].sh_size,      "Size of this section (in bytes)");
      _PRINT(fobj, "    sh_link",      PRIu32, AccessFile->shdrs[i].sh_link,      "Link informat");
      _PRINT(fobj, "    sh_info",      PRIu32, AccessFile->shdrs[i].sh_info,      "Auxiliary informat");
      _PRINT(fobj, "    sh_addralign", PRIu64, AccessFile->shdrs[i].sh_addralign, "Section alignment requirement");
      _PRINT(fobj, "    sh_entsize",   PRIu64, AccessFile->shdrs[i].sh_entsize,   "The section has fixed size entries of this size (in bytes)");
      
    }
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n");

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
  fprintf(fobj, "};\n\n");

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
  fprintf(fobj, "/* Total Count #%d */\n", AccessFile->f_str_count);
  fprintf(fobj, "char** f_strtab = {\n");

  for (int i = 0; i < AccessFile->f_str_count; i++){
    fprintf(fobj, "  \"%s\",\n", AccessFile->f_strtab[i]);
  }
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_symtab(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_symtab`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Sym symtab = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->symtab_count);

  for (int i = 0; i < AccessFile->symtab_count; i++){
    fprintf(fobj, "  /* ENTRY #%d %s*/\n", i, (i == 0) ? ": STN_UNDEF " : "");
    fprintf(fobj, "  {\n");

    if (i == 0){
      _SPRINT(fobj, "st_name",  PRIu32,  AccessFile->symtab[i].st_name,       "No name");
      _SPRINT(fobj, "st_info.type", "d", AccessFile->symtab[i].st_info & 0xf, "No type");
      _SPRINT(fobj, "st_info.bind", "d", AccessFile->symtab[i].st_info & 0xf, "STB_LOCAL");
      _SPRINT(fobj, "st_other",     "d", AccessFile->symtab[i].st_info >> 4,  "STV_DEFAULT");
      _SPRINT(fobj, "st_shdx",  PRIu16,  AccessFile->symtab[i].st_shndx,      "[STN_UNDEF]: No section");
      _SPRINT(fobj, "st_value", PRIu64,  AccessFile->symtab[i].st_value,      "No value");
      _SPRINT(fobj, "st_size",  PRIu64,  AccessFile->symtab[i].st_size,       "No size");
    }

    else{
      _SnPRINT(fobj, "st_name", PRIu32, AccessFile->symtab[i].st_name, "OFFSET in .strtab");
      char* temp = AccessFile->r_strtab;
      temp += AccessFile->symtab[i].st_name;
      fprintf(fobj, "[%s] */\n", temp);

      for (struct Mapp3* types = d_sttypes; types->macro != NULL; types++){
        if ((AccessFile->symtab[i].st_info & 0xf) == types->value){
          _SPRINT(fobj, "st_info.type", "d", AccessFile->symtab[i].st_info & 0xf, types->macro);
          break;
        }
      }

      for (struct Mapp* bind = d_stbinds; bind->macro; bind++){
        if ((AccessFile->symtab[i].st_info >> 4) == bind->value){
          _SPRINT(fobj, "st_info.bind", "d", AccessFile->symtab[i].st_info >> 4, bind->macro);
          break;
        }
      }

      for (struct Mapp* vis = d_stvisible; vis->macro != NULL; vis++){
        if ((AccessFile->symtab[i].st_other & 0x03) == vis->value){
          _SPRINT(fobj, "st_other",     "d", AccessFile->symtab[i].st_other, vis->macro);
          break;
        }
      }

      switch(AccessFile->symtab[i].st_shndx){
        case SHN_UNDEF:
          _SPRINT(fobj, "st_shdx",  PRIu16, AccessFile->symtab[i].st_shndx, "[SHN_UNDEF]: The symbol is undefined; needs relocation");
          break;
        case SHN_ABS:
          _SPRINT(fobj, "st_shdx",  PRIu16, AccessFile->symtab[i].st_shndx, "[SHN_ABS]: The symbol has an absolute value and will not change on relocation");
          break;
        case SHN_COMMON:
          _SPRINT(fobj, "st_shdx",  PRIu16, AccessFile->symtab[i].st_shndx, "[SHN_COMMON]: The symbol labels a common block which hasn't been allocated yet");
          break;
        default:
          _SnPRINT(fobj, "st_shdx",  PRIu16, AccessFile->symtab[i].st_shndx, (i == 0) ? "No section" : "Section (Idx) the symbol is present in");
          char* temp2 = AccessFile->r_shstrtab;
          temp2 += AccessFile->shdrs[AccessFile->symtab[i].st_shndx].sh_name;
          fprintf(fobj, "[%s] */\n", temp2);
      }

      for (struct Mapp3* types = d_sttypes; types->macro != NULL; types++){
        if ((AccessFile->symtab[i].st_info & 0xf) == types->value) _SPRINT(fobj, "st_value", PRIu64, AccessFile->symtab[i].st_value, types->desc);
      }

      _SPRINT(fobj, "st_size",  PRIu64, AccessFile->symtab[i].st_size, "Symbol size");
    }
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_dynsym(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_dynsym`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Sym dynsym = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->dynsym_count);

  for (int i = 0; i < AccessFile->dynsym_count; i++){
    fprintf(fobj, "  /* ENTRY #%d %s*/\n", i, (i == 0) ? ": STN_UNDEF " : "");
    fprintf(fobj, "  {\n");

    if (i == 0){
      _SPRINT(fobj, "st_name",  PRIu32,  AccessFile->dynsym[i].st_name,       "No name");
      _SPRINT(fobj, "st_info.type", "d", AccessFile->dynsym[i].st_info & 0xf, "No type");
      _SPRINT(fobj, "st_info.bind", "d", AccessFile->dynsym[i].st_info & 0xf, "STB_LOCAL");
      _SPRINT(fobj, "st_other",     "d", AccessFile->dynsym[i].st_info >> 4,  "STV_DEFAULT");
      _SPRINT(fobj, "st_shdx",  PRIu16,  AccessFile->dynsym[i].st_shndx,      "[STN_UNDEF]: No section");
      _SPRINT(fobj, "st_value", PRIu64,  AccessFile->dynsym[i].st_value,      "No value");
      _SPRINT(fobj, "st_size",  PRIu64,  AccessFile->dynsym[i].st_size,       "No size");
    }

    else{
      _SnPRINT(fobj, "st_name", PRIu32, AccessFile->dynsym[i].st_name, "OFFSET in .dynstr");
      char* temp = AccessFile->r_dynstr;
      temp += AccessFile->dynsym[i].st_name;
      fprintf(fobj, "[%s] */\n", temp);

      for (struct Mapp3* types = d_sttypes; types->macro != NULL; types++){
        if ((AccessFile->dynsym[i].st_info & 0xf) == types->value){
          _SPRINT(fobj, "st_info.type", "d", AccessFile->dynsym[i].st_info & 0xf, types->macro);
          break;
        }
      }

      for (struct Mapp* bind = d_stbinds; bind->macro; bind++){
        if ((AccessFile->dynsym[i].st_info >> 4) == bind->value){
          _SPRINT(fobj, "st_info.bind", "d", AccessFile->dynsym[i].st_info >> 4, bind->macro);
          break;
        }
      }

      for (struct Mapp* vis = d_stvisible; vis->macro != NULL; vis++){
        if ((AccessFile->dynsym[i].st_other & 0x03) == vis->value){
          _SPRINT(fobj, "st_other",     "d", AccessFile->dynsym[i].st_other, vis->macro);
          break;
        }
      }

      switch(AccessFile->dynsym[i].st_shndx){
        case SHN_UNDEF:
          _SPRINT(fobj, "st_shdx",  PRIu16, AccessFile->dynsym[i].st_shndx, "[SHN_UNDEF]: The symbol is undefined; needs relocation");
          break;
        case SHN_ABS:
          _SPRINT(fobj, "st_shdx",  PRIu16, AccessFile->dynsym[i].st_shndx, "[SHN_ABS]: The symbol has an absolute value and will not change on relocation");
          break;
        case SHN_COMMON:
          _SPRINT(fobj, "st_shdx",  PRIu16, AccessFile->dynsym[i].st_shndx, "[SHN_COMMON]: The symbol labels a common block which hasn't been allocated yet");
          break;
        default:
          _SnPRINT(fobj, "st_shdx",  PRIu16, AccessFile->dynsym[i].st_shndx, (i == 0) ? "No section" : "Section (Idx) the symbol is present in");
          char* temp2 = AccessFile->r_shstrtab;
          temp2 += AccessFile->shdrs[AccessFile->dynsym[i].st_shndx].sh_name;
          fprintf(fobj, "[%s] */\n", temp2);
      }

      for (struct Mapp3* types = d_sttypes; types->macro != NULL; types++){
        if ((AccessFile->dynsym[i].st_info & 0xf) == types->value) _SPRINT(fobj, "st_value", PRIu64, AccessFile->dynsym[i].st_value, types->desc);
      }

      _SPRINT(fobj, "st_size",  PRIu64, AccessFile->dynsym[i].st_size, "Symbol size");
    }
    fprintf(fobj, "  },\n");
  }
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_reladyn(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_relocations`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Rela rela_dyn = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->reladyn_count);

  for (int i = 0; i < AccessFile->reladyn_count; i++){
    char* temp = AccessFile->r_strtab;
    temp += AccessFile->symtab[AccessFile->reladyn[i].r_info >> 32].st_name;
    fprintf(fobj, "  /* Entry #%d && Symbol: [%s] */\n", i, temp);
    fprintf(fobj, "  {\n");

    _RPRINT(fobj, "r_offset",    PRIu64, AccessFile->reladyn[i].r_offset, "OFFSET to apply the relocation at");

    for (struct Mapp* types = rtypes; rtypes->macro != NULL; types++){
      if ((AccessFile->reladyn[i].r_info & 0xffffffff) == types->value){
        _R2PRINT(fobj, "r_info.type", PRIx64, AccessFile->reladyn[i].r_info & 0xffffffff, "Relocation type");
        fprintf(fobj, "[%s] */,\n", types->macro);
        break;
      }
    }

    _RPRINT(fobj, "r_info.idx",  PRIu64, AccessFile->reladyn[i].r_info >> 32, "Symbol idx in the symbol table");
    _RPRINT(fobj, "r_addend",    PRIi64, AccessFile->reladyn[i].r_addend, "Constant to be added to calculate the final value");
    fprintf(fobj, "  },\n");
  }

  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_relaplt(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_relocations`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Rela rela_plt = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->relaplt_count);

  for (int i = 0; i < AccessFile->relaplt_count; i++){
    char* temp = AccessFile->r_strtab;
    temp += AccessFile->symtab[AccessFile->relaplt[i].r_info >> 32].st_name;
    fprintf(fobj, "  /* Entry #%d && Symbol: [%s] */\n", i, temp);
    fprintf(fobj, "  {\n");

    _RPRINT(fobj, "r_offset",    PRIu64, AccessFile->relaplt[i].r_offset, "OFFSET to apply the relocation at");

    for (struct Mapp* types = rtypes; rtypes->macro != NULL; types++){
      if ((AccessFile->relaplt->r_info & 0xffffffff) == types->value){
        _R2PRINT(fobj, "r_info.type", PRIx64, AccessFile->relaplt->r_info & 0xffffffff, "Relocation type");
        fprintf(fobj, "[%s] */,\n", types->macro);
        break;
      }
    }

    _RPRINT(fobj, "r_info.idx",  PRIu64, AccessFile->relaplt[i].r_info >> 32, "Symbol idx in the symbol table");
    _RPRINT(fobj, "r_addend",    PRIi64, AccessFile->relaplt[i].r_addend, "Constant to be added to calculate the final value");
    fprintf(fobj, "  },\n");
  }

  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_relocations(ElfFile* AccessFile){
  if (dump_reladyn(AccessFile) != 0){
    fprintf(stderr, "Error: dump_reladyn");
    return 1;
  }
  if (dump_relaplt(AccessFile) != 0){
    fprintf(stderr, "Error: dump_relaplt");
    return 1;
  }
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
  fprintf(fobj, "/* Total Count #%d */\n", AccessFile->f_dstr_count);
  fprintf(fobj, "char** f_dynstr = {\n");

  for (int i = 0; i < AccessFile->f_dstr_count; i++){
    fprintf(fobj, "  \"%s\",\n", AccessFile->f_dynstr[i]);
  }
  fprintf(fobj, "};\n\n");

  fclose(fobj);
  return 0;
}

int dump_dynamic(ElfFile* AccessFile){
  FILE* fobj = fopen("./output/cdump.c", "a");
  if (!fobj){
    fprintf(stderr, "Error: `fobj` failed.\n  Inside `dump_dynstr`\n");
    return -1;
  }

  fprintf(fobj, "Elf64_Dyn dynamic = {\n");
  fprintf(fobj, "  /* Total Count #%d */\n", AccessFile->dyn_ent.logical_count);

  for (int i = 0; i < AccessFile->dyn_ent.logical_count; i++){
    fprintf(fobj, "  /* Dynamic Array Tag #%d */\n", i);
    fprintf(fobj, "  {\n");

    for (struct DTypes* tags = d_dtypes; tags->macro != NULL; tags++){
      if (AccessFile->dynamic[i].d_tag == tags->value){
        _DPRINT(fobj, "d_tag", PRIi64, AccessFile->dynamic[i].d_tag, tags->macro);
        break;
      }
    }

    struct DTypes* tag = find_tag(AccessFile->dynamic[i].d_tag);
    _D2PRINT(fobj, tag->d_un, PRIu64, AccessFile->dynamic[i].d_un.d_val, tag->interp);

    fprintf(fobj, "  },\n");

    if (AccessFile->dynamic[i].d_tag == DT_NULL) break;
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
  if (dump_shdrs(AccessFile) != 0){
    fprintf(stderr, "Error in dump_shdrs \n");
  }
  if (dump_phdrs(AccessFile) != 0){
    fprintf(stderr, "Error in dump_phdrs \n");
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