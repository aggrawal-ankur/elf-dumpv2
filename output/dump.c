/* Raw C-style dump of ./elfdump! */

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
  /* e_entry       */     8464,    /* bytes (in decimal) in the binary */
  /* e_phoff       */     64       /* bytes (in decimal) in the binary */,
  /* e_phnum       */     14,
  /* e_phentsize   */     56       /* size in decimal bytes */,
  /* e_shoff       */     51880    /* bytes (in decimal) in the binary */,
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
    /* p_filesz    */     6984      /* size in (decimal) bytes */,
    /* p_memsz     */     6984      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     5      /* PF_X PF_R  */,
    /* p_offset    */     8192      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     8192,
    /* p_paddr     */     8192,
    /* p_filesz    */     20177      /* size in (decimal) bytes */,
    /* p_memsz     */     20177      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     4      /* PF_R  */,
    /* p_offset    */     28672      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     28672,
    /* p_paddr     */     28672,
    /* p_filesz    */     14244      /* size in (decimal) bytes */,
    /* p_memsz     */     14244      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     1      /* PT_LOAD */,
    /* p_flags     */     6      /* PF_W PF_R  */,
    /* p_offset    */     44496      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     48592,
    /* p_paddr     */     48592,
    /* p_filesz    */     3872      /* size in (decimal) bytes */,
    /* p_memsz     */     3904      /* size in (decimal) bytes */,
    /* p_align     */     4096,
  },
  {
    /* p_type      */     2      /* PT_DYNAMIC */,
    /* p_flags     */     6      /* PF_W PF_R  */,
    /* p_offset    */     44512      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     48608,
    /* p_paddr     */     48608,
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
    /* p_offset    */     42884      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     42884,
    /* p_paddr     */     42884,
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
    /* p_offset    */     41728      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     41728,
    /* p_paddr     */     41728,
    /* p_filesz    */     228      /* size in (decimal) bytes */,
    /* p_memsz     */     228      /* size in (decimal) bytes */,
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
    /* p_offset    */     44496      /* bytes (in decimal) in the binary */,
    /* p_vaddr     */     48592,
    /* p_paddr     */     48592,
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
    /* sh_size         */     40         /* in bytes (decimal) */,
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
    /* sh_size         */     480         /* in bytes (decimal) */,
    /* sh_link         */     6,
    /* sh_info         */     1,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     91       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     3         /* SHT_STRTAB */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1464     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1464     /* bytes (in decimal) in the binary */,
    /* sh_size         */     221         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     1,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     99       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1879048191         /* SHT_GNU_versym */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1686     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1686     /* bytes (in decimal) in the binary */,
    /* sh_size         */     40         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     0,
    /* sh_addralign    */     2,
    /* sh_entsize      */     2         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     112       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1879048190         /* SHT_GNU_verneed */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     1728     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1728     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     1776     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     1776     /* bytes (in decimal) in the binary */,
    /* sh_size         */     4896         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     137       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     4         /* SHT_RELA */,
    /* sh_flags        */     66         /* SHF_ALLOC SHF_INFO_LINK  */,
    /* sh_addr         */     6672     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     6672     /* bytes (in decimal) in the binary */,
    /* sh_size         */     312         /* in bytes (decimal) */,
    /* sh_link         */     5,
    /* sh_info         */     24,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     147       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     8192     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8192     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     8224     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8224     /* bytes (in decimal) in the binary */,
    /* sh_size         */     224         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     16,
    /* sh_entsize      */     16         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     153       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     8448     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8448     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     8464     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     8464     /* bytes (in decimal) in the binary */,
    /* sh_size         */     19896         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     16,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     168       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     6         /* SHF_ALLOC SHF_EXECINSTR  */,
    /* sh_addr         */     28360     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     28360     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     28672     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     28672     /* bytes (in decimal) in the binary */,
    /* sh_size         */     13054         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     182       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     41728     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     41728     /* bytes (in decimal) in the binary */,
    /* sh_size         */     228         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     4,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     196       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     41960     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     41960     /* bytes (in decimal) in the binary */,
    /* sh_size         */     924         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     206       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     7         /* SHT_NOTE */,
    /* sh_flags        */     2         /* SHF_ALLOC  */,
    /* sh_addr         */     42884     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     42884     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     48592     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     44496     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     48600     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     44504     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     48608     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     44512     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     49088     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     44992     /* bytes (in decimal) in the binary */,
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
    /* sh_addr         */     49128     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     45032     /* bytes (in decimal) in the binary */,
    /* sh_size         */     128         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     8,
    /* sh_entsize      */     8         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     262       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     49280     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     45184     /* bytes (in decimal) in the binary */,
    /* sh_size         */     3184         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     32,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     268       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     8         /* SHT_NOBITS */,
    /* sh_flags        */     3         /* SHF_WRITE SHF_ALLOC  */,
    /* sh_addr         */     52480     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     48368     /* bytes (in decimal) in the binary */,
    /* sh_size         */     16         /* in bytes (decimal) */,
    /* sh_link         */     0,
    /* sh_info         */     0,
    /* sh_addralign    */     32,
    /* sh_entsize      */     0         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     273       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     1         /* SHT_PROGBITS */,
    /* sh_flags        */     48         /* SHF_MERGE SHF_STRINGS  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     48368     /* bytes (in decimal) in the binary */,
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
    /* sh_offset       */     48400     /* bytes (in decimal) in the binary */,
    /* sh_size         */     2064         /* in bytes (decimal) */,
    /* sh_link         */     29,
    /* sh_info         */     21,
    /* sh_addralign    */     8,
    /* sh_entsize      */     24         /* in bytes (decimal) */,
  },
  {
    /* sh_name         */     9       /* offset (in decimal) in section header string table */ ,
    /* sh_type         */     3         /* SHT_STRTAB */,
    /* sh_flags        */     0         /*  */,
    /* sh_addr         */     0     /* Section virtual addr at execution (in decimal) */,
    /* sh_offset       */     50464     /* bytes (in decimal) in the binary */,
    /* sh_size         */     1130         /* in bytes (decimal) */,
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
    /* sh_offset       */     51594     /* bytes (in decimal) in the binary */,
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
  '\0', 'S', 'c', 'r', 't', '1', '.', 'o', '\0', '_', '_', 'a', 'b', 'i', '_', 't', 'a', 'g', '\0', 'c', 'r', 't', 's', 't', 'u', 'f', 'f', '.', 'c', '\0', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', '_', 't', 'm', '_', 'c', 'l', 'o', 'n', 'e', 's', '\0', '_', '_', 'd', 'o', '_', 'g', 'l', 'o', 'b', 'a', 'l', '_', 'd', 't', 'o', 'r', 's', '_', 'a', 'u', 'x', '\0', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd', '.', '0', '\0', '_', '_', 'd', 'o', '_', 'g', 'l', 'o', 'b', 'a', 'l', '_', 'd', 't', 'o', 'r', 's', '_', 'a', 'u', 'x', '_', 'f', 'i', 'n', 'i', '_', 'a', 'r', 'r', 'a', 'y', '_', 'e', 'n', 't', 'r', 'y', '\0', 'f', 'r', 'a', 'm', 'e', '_', 'd', 'u', 'm', 'm', 'y', '\0', '_', '_', 'f', 'r', 'a', 'm', 'e', '_', 'd', 'u', 'm', 'm', 'y', '_', 'i', 'n', 'i', 't', '_', 'a', 'r', 'r', 'a', 'y', '_', 'e', 'n', 't', 'r', 'y', '\0', 'm', 'a', 'i', 'n', '.', 'c', '\0', 'p', 'a', 'r', 's', 'e', 'r', '.', 'c', '\0', 'd', 'u', 'm', 'p', '.', 'c', '\0', 'm', 'a', 'p', 'p', 'i', 'n', 'g', 's', '.', 'c', '\0', '_', '_', 'F', 'R', 'A', 'M', 'E', '_', 'E', 'N', 'D', '_', '_', '\0', '_', 'D', 'Y', 'N', 'A', 'M', 'I', 'C', '\0', '_', '_', 'G', 'N', 'U', '_', 'E', 'H', '_', 'F', 'R', 'A', 'M', 'E', '_', 'H', 'D', 'R', '\0', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'O', 'F', 'F', 'S', 'E', 'T', '_', 'T', 'A', 'B', 'L', 'E', '_', '\0', 'd', 'u', 'm', 'p', '_', 'r', 'e', 'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 's', '\0', 'd', 'u', 'm', 'p', '_', 'd', 'y', 'n', 's', 't', 'r', '\0', 'f', 'r', 'e', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', '_', 'l', 'i', 'b', 'c', '_', 's', 't', 'a', 'r', 't', '_', 'm', 'a', 'i', 'n', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '3', '4', '\0', 'g', 'e', 'n', 'e', 'r', 'a', 'l', '_', 'd', 'u', 'm', 'p', '\0', '_', 'I', 'T', 'M', '_', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 'p', 'u', 't', 's', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'f', 'r', 'e', 'a', 'd', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', '_', 's', 't', 'b', 'i', 'n', 'd', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'd', 'y', 'n', 's', 'y', 'm', '\0', '_', 'e', 'd', 'a', 't', 'a', '\0', 'f', 'c', 'l', 'o', 's', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'v', 'e', 'r', 'i', 'f', 'y', '_', 'e', 'l', 'f', '\0', 'd', 'u', 'm', 'p', '_', 's', 't', 'r', 't', 'a', 'b', '\0', '_', 'f', 'i', 'n', 'i', '\0', 'd', 'e', 'a', 'l', 'l', 'o', 'c', 'a', 't', 'o', 'r', '\0', 'r', 't', 'y', 'p', 'e', 's', '\0', 'd', 'u', 'm', 'p', '_', 's', 'y', 'm', 't', 'a', 'b', '\0', 'm', 'e', 'm', 's', 'e', 't', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 'h', 's', 't', 'r', 't', 'a', 'b', '\0', '_', '_', 'd', 'a', 't', 'a', '_', 's', 't', 'a', 'r', 't', '\0', 's', 't', 'r', 'c', 'm', 'p', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', '_', 'd', 't', 'y', 'p', 'e', 's', '\0', 'f', 'p', 'r', 'i', 'n', 't', 'f', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', '_', 'g', 'm', 'o', 'n', '_', 's', 't', 'a', 'r', 't', '_', '_', '\0', 'd', '_', 's', 't', 't', 'y', 'p', 'e', 's', '\0', '_', '_', 'd', 's', 'o', '_', 'h', 'a', 'n', 'd', 'l', 'e', '\0', '_', 'I', 'O', '_', 's', 't', 'd', 'i', 'n', '_', 'u', 's', 'e', 'd', '\0', 'd', '_', 's', 'h', 't', 'y', 'p', 'e', 's', '\0', 'd', '_', 'e', 'h', 't', 'y', 'p', 'e', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'p', 'h', 'd', 'r', 's', '\0', 'd', '_', 'e', 'h', 'm', 'a', 'c', 'h', 'i', 'n', 'e', 's', '\0', 'm', 'a', 'l', 'l', 'o', 'c', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 'h', 'd', 'r', 's', '\0', '_', 'e', 'n', 'd', '\0', 'd', '_', 's', 'h', 'f', 'l', 'a', 'g', 's', '\0', 'f', 's', 'e', 'e', 'k', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 'd', 'y', 'n', 's', 'y', 'm', '\0', 'p', 'a', 'r', 's', 'e', '_', 'd', 'y', 'n', 'a', 'm', 'i', 'c', '\0', '_', '_', 'b', 's', 's', '_', 's', 't', 'a', 'r', 't', '\0', 'm', 'a', 'i', 'n', '\0', 'd', '_', 's', 't', 'v', 'i', 's', 'i', 'b', 'l', 'e', '\0', 'd', '_', 'p', 'h', 't', 'y', 'p', 'e', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'd', 'y', 'n', 's', 't', 'r', '\0', 'd', 'u', 'm', 'p', '_', 'd', 'y', 'n', 'a', 'm', 'i', 'c', '\0', 'f', 'o', 'p', 'e', 'n', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 'p', 'h', 'd', 'r', 's', '\0', 'd', '_', 'p', 'h', 'f', 'l', 'a', 'g', 's', '\0', 'f', 'w', 'r', 'i', 't', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', '_', 'T', 'M', 'C', '_', 'E', 'N', 'D', '_', '_', '\0', 'd', 'u', 'm', 'p', '_', 's', 'h', 's', 't', 'r', 't', 'a', 'b', '\0', '_', 'I', 'T', 'M', '_', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 't', 'r', 't', 'a', 'b', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 'y', 'm', 't', 'a', 'b', '\0', 'd', 'u', 'm', 'p', '_', 'e', 'h', 'd', 'r', '\0', 's', 't', 'r', 'd', 'u', 'p', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'p', 'a', 'r', 's', 'e', '_', 'r', 'e', 'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 's', '\0', '_', '_', 'c', 'x', 'a', '_', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', 'i', 'n', 'i', 't', '\0', 'p', 'a', 'r', 's', 'e', '_', 'e', 'h', 'd', 'r', '\0', 's', 't', 'd', 'e', 'r', 'r', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 's', 'h', 'd', 'r', 's', '\0', 
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
  "main.c",
  "parser.c",
  "dump.c",
  "mappings.c",
  "__FRAME_END__",
  "_DYNAMIC",
  "__GNU_EH_FRAME_HDR",
  "_GLOBAL_OFFSET_TABLE_",
  "dump_relocations",
  "dump_dynstr",
  "free@GLIBC_2.2.5",
  "__libc_start_main@GLIBC_2.34",
  "general_dump",
  "_ITM_deregisterTMCloneTable",
  "puts@GLIBC_2.2.5",
  "fread@GLIBC_2.2.5",
  "d_stbinds",
  "parse_dynsym",
  "_edata",
  "fclose@GLIBC_2.2.5",
  "verify_elf",
  "dump_strtab",
  "_fini",
  "deallocator",
  "rtypes",
  "dump_symtab",
  "memset@GLIBC_2.2.5",
  "parse_shstrtab",
  "__data_start",
  "strcmp@GLIBC_2.2.5",
  "d_dtypes",
  "fprintf@GLIBC_2.2.5",
  "__gmon_start__",
  "d_sttypes",
  "__dso_handle",
  "_IO_stdin_used",
  "d_shtypes",
  "d_ehtypes",
  "parse_phdrs",
  "d_ehmachines",
  "malloc@GLIBC_2.2.5",
  "parse_shdrs",
  "_end",
  "d_shflags",
  "fseek@GLIBC_2.2.5",
  "dump_dynsym",
  "parse_dynamic",
  "__bss_start",
  "main",
  "d_stvisible",
  "d_phtypes",
  "parse_dynstr",
  "dump_dynamic",
  "fopen@GLIBC_2.2.5",
  "dump_phdrs",
  "d_phflags",
  "fwrite@GLIBC_2.2.5",
  "__TMC_END__",
  "dump_shstrtab",
  "_ITM_registerTMCloneTable",
  "parse_strtab",
  "parse_symtab",
  "dump_ehdr",
  "strdup@GLIBC_2.2.5",
  "parse_relocations",
  "__cxa_finalize@GLIBC_2.2.5",
  "_init",
  "parse_ehdr",
  "stderr@GLIBC_2.2.5",
  "dump_shdrs",
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
    /* st_value     */     42884,     /* symbol value (in decimal) */
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
    /* st_value     */     8512,     /* symbol value (in decimal) */
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
    /* st_value     */     8560,     /* symbol value (in decimal) */
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
    /* st_value     */     8624,     /* symbol value (in decimal) */
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
    /* st_value     */     52488,     /* symbol value (in decimal) */
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
    /* st_value     */     48600,     /* symbol value (in decimal) */
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
    /* st_value     */     8688,     /* symbol value (in decimal) */
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
    /* st_value     */     48592,     /* symbol value (in decimal) */
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
    /* st_name      */     174,     /* offset (decimal ) in .strtab */

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
    /* st_name      */     183,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     14,     /* loop counter */
    /* st_name      */     190,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     16,     /* loop counter */
    /* st_name      */     201,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     18,     /* section (idx) it is present in */
    /* st_value     */     42880,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     17,     /* loop counter */
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
    /* looped_idx   */     18,     /* loop counter */
    /* st_name      */     215,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     22,     /* section (idx) it is present in */
    /* st_value     */     48608,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     19,     /* loop counter */
    /* st_name      */     224,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 0 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     17,     /* section (idx) it is present in */
    /* st_value     */     41728,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     20,     /* loop counter */
    /* st_name      */     243,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 1 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     0,     /* STB_LOCAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     24,     /* section (idx) it is present in */
    /* st_value     */     49128,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     21,     /* loop counter */
    /* st_name      */     265,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     25739,     /* symbol value (in decimal) */
    /* st_size      */     1452,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     22,     /* loop counter */
    /* st_name      */     282,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     27191,     /* symbol value (in decimal) */
    /* st_size      */     530,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     23,     /* loop counter */
    /* st_name      */     294,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     24,     /* loop counter */
    /* st_name      */     311,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     25,     /* loop counter */
    /* st_name      */     340,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     18729,     /* symbol value (in decimal) */
    /* st_size      */     207,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     26,     /* loop counter */
    /* st_name      */     353,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     27,     /* loop counter */
    /* st_name      */     561,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 32 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     2,     /* STB_WEAK */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49280,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     28,     /* loop counter */
    /* st_name      */     381,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     29,     /* loop counter */
    /* st_name      */     398,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     30,     /* loop counter */
    /* st_name      */     416,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     50912,     /* symbol value (in decimal) */
    /* st_size      */     64,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     31,     /* loop counter */
    /* st_name      */     426,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     14621,     /* symbol value (in decimal) */
    /* st_size      */     638,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     32,     /* loop counter */
    /* st_name      */     439,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     52464,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     33,     /* loop counter */
    /* st_name      */     446,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     34,     /* loop counter */
    /* st_name      */     465,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     11049,     /* symbol value (in decimal) */
    /* st_size      */     220,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     35,     /* loop counter */
    /* st_name      */     476,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     22770,     /* symbol value (in decimal) */
    /* st_size      */     511,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     36,     /* loop counter */
    /* st_name      */     488,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     15,     /* section (idx) it is present in */
    /* st_value     */     28360,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     37,     /* loop counter */
    /* st_name      */     601,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     38,     /* loop counter */
    /* st_name      */     494,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     18235,     /* symbol value (in decimal) */
    /* st_size      */     494,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     39,     /* loop counter */
    /* st_name      */     506,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     51040,     /* symbol value (in decimal) */
    /* st_size      */     672,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     40,     /* loop counter */
    /* st_name      */     513,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     23281,     /* symbol value (in decimal) */
    /* st_size      */     1229,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     41,     /* loop counter */
    /* st_name      */     525,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     42,     /* loop counter */
    /* st_name      */     544,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     12208,     /* symbol value (in decimal) */
    /* st_size      */     653,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     43,     /* loop counter */
    /* st_name      */     559,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49280,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     44,     /* loop counter */
    /* st_name      */     572,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     45,     /* loop counter */
    /* st_name      */     591,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     51712,     /* symbol value (in decimal) */
    /* st_size      */     752,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     46,     /* loop counter */
    /* st_name      */     600,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     47,     /* loop counter */
    /* st_name      */     620,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     48,     /* loop counter */
    /* st_name      */     635,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     50784,     /* symbol value (in decimal) */
    /* st_size      */     112,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     49,     /* loop counter */
    /* st_name      */     645,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49288,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     50,     /* loop counter */
    /* st_name      */     658,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     16,     /* section (idx) it is present in */
    /* st_value     */     28672,     /* symbol value (in decimal) */
    /* st_size      */     4,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     51,     /* loop counter */
    /* st_name      */     673,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49952,     /* symbol value (in decimal) */
    /* st_size      */     576,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     52,     /* loop counter */
    /* st_name      */     683,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49312,     /* symbol value (in decimal) */
    /* st_size      */     96,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     53,     /* loop counter */
    /* st_name      */     693,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     11502,     /* symbol value (in decimal) */
    /* st_size      */     358,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     54,     /* loop counter */
    /* st_name      */     705,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49408,     /* symbol value (in decimal) */
    /* st_size      */     128,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     55,     /* loop counter */
    /* st_name      */     718,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     56,     /* loop counter */
    /* st_name      */     737,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     11860,     /* symbol value (in decimal) */
    /* st_size      */     348,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     57,     /* loop counter */
    /* st_name      */     749,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     52496,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     58,     /* loop counter */
    /* st_name      */     754,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     50528,     /* symbol value (in decimal) */
    /* st_size      */     256,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     59,     /* loop counter */
    /* st_name      */     565,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     8464,     /* symbol value (in decimal) */
    /* st_size      */     34,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     60,     /* loop counter */
    /* st_name      */     764,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     61,     /* loop counter */
    /* st_name      */     782,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     24510,     /* symbol value (in decimal) */
    /* st_size      */     1229,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     62,     /* loop counter */
    /* st_name      */     794,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     17586,     /* symbol value (in decimal) */
    /* st_size      */     649,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     63,     /* loop counter */
    /* st_name      */     808,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 16 */
      /* type       */     0,     /* STT_NOTYPE */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     52480,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     64,     /* loop counter */
    /* st_name      */     820,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     8697,     /* symbol value (in decimal) */
    /* st_size      */     2352,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     65,     /* loop counter */
    /* st_name      */     825,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     50976,     /* symbol value (in decimal) */
    /* st_size      */     64,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     66,     /* loop counter */
    /* st_name      */     837,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49536,     /* symbol value (in decimal) */
    /* st_size      */     352,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     67,     /* loop counter */
    /* st_name      */     847,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     16409,     /* symbol value (in decimal) */
    /* st_size      */     1177,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     68,     /* loop counter */
    /* st_name      */     860,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     27721,     /* symbol value (in decimal) */
    /* st_size      */     639,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     69,     /* loop counter */
    /* st_name      */     873,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     70,     /* loop counter */
    /* st_name      */     891,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     19998,     /* symbol value (in decimal) */
    /* st_size      */     1182,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     71,     /* loop counter */
    /* st_name      */     902,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     49888,     /* symbol value (in decimal) */
    /* st_size      */     48,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     72,     /* loop counter */
    /* st_name      */     912,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     73,     /* loop counter */
    /* st_name      */     931,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     25,     /* section (idx) it is present in */
    /* st_value     */     52464,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     74,     /* loop counter */
    /* st_name      */     943,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     22259,     /* symbol value (in decimal) */
    /* st_size      */     511,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     75,     /* loop counter */
    /* st_name      */     957,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     76,     /* loop counter */
    /* st_name      */     983,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     12861,     /* symbol value (in decimal) */
    /* st_size      */     1122,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     77,     /* loop counter */
    /* st_name      */     996,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     13983,     /* symbol value (in decimal) */
    /* st_size      */     638,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     78,     /* loop counter */
    /* st_name      */     1009,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     18936,     /* symbol value (in decimal) */
    /* st_size      */     1062,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     79,     /* loop counter */
    /* st_name      */     1019,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     80,     /* loop counter */
    /* st_name      */     1038,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     15259,     /* symbol value (in decimal) */
    /* st_size      */     1150,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     81,     /* loop counter */
    /* st_name      */     1056,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     82,     /* loop counter */
    /* st_name      */     1083,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     2,     /* symbol visibility, STV_HIDDEN */
    /* st_shdx      */     11,     /* section (idx) it is present in */
    /* st_value     */     8192,     /* symbol value (in decimal) */
    /* st_size      */     0,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     83,     /* loop counter */
    /* st_name      */     1089,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     11269,     /* symbol value (in decimal) */
    /* st_size      */     233,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     84,     /* loop counter */
    /* st_name      */     1100,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     52480,     /* symbol value (in decimal) */
    /* st_size      */     8,     /* symbol size (in decimal) */
  },
  {
    /* looped_idx   */     85,     /* loop counter */
    /* st_name      */     1119,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 18 */
      /* type       */     2,     /* STT_FUNC */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     14,     /* section (idx) it is present in */
    /* st_value     */     21180,     /* symbol value (in decimal) */
    /* st_size      */     1079,     /* symbol size (in decimal) */
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
    /* st_name      */     37,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     3,     /* loop counter */
    /* st_name      */     152,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     4,     /* loop counter */
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
    /* looped_idx   */     5,     /* loop counter */
    /* st_name      */     11,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     6,     /* loop counter */
    /* st_name      */     85,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     7,     /* loop counter */
    /* st_name      */     63,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     8,     /* loop counter */
    /* st_name      */     92,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     9,     /* loop counter */
    /* st_name      */     106,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     10,     /* loop counter */
    /* st_name      */     62,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     11,     /* loop counter */
    /* st_name      */     180,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     12,     /* loop counter */
    /* st_name      */     30,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     13,     /* loop counter */
    /* st_name      */     113,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     14,     /* loop counter */
    /* st_name      */     24,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     15,     /* loop counter */
    /* st_name      */     99,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     16,     /* loop counter */
    /* st_name      */     195,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     17,     /* loop counter */
    /* st_name      */     17,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     18,     /* loop counter */
    /* st_name      */     70,     /* offset (decimal ) in .strtab */

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
    /* looped_idx   */     19,     /* loop counter */
    /* st_name      */     55,     /* offset (decimal ) in .strtab */

    /* st_info      */ {          /* 17 */
      /* type       */     1,     /* STT_OBJECT */
      /* binding    */     1,     /* STB_GLOBAL */
    },

    /* st_other     */     0,     /* symbol visibility, STV_DEFAULT */
    /* st_shdx      */     26,     /* section (idx) it is present in */
    /* st_value     */     52480,     /* symbol value (in decimal) */
    /* st_size      */     8,     /* symbol size (in decimal) */
  },
};


