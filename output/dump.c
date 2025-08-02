/* This is the raw C-style dump! */

/* Header file to obtain ELF type definitions. */
#include <elf.h>

/* ELF file header (ehdr) dump. */
Elf64_Ehdr ehdr = {
  /* e_ident[16] */     {
    0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  /* e_type        */     3        /* ET_DYN */,
  /* e_machine     */     62       /* EM_X86_64 */,
  /* e_version     */     1        /* EV_CURRENT */,
  /* e_ehsize      */     64       /* size in decimal bytes */,
  /* e_entry       */     4176,    /* bytes (in decimal) in the binary */
  /* e_phoff       */     64       /* bytes (in decimal) in the binary */,
  /* e_phnum       */     14,
  /* e_phentsize   */     56       /* size in decimal bytes */,
  /* e_shoff       */     13976    /* bytes (in decimal) in the binary */,
  /* e_shnum       */     31,
  /* e_shentsize   */     64,      /* size in decimal bytes */
  /* e_shstrndx    */     30,
  /* e_flags       */     0,
};


/* Program headers (phdrs) dump. */
Elf64_Phdr phdrs = {
  {
    /* p_type      */     6      /* PT_PHDR */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     64      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     64,
    /* p_paddr     */     64,
    /* p_filesz    */     784      /* size in (decimal) bytes */,
    /* p_memsz     */     784      /* size in (decimal) bytes */,
    /* p_align     */     8,
  },
  {
    /* p_type      */     3      /* PT_INTERP */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     916      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     916,
    /* p_paddr     */     916,
    /* p_filesz    */     28      /* size in (decimal) bytes */,
    /* p_memsz     */     28      /* size in (decimal) bytes */,
    /* p_align     */     1,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     0      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     0,
    /* p_paddr     */     0,
    /* p_filesz    */     1576      /* size in (decimal) bytes */,
    /* p_memsz     */     1576      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     5      /* PF_X PF_R  */,
    /* p_offset    */     4096      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     4096,
    /* p_paddr     */     4096,
    /* p_filesz    */     349      /* size in (decimal) bytes */,
    /* p_memsz     */     349      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     8192      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     8192,
    /* p_paddr     */     8192,
    /* p_filesz    */     268      /* size in (decimal) bytes */,
    /* p_memsz     */     268      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     6      /* PF_W PF_R  */,
    /* p_offset    */     11728      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     15824,
    /* p_paddr     */     15824,
    /* p_filesz    */     584      /* size in (decimal) bytes */,
    /* p_memsz     */     592      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     2      /* PT_DYNAMIC */,
    /* p_flags     */     6      /* PF_W PF_R  */,
    /* p_offset    */     11744      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     15840,
    /* p_paddr     */     15840,
    /* p_filesz    */     480      /* size in (decimal) bytes */,
    /* p_memsz     */     480      /* size in (decimal) bytes */,
    /* p_align     */     8,
  },
  {
    /* p_type      */     4      /* PT_NOTE */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     848      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     848,
    /* p_paddr     */     848,
    /* p_filesz    */     32      /* size in (decimal) bytes */,
    /* p_memsz     */     32      /* size in (decimal) bytes */,
    /* p_align     */     8,
  },
  {
    /* p_type      */     4      /* PT_NOTE */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     880      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     880,
    /* p_paddr     */     880,
    /* p_filesz    */     36      /* size in (decimal) bytes */,
    /* p_memsz     */     36      /* size in (decimal) bytes */,
    /* p_align     */     4,
  },
  {
    /* p_type      */     4      /* PT_NOTE */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     8428      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     8428,
    /* p_paddr     */     8428,
    /* p_filesz    */     32      /* size in (decimal) bytes */,
    /* p_memsz     */     32      /* size in (decimal) bytes */,
    /* p_align     */     4,
  },
  {
    /* p_type      */     1685382483      /* PT_GNU_PROPERTY */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     848      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     848,
    /* p_paddr     */     848,
    /* p_filesz    */     32      /* size in (decimal) bytes */,
    /* p_memsz     */     32      /* size in (decimal) bytes */,
    /* p_align     */     8,
  },
  {
    /* p_type      */     1685382480      /* PT_GNU_EH_FRAME */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     8212      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     8212,
    /* p_paddr     */     8212,
    /* p_filesz    */     44      /* size in (decimal) bytes */,
    /* p_memsz     */     44      /* size in (decimal) bytes */,
    /* p_align     */     4,
  },
  {
    /* p_type      */     1685382481      /* PT_GNU_STACK */,
    /* p_flags     */     6      /* PF_W PF_R  */,
    /* p_offset    */     0      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     0,
    /* p_paddr     */     0,
    /* p_filesz    */     0      /* size in (decimal) bytes */,
    /* p_memsz     */     0      /* size in (decimal) bytes */,
    /* p_align     */     16,
  },
  {
    /* p_type      */     1685382482      /* PT_GNU_RELRO */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     11728      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     15824,
    /* p_paddr     */     15824,
    /* p_filesz    */     560      /* size in (decimal) bytes */,
    /* p_memsz     */     560      /* size in (decimal) bytes */,
    /* p_align     */     1,
  },
};


/* Section headers (shdrs) dump. */
Elf64_Shdr shdrs = {
  {
    /* sh_name         */     0       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     0         /* SHT_NULL */,
    /* sh_flags        */     0         /*  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     0     /* bytes (in decimal) in the binary */,
    /* sh_size         */     0         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     0,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     27       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     7         /* SHT_NOTE */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     848     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     848     /* bytes (in decimal) in the binary */,
    /* sh_size         */     32         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     46       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     7         /* SHT_NOTE */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     880     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     880     /* bytes (in decimal) in the binary */,
    /* sh_size         */     36         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     65       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     916     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     916     /* bytes (in decimal) in the binary */,
    /* sh_size         */     28         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     73       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1879048182         /* SHT_GNU_HASH */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     944     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     944     /* bytes (in decimal) in the binary */,
    /* sh_size         */     36         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     83       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     11         /* SHT_DYNSYM */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     984     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     984     /* bytes (in decimal) in the binary */,
    /* sh_size         */     168         /* in bytes (decimal) */,
    /* sh_link         */     6,
    /* sh_info         */     1,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     91       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     3         /* SHT_STRTAB */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1152     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1152     /* bytes (in decimal) in the binary */,
    /* sh_size         */     141         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     99       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1879048191         /* SHT_GNU_versym */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1294     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1294     /* bytes (in decimal) in the binary */,
    /* sh_size         */     14         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     0,
    /* sh_addralign    */     2,
    /* sh_entsize      */     2         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     112       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1879048190         /* SHT_GNU_verneed */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1312     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1312     /* bytes (in decimal) in the binary */,
    /* sh_size         */     48         /* in bytes (decimal) */,
    /* sh_link         */     6,
    /* sh_info         */     1,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     127       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     4         /* SHT_RELA */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1360     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1360     /* bytes (in decimal) in the binary */,
    /* sh_size         */     192         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     137       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     4         /* SHT_RELA */,
    /* sh_flags        */     66         /* SHF_ALLOC SHF_INFO_LINK  */,
    /* sh_addr         */     1552     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1552     /* bytes (in decimal) in the binary */,
    /* sh_size         */     24         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     24,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     147       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     4096     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     4096     /* bytes (in decimal) in the binary */,
    /* sh_size         */     23         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     142       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     4128     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     4128     /* bytes (in decimal) in the binary */,
    /* sh_size         */     32         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     16,
    /* sh_entsize      */     16         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     153       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     4160     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     4160     /* bytes (in decimal) in the binary */,
    /* sh_size         */     8         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     8         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     162       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     4176     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     4176     /* bytes (in decimal) in the binary */,
    /* sh_size         */     259         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     16,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     168       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     4436     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     4436     /* bytes (in decimal) in the binary */,
    /* sh_size         */     9         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     174       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     8192     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8192     /* bytes (in decimal) in the binary */,
    /* sh_size         */     18         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     182       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     8212     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8212     /* bytes (in decimal) in the binary */,
    /* sh_size         */     44         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     196       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     8256     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8256     /* bytes (in decimal) in the binary */,
    /* sh_size         */     172         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     206       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     7         /* SHT_NOTE */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     8428     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8428     /* bytes (in decimal) in the binary */,
    /* sh_size         */     32         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     220       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     14         /* SHT_INIT_ARRAY */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     15824     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     11728     /* bytes (in decimal) in the binary */,
    /* sh_size         */     8         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     8         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     232       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     15         /* SHT_FINI_ARRAY */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     15832     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     11736     /* bytes (in decimal) in the binary */,
    /* sh_size         */     8         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     8         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     244       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     6         /* SHT_DYNAMIC */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     15840     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     11744     /* bytes (in decimal) in the binary */,
    /* sh_size         */     480         /* in bytes (decimal) */,
    /* sh_link         */     6,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     16         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     157       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     16320     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     12224     /* bytes (in decimal) in the binary */,
    /* sh_size         */     40         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     8         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     253       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     16360     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     12264     /* bytes (in decimal) in the binary */,
    /* sh_size         */     32         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     8         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     262       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     16392     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     12296     /* bytes (in decimal) in the binary */,
    /* sh_size         */     16         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     268       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     8         /* SHT_NOBITS */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     16408     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     12312     /* bytes (in decimal) in the binary */,
    /* sh_size         */     8         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     273       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     48         /* SHF_MERGE SHF_STRINGS  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     12312     /* bytes (in decimal) in the binary */,
    /* sh_size         */     31         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     1         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     1       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     2         /* SHT_SYMTAB */,
    /* sh_flags        */     0         /*  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     12344     /* bytes (in decimal) in the binary */,
    /* sh_size         */     864         /* in bytes (decimal) */,
    /* sh_link         */     29,
    /* sh_info         */     18,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     9       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     3         /* SHT_STRTAB */,
    /* sh_flags        */     0         /*  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     13208     /* bytes (in decimal) in the binary */,
    /* sh_size         */     481         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     17       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     3         /* SHT_STRTAB */,
    /* sh_flags        */     0         /*  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     13689     /* bytes (in decimal) in the binary */,
    /* sh_size         */     282         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
};


/* Section header string table (.shstrtab) flat-dump. */
char* r_shstrtab = {
  '\0', '.', 's', 'y', 'm', 't', 'a', 'b', '\0', '.', 's', 't', 'r', 't', 'a', 'b', '\0', '.', 's', 'h', 's', 't', 'r', 't', 'a', 'b', '\0', '.', 'n', 'o', 't', 'e', '.', 'g', 'n', 'u', '.', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', '\0', '.', 'n', 'o', 't', 'e', '.', 'g', 'n', 'u', '.', 'b', 'u', 'i', 'l', 'd', '-', 'i', 'd', '\0', '.', 'i', 'n', 't', 'e', 'r', 'p', '\0', '.', 'g', 'n', 'u', '.', 'h', 'a', 's', 'h', '\0', '.', 'd', 'y', 'n', 's', 'y', 'm', '\0', '.', 'd', 'y', 'n', 's', 't', 'r', '\0', '.', 'g', 'n', 'u', '.', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\0', '.', 'g', 'n', 'u', '.', 'v', 'e', 'r', 's', 'i', 'o', 'n', '_', 'r', '\0', '.', 'r', 'e', 'l', 'a', '.', 'd', 'y', 'n', '\0', '.', 'r', 'e', 'l', 'a', '.', 'p', 'l', 't', '\0', '.', 'i', 'n', 'i', 't', '\0', '.', 'p', 'l', 't', '.', 'g', 'o', 't', '\0', '.', 't', 'e', 'x', 't', '\0', '.', 'f', 'i', 'n', 'i', '\0', '.', 'r', 'o', 'd', 'a', 't', 'a', '\0', '.', 'e', 'h', '_', 'f', 'r', 'a', 'm', 'e', '_', 'h', 'd', 'r', '\0', '.', 'e', 'h', '_', 'f', 'r', 'a', 'm', 'e', '\0', '.', 'n', 'o', 't', 'e', '.', 'A', 'B', 'I', '-', 't', 'a', 'g', '\0', '.', 'i', 'n', 'i', 't', '_', 'a', 'r', 'r', 'a', 'y', '\0', '.', 'f', 'i', 'n', 'i', '_', 'a', 'r', 'r', 'a', 'y', '\0', '.', 'd', 'y', 'n', 'a', 'm', 'i', 'c', '\0', '.', 'g', 'o', 't', '.', 'p', 'l', 't', '\0', '.', 'd', 'a', 't', 'a', '\0', '.', 'b', 's', 's', '\0', '.', 'c', 'o', 'm', 'm', 'e', 'n', 't', '\0', 
};

/* Section header string table (.shstrtab) formatted-dump. */
char** f_shstrtab = {
  "",
  ".note.gnu.property",
  ".note.gnu.build-id",
  ".interp",
  ".gnu.hash",
  ".dynsym",
  ".dynstr",
  ".gnu.version",
  ".gnu.version_r",
  ".rela.dyn",
  ".rela.plt",
  ".init",
  ".plt",
  ".plt.got",
  ".text",
  ".fini",
  ".rodata",
  ".eh_frame_hdr",
  ".eh_frame",
  ".note.ABI-tag",
  ".init_array",
  ".fini_array",
  ".dynamic",
  ".got",
  ".got.plt",
  ".data",
  ".bss",
  ".comment",
  ".symtab",
  ".strtab",
  ".shstrtab",
};


/* String table (.strtab) flat-dump. */
char* r_strtab = {
  '\0', 'S', 'c', 'r', 't', '1', '.', 'o', '\0', '_', '_', 'a', 'b', 'i', '_', 't', 'a', 'g', '\0', 'c', 'r', 't', 's', 't', 'u', 'f', 'f', '.', 'c', '\0', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', '_', 't', 'm', '_', 'c', 'l', 'o', 'n', 'e', 's', '\0', '_', '_', 'd', 'o', '_', 'g', 'l', 'o', 'b', 'a', 'l', '_', 'd', 't', 'o', 'r', 's', '_', 'a', 'u', 'x', '\0', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd', '.', '0', '\0', '_', '_', 'd', 'o', '_', 'g', 'l', 'o', 'b', 'a', 'l', '_', 'd', 't', 'o', 'r', 's', '_', 'a', 'u', 'x', '_', 'f', 'i', 'n', 'i', '_', 'a', 'r', 'r', 'a', 'y', '_', 'e', 'n', 't', 'r', 'y', '\0', 'f', 'r', 'a', 'm', 'e', '_', 'd', 'u', 'm', 'm', 'y', '\0', '_', '_', 'f', 'r', 'a', 'm', 'e', '_', 'd', 'u', 'm', 'm', 'y', '_', 'i', 'n', 'i', 't', '_', 'a', 'r', 'r', 'a', 'y', '_', 'e', 'n', 't', 'r', 'y', '\0', 'h', 'e', 'l', 'l', 'o', '_', 'w', 'o', 'r', 'l', 'd', '.', 'c', '\0', '_', '_', 'F', 'R', 'A', 'M', 'E', '_', 'E', 'N', 'D', '_', '_', '\0', '_', 'D', 'Y', 'N', 'A', 'M', 'I', 'C', '\0', '_', '_', 'G', 'N', 'U', '_', 'E', 'H', '_', 'F', 'R', 'A', 'M', 'E', '_', 'H', 'D', 'R', '\0', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'O', 'F', 'F', 'S', 'E', 'T', '_', 'T', 'A', 'B', 'L', 'E', '_', '\0', '_', '_', 'l', 'i', 'b', 'c', '_', 's', 't', 'a', 'r', 't', '_', 'm', 'a', 'i', 'n', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '3', '4', '\0', '_', 'I', 'T', 'M', '_', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 'p', 'u', 't', 's', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', 'e', 'd', 'a', 't', 'a', '\0', '_', 'f', 'i', 'n', 'i', '\0', '_', '_', 'd', 'a', 't', 'a', '_', 's', 't', 'a', 'r', 't', '\0', '_', '_', 'g', 'm', 'o', 'n', '_', 's', 't', 'a', 'r', 't', '_', '_', '\0', '_', '_', 'd', 's', 'o', '_', 'h', 'a', 'n', 'd', 'l', 'e', '\0', '_', 'I', 'O', '_', 's', 't', 'd', 'i', 'n', '_', 'u', 's', 'e', 'd', '\0', '_', 'e', 'n', 'd', '\0', '_', '_', 'b', 's', 's', '_', 's', 't', 'a', 'r', 't', '\0', 'm', 'a', 'i', 'n', '\0', '_', '_', 'T', 'M', 'C', '_', 'E', 'N', 'D', '_', '_', '\0', '_', 'I', 'T', 'M', '_', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', '_', '_', 'c', 'x', 'a', '_', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', 'i', 'n', 'i', 't', '\0', 
};

/* String table (.strtab) formatted-dump. */
char** f_strtab = {
  "",
  "Scrt1.o",
  "__abi_tag",
  "crtstuff.c",
  "deregister_tm_clones",
  "__do_global_dtors_aux",
  "completed.0",
  "__do_global_dtors_aux_fini_array_entry",
  "frame_dummy",
  "__frame_dummy_init_array_entry",
  "hello_world.c",
  "__FRAME_END__",
  "_DYNAMIC",
  "__GNU_EH_FRAME_HDR",
  "_GLOBAL_OFFSET_TABLE_",
  "__libc_start_main@GLIBC_2.34",
  "_ITM_deregisterTMCloneTable",
  "puts@GLIBC_2.2.5",
  "_edata",
  "_fini",
  "__data_start",
  "__gmon_start__",
  "__dso_handle",
  "_IO_stdin_used",
  "_end",
  "__bss_start",
  "main",
  "__TMC_END__",
  "_ITM_registerTMCloneTable",
  "__cxa_finalize@GLIBC_2.2.5",
  "_init",
};


/* Symbol table (.symtab) dump. */
Elf64_Sym symtab = {
  {
    /* looped_idx   */     0,     /* loop counter */
    /* st_name      */     0,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 0 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     1,     /* loop counter */
    /* st_name      */     1,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 4 */
      /* type       */     4,     /* STT_FILE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     65521,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     2,     /* loop counter */
    /* st_name      */     9,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     19,     /* section (idx) it is present in */
    /* st_value     */     8428,     /* symbol value (in decimal) */
    /* st_size      */     32,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     3,     /* loop counter */
    /* st_name      */     19,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 4 */
      /* type       */     4,     /* STT_FILE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     65521,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     4,     /* loop counter */
    /* st_name      */     30,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 2 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     4224,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     5,     /* loop counter */
    /* st_name      */     32,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 2 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     4272,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     6,     /* loop counter */
    /* st_name      */     51,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 2 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     4336,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     7,     /* loop counter */
    /* st_name      */     73,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     16408,     /* symbol value (in decimal) */
    /* st_size      */     1,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     8,     /* loop counter */
    /* st_name      */     85,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     21,     /* section (idx) it is present in */
    /* st_value     */     15832,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     9,     /* loop counter */
    /* st_name      */     124,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 2 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     4400,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     10,     /* loop counter */
    /* st_name      */     136,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     20,     /* section (idx) it is present in */
    /* st_value     */     15824,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     11,     /* loop counter */
    /* st_name      */     167,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 4 */
      /* type       */     4,     /* STT_FILE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     65521,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     12,     /* loop counter */
    /* st_name      */     19,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 4 */
      /* type       */     4,     /* STT_FILE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     65521,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     13,     /* loop counter */
    /* st_name      */     181,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     18,     /* section (idx) it is present in */
    /* st_value     */     8424,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     14,     /* loop counter */
    /* st_name      */     0,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 4 */
      /* type       */     4,     /* STT_FILE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     65521,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     15,     /* loop counter */
    /* st_name      */     195,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     22,     /* section (idx) it is present in */
    /* st_value     */     15840,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     16,     /* loop counter */
    /* st_name      */     204,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 0 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     17,     /* section (idx) it is present in */
    /* st_value     */     8212,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     17,     /* loop counter */
    /* st_name      */     223,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     24,     /* section (idx) it is present in */
    /* st_value     */     16360,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     18,     /* loop counter */
    /* st_name      */     245,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     19,     /* loop counter */
    /* st_name      */     274,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     20,     /* loop counter */
    /* st_name      */     334,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     16392,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     21,     /* loop counter */
    /* st_name      */     302,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     22,     /* loop counter */
    /* st_name      */     319,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     16408,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     23,     /* loop counter */
    /* st_name      */     326,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     15,     /* section (idx) it is present in */
    /* st_value     */     4436,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     24,     /* loop counter */
    /* st_name      */     332,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     16392,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     25,     /* loop counter */
    /* st_name      */     345,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     26,     /* loop counter */
    /* st_name      */     360,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     16400,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     27,     /* loop counter */
    /* st_name      */     373,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     16,     /* section (idx) it is present in */
    /* st_value     */     8192,     /* symbol value (in decimal) */
    /* st_size      */     4,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     28,     /* loop counter */
    /* st_name      */     388,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     16416,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     29,     /* loop counter */
    /* st_name      */     338,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     4176,     /* symbol value (in decimal) */
    /* st_size      */     34,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     30,     /* loop counter */
    /* st_name      */     393,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     16408,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     31,     /* loop counter */
    /* st_name      */     405,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     4409,     /* symbol value (in decimal) */
    /* st_size      */     26,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     32,     /* loop counter */
    /* st_name      */     410,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     16408,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     33,     /* loop counter */
    /* st_name      */     422,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     34,     /* loop counter */
    /* st_name      */     448,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 34 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     35,     /* loop counter */
    /* st_name      */     475,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     11,     /* section (idx) it is present in */
    /* st_value     */     4096,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
};


/* Dynamic Symbol table (.dynsym) dump. */
Elf64_Sym dynsym = {
  {
    /* looped_idx   */     0,     /* loop counter */
    /* st_name      */     0,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 0 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     1,     /* loop counter */
    /* st_name      */     6,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     2,     /* loop counter */
    /* st_name      */     72,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     3,     /* loop counter */
    /* st_name      */     1,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     4,     /* loop counter */
    /* st_name      */     100,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     5,     /* loop counter */
    /* st_name      */     115,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     6,     /* loop counter */
    /* st_name      */     24,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 34 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     0,     /* section (idx) it is present in */
    /* st_value     */     0,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
};


/* Eager Binding Relocations Table (.rela.dyn) dump. */
Elf64_Rela rela_dyn = {
  {
    /* r_offset       */     15824       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     4400,
  },
  {
    /* r_offset       */     15832       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     4336,
  },
  {
    /* r_offset       */     16400       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     16400,
  },
  {
    /* r_offset       */     16320       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 100000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     1,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     16328       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 200000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     2,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     16336       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 400000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     4,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     16344       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 500000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     5,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     16352       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 600000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     6,
    },

    /* r_addend       */     0,
  },
};

/* Lazy Binding Relocations Table (.rela.plt) dump. */
Elf64_Rela rela_plt = {
  {
    /* r_offset       */     15824       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 300000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     3,
    },

    /* r_addend       */     0,
  },
};


/* Dynamic String Table (.dynstr) flat-dump. */
char* r_dynstr = {
  '\0', 'p', 'u', 't', 's', '\0', '_', '_', 'l', 'i', 'b', 'c', '_', 's', 't', 'a', 'r', 't', '_', 'm', 'a', 'i', 'n', '\0', '_', '_', 'c', 'x', 'a', '_', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'e', '\0', 'l', 'i', 'b', 'c', '.', 's', 'o', '.', '6', '\0', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '3', '4', '\0', '_', 'I', 'T', 'M', '_', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', '_', '_', 'g', 'm', 'o', 'n', '_', 's', 't', 'a', 'r', 't', '_', '_', '\0', '_', 'I', 'T', 'M', '_', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 
};

/* Dynamic String Table (.dynstr) formatted-dump. */
char** f_dynstr = {
  "",
  "puts",
  "__libc_start_main",
  "__cxa_finalize",
  "libc.so.6",
  "GLIBC_2.2.5",
  "GLIBC_2.34",
  "_ITM_deregisterTMCloneTable",
  "__gmon_start__",
  "_ITM_registerTMCloneTable",
};


/* Dynamic section dump. */
Elf64_Dyn dynamic = {
  {
    /* d_tag */        1    /* entry type, DT_NEEDED */,
    /* d_un  */   {
      /* d_ptr */      39    /* address value (in decimal) */,
      /* d_val */      39    /* integer value,  */,
    }
  },
  {
    /* d_tag */        12    /* entry type, DT_INIT */,
    /* d_un  */   {
      /* d_ptr */      4096    /* address value (in decimal) */,
      /* d_val */      4096    /* integer value,  */,
    }
  },
  {
    /* d_tag */        13    /* entry type, DT_FINI */,
    /* d_un  */   {
      /* d_ptr */      4436    /* address value (in decimal) */,
      /* d_val */      4436    /* integer value,  */,
    }
  },
  {
    /* d_tag */        25    /* entry type, DT_INIT_ARRAY */,
    /* d_un  */   {
      /* d_ptr */      15824    /* address value (in decimal) */,
      /* d_val */      15824    /* integer value,  */,
    }
  },
  {
    /* d_tag */        27    /* entry type, DT_INIT_ARRAYSZ */,
    /* d_un  */   {
      /* d_ptr */      8    /* address value (in decimal) */,
      /* d_val */      8    /* integer value,  */,
    }
  },
  {
    /* d_tag */        26    /* entry type, DT_FINI_ARRAY */,
    /* d_un  */   {
      /* d_ptr */      15832    /* address value (in decimal) */,
      /* d_val */      15832    /* integer value,  */,
    }
  },
  {
    /* d_tag */        28    /* entry type, DT_FINI_ARRAYSZ */,
    /* d_un  */   {
      /* d_ptr */      8    /* address value (in decimal) */,
      /* d_val */      8    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879047925    /* entry type, DT_GNU_HASH */,
    /* d_un  */   {
      /* d_ptr */      944    /* address value (in decimal) */,
      /* d_val */      944    /* integer value,  */,
    }
  },
  {
    /* d_tag */        5    /* entry type, DT_STRTAB */,
    /* d_un  */   {
      /* d_ptr */      1152    /* address value (in decimal) */,
      /* d_val */      1152    /* integer value,  */,
    }
  },
  {
    /* d_tag */        6    /* entry type, DT_SYMTAB */,
    /* d_un  */   {
      /* d_ptr */      984    /* address value (in decimal) */,
      /* d_val */      984    /* integer value,  */,
    }
  },
  {
    /* d_tag */        10    /* entry type, DT_STRSZ */,
    /* d_un  */   {
      /* d_ptr */      141    /* address value (in decimal) */,
      /* d_val */      141    /* integer value,  */,
    }
  },
  {
    /* d_tag */        11    /* entry type, DT_SYMENT */,
    /* d_un  */   {
      /* d_ptr */      24    /* address value (in decimal) */,
      /* d_val */      24    /* integer value,  */,
    }
  },
  {
    /* d_tag */        21    /* entry type, DT_DEBUG */,
    /* d_un  */   {
      /* d_ptr */      0    /* address value (in decimal) */,
      /* d_val */      0    /* integer value,  */,
    }
  },
  {
    /* d_tag */        3    /* entry type, DT_PLTGOT */,
    /* d_un  */   {
      /* d_ptr */      16360    /* address value (in decimal) */,
      /* d_val */      16360    /* integer value,  */,
    }
  },
  {
    /* d_tag */        2    /* entry type, DT_PLTRELSZ */,
    /* d_un  */   {
      /* d_ptr */      24    /* address value (in decimal) */,
      /* d_val */      24    /* integer value,  */,
    }
  },
  {
    /* d_tag */        20    /* entry type, DT_PLTREL */,
    /* d_un  */   {
      /* d_ptr */      7    /* address value (in decimal) */,
      /* d_val */      7    /* integer value,  */,
    }
  },
  {
    /* d_tag */        23    /* entry type, DT_JMPREL */,
    /* d_un  */   {
      /* d_ptr */      1552    /* address value (in decimal) */,
      /* d_val */      1552    /* integer value,  */,
    }
  },
  {
    /* d_tag */        7    /* entry type, DT_RELA */,
    /* d_un  */   {
      /* d_ptr */      1360    /* address value (in decimal) */,
      /* d_val */      1360    /* integer value,  */,
    }
  },
  {
    /* d_tag */        8    /* entry type, DT_RELASZ */,
    /* d_un  */   {
      /* d_ptr */      192    /* address value (in decimal) */,
      /* d_val */      192    /* integer value,  */,
    }
  },
  {
    /* d_tag */        9    /* entry type, DT_RELAENT */,
    /* d_un  */   {
      /* d_ptr */      24    /* address value (in decimal) */,
      /* d_val */      24    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879048187    /* entry type, DT_FLAGS_1 */,
    /* d_un  */   {
      /* d_ptr */      134217728    /* address value (in decimal) */,
      /* d_val */      134217728    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879048190    /* entry type, DT_VERNEED */,
    /* d_un  */   {
      /* d_ptr */      1312    /* address value (in decimal) */,
      /* d_val */      1312    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879048191    /* entry type, DT_VERNEEDNUM */,
    /* d_un  */   {
      /* d_ptr */      1    /* address value (in decimal) */,
      /* d_val */      1    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879048176    /* entry type, DT_VERSYM */,
    /* d_un  */   {
      /* d_ptr */      1294    /* address value (in decimal) */,
      /* d_val */      1294    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879048185    /* entry type, DT_RELACOUNT */,
    /* d_un  */   {
      /* d_ptr */      3    /* address value (in decimal) */,
      /* d_val */      3    /* integer value,  */,
    }
  },
  {
    /* d_tag */        0    /* entry type, DT_NULL */,
    /* d_un  */   {
      /* d_ptr */      0    /* address value (in decimal) */,
      /* d_val */      0    /* integer value,  */,
    }
  },
  {
    /* d_tag */        0    /* entry type, DT_NULL */,
    /* d_un  */   {
      /* d_ptr */      0    /* address value (in decimal) */,
      /* d_val */      0    /* integer value,  */,
    }
  },
  {
    /* d_tag */        0    /* entry type, DT_NULL */,
    /* d_un  */   {
      /* d_ptr */      0    /* address value (in decimal) */,
      /* d_val */      0    /* integer value,  */,
    }
  },
  {
    /* d_tag */        0    /* entry type, DT_NULL */,
    /* d_un  */   {
      /* d_ptr */      0    /* address value (in decimal) */,
      /* d_val */      0    /* integer value,  */,
    }
  },
  {
    /* d_tag */        0    /* entry type, DT_NULL */,
    /* d_un  */   {
      /* d_ptr */      0    /* address value (in decimal) */,
      /* d_val */      0    /* integer value,  */,
    }
  },
};

