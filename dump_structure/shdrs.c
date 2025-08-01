#include <stdio.h>
#include <inttypes.h>
#include "shdrs.h"

struct sTypes stypes[] = {
  {0, "SHT_NULL"},
  {1, "SHT_PROGBITS"},
  {2, "SHT_SYMTAB"},
  {3, "SHT_STRTAB"},
  {4, "SHT_RELA"},
  {5, "SHT_HASH"},
  {6, "SHT_DYNAMIC"},
  {7, "SHT_NOTE"},
  {8, "SHT_NOBITS"},
  {9, "SHT_REL"},
  {10, "SHT_SHLIB"},
  {11, "SHT_DYNSYM"},
  {14, "SHT_INIT_ARRAY"},
  {15, "SHT_FINI_ARRAY"},
  {16, "SHT_PREINIT_ARRAY"},
  {17, "SHT_GROUP"},
  {18, "SHT_SYMTAB_SHNDX"},
  {19, "SHT_RELR"},
  {0x60000000, "SHT_LOOS"},
  {0x6ffffff5, "SHT_GNU_ATTRIBUTES"},
  {0x6ffffff6, "SHT_GNU_HASH"},
  {0x6ffffff7, "SHT_GNU_LIBLIST"},
  {0x6ffffff8, "SHT_CHECKSUM"},
  {0x6ffffffa, "SHT_LOSUNW"},
  {0x6ffffffa, "SHT_SUNW_move"},
  {0x6ffffffb, "SHT_SUNW_COMDAT"},
  {0x6ffffffc, "SHT_SUNW_syminfo"},
  {0x6ffffffd, "SHT_GNU_verdef"},
  {0x6ffffffe, "SHT_GNU_verneed"},
  {0x6fffffff, "SHT_GNU_versym"},
  {0x6fffffff, "SHT_HISUNW"},
  {0x6fffffff, "SHT_HIOS"},
  {0x70000000, "SHT_LOPROC"},
  {0x7fffffff, "SHT_HIPROC"},
  {0x80000000, "SHT_LOUSER"},
  {0x8fffffff, "SHT_HIUSER"},
};

struct sFlags sflags[] = {
  {(1 << 0), "SHF_WRITE "},
  {(1 << 1), "SHF_ALLOC "},
  {(1 << 2), "SHF_EXECINSTR "},
  {(1 << 4), "SHF_MERGE "},
  {(1 << 5), "SHF_STRINGS "},
  {(1 << 6), "SHF_INFO_LINK "},
  {(1 << 7), "SHF_LINK_ORDER "},
  {(1 << 8), "SHF_OS_NONCONFORMING "},
  {(1 << 9), "SHF_GROUP "},
  {(1 << 10), "SHF_TLS "},
  {(1 << 11), "SHF_COMPRESSED "},
  {0x0ff00000, "SHF_MASKOS "},
  {0xf0000000, "SHF_MASKPROC "},
  {(1 << 21), "SHF_GNU_RETAIN "},
  {(1 << 30), "SHF_ORDERED "},
  {(1U << 31), "SHF_EXCLUDE "},
};

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
      if (AccessFile->shdrs[i].sh_type == stypes[j].value){
        fprintf(f_obj, "    /* sh_type         */     %" PRIu32 "         /* %s */,\n", AccessFile->shdrs[i].sh_type, stypes[j].macro);
        break;
      }
    }

    fprintf(f_obj, "    /* sh_flags        */     %" PRIu64 "         /* ", AccessFile->shdrs[i].sh_flags);
    for (int k = 0; k < 16; k++){
      if (AccessFile->shdrs[i].sh_flags & sflags[k].value) fprintf(f_obj, sflags[k].macro);
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
  fprintf(f_obj, "  }\n\n\n");

  return 0;
}