/* Eager Binding Relocations Table (.rela.dyn) dump. */
Elf64_Rela rela_dyn = {
  {
    /* r_offset       */     48592       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     8688,
  },
  {
    /* r_offset       */     48600       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     8624,
  },
  {
    /* r_offset       */     49288       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     49288,
  },
  {
    /* r_offset       */     49320       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39325,
  },
  {
    /* r_offset       */     49336       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39333,
  },
  {
    /* r_offset       */     49352       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39340,
  },
  {
    /* r_offset       */     49368       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39348,
  },
  {
    /* r_offset       */     49384       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39355,
  },
  {
    /* r_offset       */     49400       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39363,
  },
  {
    /* r_offset       */     49416       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39370,
  },
  {
    /* r_offset       */     49432       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39378,
  },
  {
    /* r_offset       */     49448       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39385,
  },
  {
    /* r_offset       */     49464       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39392,
  },
  {
    /* r_offset       */     49480       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39399,
  },
  {
    /* r_offset       */     49496       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39406,
  },
  {
    /* r_offset       */     49512       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39416,
  },
  {
    /* r_offset       */     49528       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39427,
  },
  {
    /* r_offset       */     49544       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39436,
  },
  {
    /* r_offset       */     49560       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39444,
  },
  {
    /* r_offset       */     49576       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39452,
  },
  {
    /* r_offset       */     49592       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39463,
  },
  {
    /* r_offset       */     49608       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39473,
  },
  {
    /* r_offset       */     49624       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39481,
  },
  {
    /* r_offset       */     49640       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39490,
  },
  {
    /* r_offset       */     49656       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39498,
  },
  {
    /* r_offset       */     49672       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39505,
  },
  {
    /* r_offset       */     49688       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39512,
  },
  {
    /* r_offset       */     49704       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39520,
  },
  {
    /* r_offset       */     49720       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39536,
  },
  {
    /* r_offset       */     49736       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39549,
  },
  {
    /* r_offset       */     49752       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39562,
  },
  {
    /* r_offset       */     49768       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39578,
  },
  {
    /* r_offset       */     49784       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39592,
  },
  {
    /* r_offset       */     49800       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39602,
  },
  {
    /* r_offset       */     49816       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39613,
  },
  {
    /* r_offset       */     49832       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39626,
  },
  {
    /* r_offset       */     49848       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39636,
  },
  {
    /* r_offset       */     49864       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39644,
  },
  {
    /* r_offset       */     49880       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39654,
  },
  {
    /* r_offset       */     49896       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39664,
  },
  {
    /* r_offset       */     49912       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39670,
  },
  {
    /* r_offset       */     49928       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39676,
  },
  {
    /* r_offset       */     49960       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39682,
  },
  {
    /* r_offset       */     49976       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39691,
  },
  {
    /* r_offset       */     49992       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39704,
  },
  {
    /* r_offset       */     50008       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39715,
  },
  {
    /* r_offset       */     50024       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39726,
  },
  {
    /* r_offset       */     50040       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39735,
  },
  {
    /* r_offset       */     50056       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39744,
  },
  {
    /* r_offset       */     50072       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39756,
  },
  {
    /* r_offset       */     50088       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39765,
  },
  {
    /* r_offset       */     50104       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39776,
  },
  {
    /* r_offset       */     50120       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39784,
  },
  {
    /* r_offset       */     50136       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39794,
  },
  {
    /* r_offset       */     50152       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39805,
  },
  {
    /* r_offset       */     50168       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39820,
  },
  {
    /* r_offset       */     50184       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39835,
  },
  {
    /* r_offset       */     50200       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39853,
  },
  {
    /* r_offset       */     50216       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39863,
  },
  {
    /* r_offset       */     50232       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39880,
  },
  {
    /* r_offset       */     50248       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39889,
  },
  {
    /* r_offset       */     50264       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39898,
  },
  {
    /* r_offset       */     50280       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39917,
  },
  {
    /* r_offset       */     50296       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39930,
  },
  {
    /* r_offset       */     50312       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39946,
  },
  {
    /* r_offset       */     50328       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39959,
  },
  {
    /* r_offset       */     50344       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39970,
  },
  {
    /* r_offset       */     50360       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     39984,
  },
  {
    /* r_offset       */     50376       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40000,
  },
  {
    /* r_offset       */     50392       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40017,
  },
  {
    /* r_offset       */     50408       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40032,
  },
  {
    /* r_offset       */     50424       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40048,
  },
  {
    /* r_offset       */     50440       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40063,
  },
  {
    /* r_offset       */     50456       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40074,
  },
  {
    /* r_offset       */     50472       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40083,
  },
  {
    /* r_offset       */     50488       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40094,
  },
  {
    /* r_offset       */     50504       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40105,
  },
  {
    /* r_offset       */     50520       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40116,
  },
  {
    /* r_offset       */     50536       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40127,
  },
  {
    /* r_offset       */     50552       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40138,
  },
  {
    /* r_offset       */     50568       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40149,
  },
  {
    /* r_offset       */     50584       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40164,
  },
  {
    /* r_offset       */     50600       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40175,
  },
  {
    /* r_offset       */     50616       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40188,
  },
  {
    /* r_offset       */     50632       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40203,
  },
  {
    /* r_offset       */     50648       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40219,
  },
  {
    /* r_offset       */     50664       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40241,
  },
  {
    /* r_offset       */     50680       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40252,
  },
  {
    /* r_offset       */     50696       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40261,
  },
  {
    /* r_offset       */     50712       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40277,
  },
  {
    /* r_offset       */     50728       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40289,
  },
  {
    /* r_offset       */     50744       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40303,
  },
  {
    /* r_offset       */     50760       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40319,
  },
  {
    /* r_offset       */     50776       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40332,
  },
  {
    /* r_offset       */     50792       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40345,
  },
  {
    /* r_offset       */     50808       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40356,
  },
  {
    /* r_offset       */     50824       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40367,
  },
  {
    /* r_offset       */     50840       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40376,
  },
  {
    /* r_offset       */     50856       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40388,
  },
  {
    /* r_offset       */     50872       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40397,
  },
  {
    /* r_offset       */     50888       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40408,
  },
  {
    /* r_offset       */     50920       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40416,
  },
  {
    /* r_offset       */     50936       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40426,
  },
  {
    /* r_offset       */     50952       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40437,
  },
  {
    /* r_offset       */     50968       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40446,
  },
  {
    /* r_offset       */     50984       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40461,
  },
  {
    /* r_offset       */     51000       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40473,
  },
  {
    /* r_offset       */     51016       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40486,
  },
  {
    /* r_offset       */     51032       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40497,
  },
  {
    /* r_offset       */     51048       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40511,
  },
  {
    /* r_offset       */     51064       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40525,
  },
  {
    /* r_offset       */     51080       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40537,
  },
  {
    /* r_offset       */     51096       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40551,
  },
  {
    /* r_offset       */     51112       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40566,
  },
  {
    /* r_offset       */     51128       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40581,
  },
  {
    /* r_offset       */     51144       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40595,
  },
  {
    /* r_offset       */     51160       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40613,
  },
  {
    /* r_offset       */     51176       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40632,
  },
  {
    /* r_offset       */     51192       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40650,
  },
  {
    /* r_offset       */     51208       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40668,
  },
  {
    /* r_offset       */     51224       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40680,
  },
  {
    /* r_offset       */     51240       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40693,
  },
  {
    /* r_offset       */     51256       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40705,
  },
  {
    /* r_offset       */     51272       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40719,
  },
  {
    /* r_offset       */     51288       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40730,
  },
  {
    /* r_offset       */     51304       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40743,
  },
  {
    /* r_offset       */     51320       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40761,
  },
  {
    /* r_offset       */     51336       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40779,
  },
  {
    /* r_offset       */     51352       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40796,
  },
  {
    /* r_offset       */     51368       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40811,
  },
  {
    /* r_offset       */     51384       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40826,
  },
  {
    /* r_offset       */     51400       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40844,
  },
  {
    /* r_offset       */     51416       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40862,
  },
  {
    /* r_offset       */     51432       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40879,
  },
  {
    /* r_offset       */     51448       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40893,
  },
  {
    /* r_offset       */     51464       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40911,
  },
  {
    /* r_offset       */     51480       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40928,
  },
  {
    /* r_offset       */     51496       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40943,
  },
  {
    /* r_offset       */     51512       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40963,
  },
  {
    /* r_offset       */     51528       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40980,
  },
  {
    /* r_offset       */     51544       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     40998,
  },
  {
    /* r_offset       */     51560       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41016,
  },
  {
    /* r_offset       */     51576       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41032,
  },
  {
    /* r_offset       */     51592       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41048,
  },
  {
    /* r_offset       */     51608       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41073,
  },
  {
    /* r_offset       */     51624       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41095,
  },
  {
    /* r_offset       */     51640       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41112,
  },
  {
    /* r_offset       */     51656       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41131,
  },
  {
    /* r_offset       */     51672       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41151,
  },
  {
    /* r_offset       */     51688       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41170,
  },
  {
    /* r_offset       */     51704       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41193,
  },
  {
    /* r_offset       */     51720       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41206,
  },
  {
    /* r_offset       */     51736       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41214,
  },
  {
    /* r_offset       */     51752       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41224,
  },
  {
    /* r_offset       */     51768       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41236,
  },
  {
    /* r_offset       */     51784       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41246,
  },
  {
    /* r_offset       */     51800       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41254,
  },
  {
    /* r_offset       */     51816       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41264,
  },
  {
    /* r_offset       */     51832       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41274,
  },
  {
    /* r_offset       */     51848       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41282,
  },
  {
    /* r_offset       */     51864       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41292,
  },
  {
    /* r_offset       */     51880       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41303,
  },
  {
    /* r_offset       */     51896       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41312,
  },
  {
    /* r_offset       */     51912       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41322,
  },
  {
    /* r_offset       */     51928       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41330,
  },
  {
    /* r_offset       */     51944       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41338,
  },
  {
    /* r_offset       */     51960       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41348,
  },
  {
    /* r_offset       */     51976       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41357,
  },
  {
    /* r_offset       */     51992       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41369,
  },
  {
    /* r_offset       */     52008       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41376,
  },
  {
    /* r_offset       */     52024       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41385,
  },
  {
    /* r_offset       */     52040       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41395,
  },
  {
    /* r_offset       */     52056       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41405,
  },
  {
    /* r_offset       */     52072       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41414,
  },
  {
    /* r_offset       */     52088       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41425,
  },
  {
    /* r_offset       */     52104       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41435,
  },
  {
    /* r_offset       */     52120       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41447,
  },
  {
    /* r_offset       */     52136       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41461,
  },
  {
    /* r_offset       */     52152       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41475,
  },
  {
    /* r_offset       */     52168       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41491,
  },
  {
    /* r_offset       */     52184       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41507,
  },
  {
    /* r_offset       */     52200       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41518,
  },
  {
    /* r_offset       */     52216       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41527,
  },
  {
    /* r_offset       */     52232       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41539,
  },
  {
    /* r_offset       */     52248       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41556,
  },
  {
    /* r_offset       */     52264       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41575,
  },
  {
    /* r_offset       */     52280       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41591,
  },
  {
    /* r_offset       */     52296       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41601,
  },
  {
    /* r_offset       */     52312       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41609,
  },
  {
    /* r_offset       */     52328       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41620,
  },
  {
    /* r_offset       */     52344       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41630,
  },
  {
    /* r_offset       */     52360       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41643,
  },
  {
    /* r_offset       */     52376       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41655,
  },
  {
    /* r_offset       */     52392       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41666,
  },
  {
    /* r_offset       */     52408       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41676,
  },
  {
    /* r_offset       */     52424       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41689,
  },
  {
    /* r_offset       */     52440       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41700,
  },
  {
    /* r_offset       */     52456       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 8,
      /* rel_type     */     8           /* R_X86_64_RELATIVE */,
      /* sym_idx      */     0,
    },

    /* r_addend       */     41714,
  },
  {
    /* r_offset       */     49088       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 200000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     2,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49096       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 300000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     3,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49104       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* b00000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     11,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49112       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 1000000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     16,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49120       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 1200000006,
      /* rel_type     */     6           /* R_X86_64_GLOB_DAT */,
      /* sym_idx      */     18,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     52480       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 1300000005,
      /* rel_type     */     5           /* R_X86_64_COPY */,
      /* sym_idx      */     19,
    },

    /* r_addend       */     0,
  },
};

