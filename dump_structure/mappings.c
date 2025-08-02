#include "mappings.h"

struct Mapp d_ehtypes[] = {
  {0, "ET_NONE"},
  {1, "ET_REL"},
  {2, "ET_EXEC"},
  {3, "ET_DYN"},
  {4, "ET_CORE"},
  {5, "ET_NUM"}
};

struct Mapp d_ehmachines[] = {
  {0, "EM_NONE"},
  {3, "EM_386"},
  {7, "EM_860"},
  {19, "EM_960"},
  {40, "EM_ARM"},
  {62, "EM_X86_64"},
  {183, "EM_AARCH64"},
  {243, "EM_RISCV"},
};

struct Mapp d_phtypes[] = {
  {0, "PT_NULL"},
  {1, "PT_LOAD"},
  {2, "PT_DYNAMIC"},
  {3, "PT_INTERP"},
  {4, "PT_NOTE"},
  {5, "PT_SHLIB"},
  {6, "PT_PHDR"},
  {7, "PT_TLS"},
  {8, "PT_NUM"},
  {0x60000000, "PT_LOOS"},
  {0x6474e550, "PT_GNU_EH_FRAME"},
  {0x6474e551, "PT_GNU_STACK"},
  {0x6474e552, "PT_GNU_RELRO"},
  {0x6474e553, "PT_GNU_PROPERTY"},
  {0x6474e554, "PT_GNU_SFRAME"},
  {0x6ffffffa, "PT_LOSUNW"},
  {0x6ffffffa, "PT_SUNWBSS"},
  {0x6ffffffb, "PT_SUNWSTACK"},
  {0x6fffffff, "PT_HISUNW"},
  {0x6fffffff, "PT_HIOS"},
  {0x70000000, "PT_LOPROC"},
  {0x7fffffff, "PT_HIPROC"}
};

struct Mapp d_phflags[] = {
  {(1 << 0), "PF_X "},
  {(1 << 1), "PF_W "},
  {(1 << 2), "PF_R "}
};

struct Mapp d_shtypes[] = {
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

struct Mapp d_shflags[] = {
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

struct Mapp d_sttypes[] = {
  {0, "STT_NOTYPE"},
  {1, "STT_OBJECT"},
  {2, "STT_FUNC"},
  {3, "STT_SECTION"},
  {4, "STT_FILE"},
  {5, "STT_COMMON"},
  {6, "STT_TLS"},
};

struct Mapp d_stbinds[] = {
  {0,  "STB_LOCAL"},
  {1,  "STB_GLOBAL"},
  {2,  "STB_WEAK"},
  {10, "STB_GNU_UNIQUE"},
};

struct Mapp d_stvisible[] = {
  {0, "STV_DEFAULT"},
  {1, "STV_INTERNAL"},
  {2, "STV_HIDDEN"},
  {3, "STV_PROTECTED"},
};