/* Lazy Binding Relocations Table (.rela.plt) dump. */
Elf64_Rela rela_plt = {
  {
    /* r_offset       */     48592       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 100000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     1,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     48600       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 400000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     4,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49288       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 500000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     5,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49320       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 600000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     6,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49336       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 700000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     7,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49352       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 800000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     8,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49368       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 900000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     9,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49384       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* a00000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     10,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49400       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* c00000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     12,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49416       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* d00000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     13,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49432       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* e00000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     14,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49448       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* f00000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     15,
    },

    /* r_addend       */     0,
  },
  {
    /* r_offset       */     49464       /* offset (in decimal) in the binary */,

    /* r_info         */ {               /* 1100000007,
      /* rel_type     */     7           /* R_X86_64_JUMP_SLOT */,
      /* sym_idx      */     17,
    },

    /* r_addend       */     0,
  },
};


/* Dynamic String Table (.dynstr) flat-dump. */
char* r_dynstr = {
  '\0', 'p', 'u', 't', 's', '\0', 'f', 'r', 'e', 'e', '\0', 'f', 'r', 'e', 'a', 'd', '\0', 's', 't', 'r', 'd', 'u', 'p', '\0', 'f', 'o', 'p', 'e', 'n', '\0', 'm', 'a', 'l', 'l', 'o', 'c', '\0', '_', '_', 'l', 'i', 'b', 'c', '_', 's', 't', 'a', 'r', 't', '_', 'm', 'a', 'i', 'n', '\0', 's', 't', 'd', 'e', 'r', 'r', '\0', 'f', 'p', 'r', 'i', 'n', 't', 'f', '\0', '_', '_', 'c', 'x', 'a', '_', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'e', '\0', 'f', 'c', 'l', 'o', 's', 'e', '\0', 'm', 'e', 'm', 's', 'e', 't', '\0', 'f', 'w', 'r', 'i', 't', 'e', '\0', 's', 't', 'r', 'c', 'm', 'p', '\0', 'f', 's', 'e', 'e', 'k', '\0', 'l', 'i', 'b', 'c', '.', 's', 'o', '.', '6', '\0', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '3', '4', '\0', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', 'I', 'T', 'M', '_', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', '_', '_', 'g', 'm', 'o', 'n', '_', 's', 't', 'a', 'r', 't', '_', '_', '\0', '_', 'I', 'T', 'M', '_', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 
};

/* Dynamic String Table (.dynstr) formatted-dump. */
char** f_dynstr = {
  "",
  "puts",
  "free",
  "fread",
  "strdup",
  "fopen",
  "malloc",
  "__libc_start_main",
  "stderr",
  "fprintf",
  "__cxa_finalize",
  "fclose",
  "memset",
  "fwrite",
  "strcmp",
  "fseek",
  "libc.so.6",
  "GLIBC_2.34",
  "GLIBC_2.2.5",
  "_ITM_deregisterTMCloneTable",
  "__gmon_start__",
  "_ITM_registerTMCloneTable",
};


/* Dynamic section dump. */
Elf64_Dyn dynamic = {
  {
    /* d_tag */        1    /* entry type, DT_NEEDED */,
    /* d_un  */   {
      /* d_ptr */      119    /* address value (in decimal) */,
      /* d_val */      119    /* integer value,  */,
    }
  },
  {
    /* d_tag */        12    /* entry type, DT_INIT */,
    /* d_un  */   {
      /* d_ptr */      8192    /* address value (in decimal) */,
      /* d_val */      8192    /* integer value,  */,
    }
  },
  {
    /* d_tag */        13    /* entry type, DT_FINI */,
    /* d_un  */   {
      /* d_ptr */      28360    /* address value (in decimal) */,
      /* d_val */      28360    /* integer value,  */,
    }
  },
  {
    /* d_tag */        25    /* entry type, DT_INIT_ARRAY */,
    /* d_un  */   {
      /* d_ptr */      48592    /* address value (in decimal) */,
      /* d_val */      48592    /* integer value,  */,
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
      /* d_ptr */      48600    /* address value (in decimal) */,
      /* d_val */      48600    /* integer value,  */,
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
      /* d_ptr */      1464    /* address value (in decimal) */,
      /* d_val */      1464    /* integer value,  */,
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
      /* d_ptr */      221    /* address value (in decimal) */,
      /* d_val */      221    /* integer value,  */,
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
      /* d_ptr */      49128    /* address value (in decimal) */,
      /* d_val */      49128    /* integer value,  */,
    }
  },
  {
    /* d_tag */        2    /* entry type, DT_PLTRELSZ */,
    /* d_un  */   {
      /* d_ptr */      312    /* address value (in decimal) */,
      /* d_val */      312    /* integer value,  */,
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
      /* d_ptr */      6672    /* address value (in decimal) */,
      /* d_val */      6672    /* integer value,  */,
    }
  },
  {
    /* d_tag */        7    /* entry type, DT_RELA */,
    /* d_un  */   {
      /* d_ptr */      1776    /* address value (in decimal) */,
      /* d_val */      1776    /* integer value,  */,
    }
  },
  {
    /* d_tag */        8    /* entry type, DT_RELASZ */,
    /* d_un  */   {
      /* d_ptr */      4896    /* address value (in decimal) */,
      /* d_val */      4896    /* integer value,  */,
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
      /* d_ptr */      1728    /* address value (in decimal) */,
      /* d_val */      1728    /* integer value,  */,
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
      /* d_ptr */      1686    /* address value (in decimal) */,
      /* d_val */      1686    /* integer value,  */,
    }
  },
  {
    /* d_tag */        1879048185    /* entry type, DT_RELACOUNT */,
    /* d_un  */   {
      /* d_ptr */      198    /* address value (in decimal) */,
      /* d_val */      198    /* integer value,  */,
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

