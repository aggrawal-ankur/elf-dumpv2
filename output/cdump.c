/* C-style dump of ./elfdump! */

#include <elf.h>

Elf64_Ehdr ehdr = {
  e_ident[16] = {
    /* [ 0] EI_MAG0     : */  0x7f,
    /* [ 1] EI_MAG1     : */  0x45,
    /* [ 2] EI_MAG2     : */  0x4c,
    /* [ 3] EI_MAG3     : */  0x46,
    /* [ 4] EI_CLASS    : */  2,     /* ELFCLASS64 */
    /* [ 5] EI_DATA     : */  1,     /* ELFDATA2LSB */
    /* [ 6] EI_VERSION  : */  1,     /* EV_CURRENT */
    /* [ 7] EI_PAD      : */  0x0,
    /* [ 8] EI_PAD      : */  0x0,
    /* [ 9] EI_PAD      : */  0x0,
    /* [10] EI_PAD      : */  0x0,
    /* [11] EI_PAD      : */  0x0,
    /* [12] EI_PAD      : */  0x0,
    /* [13] EI_PAD      : */  0x0,
    /* [14] EI_PAD      : */  0x0,
    /* [15] EI_PAD      : */  0x0,
  },
  e_type         = 3         ,  /* [ET_DYN] */
  e_machine      = 62        ,  /* [EM_X86_64] */
  e_version      = 1         ,  /* [EV_CURRENT] */
  e_ehsize       = 64        ,  /* Size of file header (in bytes) */
  e_entry        = 0x3100    ,  /* Bytes into file */
  e_phoff        = 64        ,  /* Bytes into file */
  e_phnum        = 14        ,  /* Number of program headers */
  e_phentsize    = 56        ,  /* Size of program headers (in bytes) */
  e_shoff        = 57984     ,  /* Bytes into file */
  e_shnum        = 31        ,  /* Number of section headers */
  e_shentsize    = 64        ,  /* Size of section headers (in bytes) */
  e_shstrndx     = 30        ,  /* Section header string table index in the section headers table */
  e_flags        = 0x0       ,  /* Flags */
};

Elf64_Shdr shdrs = {
  {
    sh_name        = 0         ,  /* OFFSET in .shstrtab, interpreted as [] */
    sh_type        = 0         ,  /* [SHT_NULL] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 0         ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 0         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 0         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 27        ,  /* OFFSET in .shstrtab, interpreted as [.note.gnu.property] */
    sh_type        = 7         ,  /* [SHT_NOTE] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 848       ,  /* Virtual Address of this section entry */
    sh_offset      = 848       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 32        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 46        ,  /* OFFSET in .shstrtab, interpreted as [.note.gnu.build-id] */
    sh_type        = 7         ,  /* [SHT_NOTE] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 880       ,  /* Virtual Address of this section entry */
    sh_offset      = 880       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 36        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 65        ,  /* OFFSET in .shstrtab, interpreted as [.interp] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 916       ,  /* Virtual Address of this section entry */
    sh_offset      = 916       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 28        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 73        ,  /* OFFSET in .shstrtab, interpreted as [.gnu.hash] */
    sh_type        = 1879048182,  /* [SHT_GNU_HASH] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 944       ,  /* Virtual Address of this section entry */
    sh_offset      = 944       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 48        ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 83        ,  /* OFFSET in .shstrtab, interpreted as [.dynsym] */
    sh_type        = 11        ,  /* [SHT_DYNSYM] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 992       ,  /* Virtual Address of this section entry */
    sh_offset      = 992       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 480       ,  /* Size of this section (in bytes) */
    sh_link        = 6         ,  
    sh_info        = 1         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 91        ,  /* OFFSET in .shstrtab, interpreted as [.dynstr] */
    sh_type        = 3         ,  /* [SHT_STRTAB] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1472      ,  /* Virtual Address of this section entry */
    sh_offset      = 1472      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 228       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 99        ,  /* OFFSET in .shstrtab, interpreted as [.gnu.version] */
    sh_type        = 1879048191,  /* [SHT_GNU_versym] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1700      ,  /* Virtual Address of this section entry */
    sh_offset      = 1700      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 40        ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  
    sh_info        = 0         ,  
    sh_addralign   = 2         ,  /* Section alignment requirement */
    sh_entsize     = 2         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 112       ,  /* OFFSET in .shstrtab, interpreted as [.gnu.version_r] */
    sh_type        = 1879048190,  /* [SHT_GNU_verneed] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1744      ,  /* Virtual Address of this section entry */
    sh_offset      = 1744      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 48        ,  /* Size of this section (in bytes) */
    sh_link        = 6         ,  
    sh_info        = 1         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 127       ,  /* OFFSET in .shstrtab, interpreted as [.rela.dyn] */
    sh_type        = 4         ,  /* [SHT_RELA] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1792      ,  /* Virtual Address of this section entry */
    sh_offset      = 1792      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8376      ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 137       ,  /* OFFSET in .shstrtab, interpreted as [.rela.plt] */
    sh_type        = 4         ,  /* [SHT_RELA] */
    sh_flags       = 66        ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_INFO_LINK],  */
    sh_addr        = 10168     ,  /* Virtual Address of this section entry */
    sh_offset      = 10168     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 288       ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  
    sh_info        = 24        ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 147       ,  /* OFFSET in .shstrtab, interpreted as [.init] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12288     ,  /* Virtual Address of this section entry */
    sh_offset      = 12288     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 23        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 142       ,  /* OFFSET in .shstrtab, interpreted as [.plt] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12320     ,  /* Virtual Address of this section entry */
    sh_offset      = 12320     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 208       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 16        ,  /* Section alignment requirement */
    sh_entsize     = 16        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 153       ,  /* OFFSET in .shstrtab, interpreted as [.plt.got] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12528     ,  /* Virtual Address of this section entry */
    sh_offset      = 12528     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 162       ,  /* OFFSET in .shstrtab, interpreted as [.text] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12544     ,  /* Virtual Address of this section entry */
    sh_offset      = 12544     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 19740     ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 16        ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 168       ,  /* OFFSET in .shstrtab, interpreted as [.fini] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 32284     ,  /* Virtual Address of this section entry */
    sh_offset      = 32284     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 9         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 174       ,  /* OFFSET in .shstrtab, interpreted as [.rodata] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 32768     ,  /* Virtual Address of this section entry */
    sh_offset      = 32768     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 11741     ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 182       ,  /* OFFSET in .shstrtab, interpreted as [.eh_frame_hdr] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 44512     ,  /* Virtual Address of this section entry */
    sh_offset      = 44512     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 276       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 196       ,  /* OFFSET in .shstrtab, interpreted as [.eh_frame] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 44792     ,  /* Virtual Address of this section entry */
    sh_offset      = 44792     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 1116      ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 206       ,  /* OFFSET in .shstrtab, interpreted as [.note.ABI-tag] */
    sh_type        = 7         ,  /* [SHT_NOTE] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 45908     ,  /* Virtual Address of this section entry */
    sh_offset      = 45908     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 32        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 220       ,  /* OFFSET in .shstrtab, interpreted as [.init_array] */
    sh_type        = 14        ,  /* [SHT_INIT_ARRAY] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 52688     ,  /* Virtual Address of this section entry */
    sh_offset      = 48592     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 232       ,  /* OFFSET in .shstrtab, interpreted as [.fini_array] */
    sh_type        = 15        ,  /* [SHT_FINI_ARRAY] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 52696     ,  /* Virtual Address of this section entry */
    sh_offset      = 48600     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 244       ,  /* OFFSET in .shstrtab, interpreted as [.dynamic] */
    sh_type        = 6         ,  /* [SHT_DYNAMIC] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 52704     ,  /* Virtual Address of this section entry */
    sh_offset      = 48608     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 480       ,  /* Size of this section (in bytes) */
    sh_link        = 6         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 16        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 157       ,  /* OFFSET in .shstrtab, interpreted as [.got] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 53184     ,  /* Virtual Address of this section entry */
    sh_offset      = 49088     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 40        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 253       ,  /* OFFSET in .shstrtab, interpreted as [.got.plt] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 53224     ,  /* Virtual Address of this section entry */
    sh_offset      = 49128     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 120       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 262       ,  /* OFFSET in .shstrtab, interpreted as [.data] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 53344     ,  /* Virtual Address of this section entry */
    sh_offset      = 49248     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 4792      ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 32        ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 268       ,  /* OFFSET in .shstrtab, interpreted as [.bss] */
    sh_type        = 8         ,  /* [SHT_NOBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 58144     ,  /* Virtual Address of this section entry */
    sh_offset      = 54040     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 48        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 32        ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 273       ,  /* OFFSET in .shstrtab, interpreted as [.comment] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 48        ,  /* BIT-MASKED value, interpreted as [SHF_MERGE], [SHF_STRINGS],  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 54040     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 31        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 1         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 1         ,  /* OFFSET in .shstrtab, interpreted as [.symtab] */
    sh_type        = 2         ,  /* [SHT_SYMTAB] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 54072     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 2352      ,  /* Size of this section (in bytes) */
    sh_link        = 29        ,  
    sh_info        = 22        ,  
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 9         ,  /* OFFSET in .shstrtab, interpreted as [.strtab] */
    sh_type        = 3         ,  /* [SHT_STRTAB] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 56424     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 1271      ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  {
    sh_name        = 17        ,  /* OFFSET in .shstrtab, interpreted as [.shstrtab] */
    sh_type        = 3         ,  /* [SHT_STRTAB] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 57695     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 282       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  
    sh_info        = 0         ,  
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
};

Elf64_Phdr phdrs = {
  /* Program Header #0 */
  {
    p_type     = 6         ,  /* [PT_PHDR] */
    p_offset   = 64        ,  /* Bytes into the file */
    p_vaddr    = 0x40      ,  /* Virtual address */
    p_paddr    = 0x40      ,  /* Physical address */
    p_filesz   = 784       ,  /* Segment size in bytes */
    p_memsz    = 784       ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 8         ,  /* Alignment requirement */
  },
  /* Program Header #1 */
  {
    p_type     = 3         ,  /* [PT_INTERP] */
    p_offset   = 916       ,  /* Bytes into the file */
    p_vaddr    = 0x394     ,  /* Virtual address */
    p_paddr    = 0x394     ,  /* Physical address */
    p_filesz   = 28        ,  /* Segment size in bytes */
    p_memsz    = 28        ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 1         ,  /* Alignment requirement */
  },
  /* Program Header #2 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 0         ,  /* Bytes into the file */
    p_vaddr    = 0x0       ,  /* Virtual address */
    p_paddr    = 0x0       ,  /* Physical address */
    p_filesz   = 10456     ,  /* Segment size in bytes */
    p_memsz    = 10456     ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #3 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 12288     ,  /* Bytes into the file */
    p_vaddr    = 0x3000    ,  /* Virtual address */
    p_paddr    = 0x3000    ,  /* Physical address */
    p_filesz   = 20005     ,  /* Segment size in bytes */
    p_memsz    = 20005     ,  /* Segment size in bytes */
    p_flags    = 5         ,  /* Memory protection flags: PF_X PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #4 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 32768     ,  /* Bytes into the file */
    p_vaddr    = 0x8000    ,  /* Virtual address */
    p_paddr    = 0x8000    ,  /* Physical address */
    p_filesz   = 13172     ,  /* Segment size in bytes */
    p_memsz    = 13172     ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #5 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 48592     ,  /* Bytes into the file */
    p_vaddr    = 0xcdd0    ,  /* Virtual address */
    p_paddr    = 0xcdd0    ,  /* Physical address */
    p_filesz   = 5448      ,  /* Segment size in bytes */
    p_memsz    = 5504      ,  /* Segment size in bytes */
    p_flags    = 6         ,  /* Memory protection flags: PF_W PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #6 */
  {
    p_type     = 2         ,  /* [PT_DYNAMIC] */
    p_offset   = 48608     ,  /* Bytes into the file */
    p_vaddr    = 0xcde0    ,  /* Virtual address */
    p_paddr    = 0xcde0    ,  /* Physical address */
    p_filesz   = 480       ,  /* Segment size in bytes */
    p_memsz    = 480       ,  /* Segment size in bytes */
    p_flags    = 6         ,  /* Memory protection flags: PF_W PF_R  */,
    p_align    = 8         ,  /* Alignment requirement */
  },
  /* Program Header #7 */
  {
    p_type     = 4         ,  /* [PT_NOTE] */
    p_offset   = 848       ,  /* Bytes into the file */
    p_vaddr    = 0x350     ,  /* Virtual address */
    p_paddr    = 0x350     ,  /* Physical address */
    p_filesz   = 32        ,  /* Segment size in bytes */
    p_memsz    = 32        ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 8         ,  /* Alignment requirement */
  },
  /* Program Header #8 */
  {
    p_type     = 4         ,  /* [PT_NOTE] */
    p_offset   = 880       ,  /* Bytes into the file */
    p_vaddr    = 0x370     ,  /* Virtual address */
    p_paddr    = 0x370     ,  /* Physical address */
    p_filesz   = 36        ,  /* Segment size in bytes */
    p_memsz    = 36        ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4         ,  /* Alignment requirement */
  },
  /* Program Header #9 */
  {
    p_type     = 4         ,  /* [PT_NOTE] */
    p_offset   = 45908     ,  /* Bytes into the file */
    p_vaddr    = 0xb354    ,  /* Virtual address */
    p_paddr    = 0xb354    ,  /* Physical address */
    p_filesz   = 32        ,  /* Segment size in bytes */
    p_memsz    = 32        ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4         ,  /* Alignment requirement */
  },
  /* Program Header #10 */
  {
    p_type     = 1685382483,  /* [PT_GNU_PROPERTY] */
    p_offset   = 848       ,  /* Bytes into the file */
    p_vaddr    = 0x350     ,  /* Virtual address */
    p_paddr    = 0x350     ,  /* Physical address */
    p_filesz   = 32        ,  /* Segment size in bytes */
    p_memsz    = 32        ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 8         ,  /* Alignment requirement */
  },
  /* Program Header #11 */
  {
    p_type     = 1685382480,  /* [PT_GNU_EH_FRAME] */
    p_offset   = 44512     ,  /* Bytes into the file */
    p_vaddr    = 0xade0    ,  /* Virtual address */
    p_paddr    = 0xade0    ,  /* Physical address */
    p_filesz   = 276       ,  /* Segment size in bytes */
    p_memsz    = 276       ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4         ,  /* Alignment requirement */
  },
  /* Program Header #12 */
  {
    p_type     = 1685382481,  /* [PT_GNU_STACK] */
    p_offset   = 0         ,  /* Bytes into the file */
    p_vaddr    = 0x0       ,  /* Virtual address */
    p_paddr    = 0x0       ,  /* Physical address */
    p_filesz   = 0         ,  /* Segment size in bytes */
    p_memsz    = 0         ,  /* Segment size in bytes */
    p_flags    = 6         ,  /* Memory protection flags: PF_W PF_R  */,
    p_align    = 16        ,  /* Alignment requirement */
  },
  /* Program Header #13 */
  {
    p_type     = 1685382482,  /* [PT_GNU_RELRO] */
    p_offset   = 48592     ,  /* Bytes into the file */
    p_vaddr    = 0xcdd0    ,  /* Virtual address */
    p_paddr    = 0xcdd0    ,  /* Physical address */
    p_filesz   = 560       ,  /* Segment size in bytes */
    p_memsz    = 560       ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 1         ,  /* Alignment requirement */
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
  '\0', 'S', 'c', 'r', 't', '1', '.', 'o', '\0', '_', '_', 'a', 'b', 'i', '_', 't', 'a', 'g', '\0', 'c', 'r', 't', 's', 't', 'u', 'f', 'f', '.', 'c', '\0', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', '_', 't', 'm', '_', 'c', 'l', 'o', 'n', 'e', 's', '\0', '_', '_', 'd', 'o', '_', 'g', 'l', 'o', 'b', 'a', 'l', '_', 'd', 't', 'o', 'r', 's', '_', 'a', 'u', 'x', '\0', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd', '.', '0', '\0', '_', '_', 'd', 'o', '_', 'g', 'l', 'o', 'b', 'a', 'l', '_', 'd', 't', 'o', 'r', 's', '_', 'a', 'u', 'x', '_', 'f', 'i', 'n', 'i', '_', 'a', 'r', 'r', 'a', 'y', '_', 'e', 'n', 't', 'r', 'y', '\0', 'f', 'r', 'a', 'm', 'e', '_', 'd', 'u', 'm', 'm', 'y', '\0', '_', '_', 'f', 'r', 'a', 'm', 'e', '_', 'd', 'u', 'm', 'm', 'y', '_', 'i', 'n', 'i', 't', '_', 'a', 'r', 'r', 'a', 'y', '_', 'e', 'n', 't', 'r', 'y', '\0', 'm', 'a', 'i', 'n', '.', 'c', '\0', 'p', 'a', 'r', 's', 'e', 'r', '.', 'c', '\0', 'd', 'u', 'm', 'p', '.', 'c', '\0', 'm', 'a', 'p', 'p', 'i', 'n', 'g', 's', '.', 'c', '\0', 'h', 'a', 'n', 'd', 'l', 'e', 'r', '.', 'c', '\0', '_', '_', 'F', 'R', 'A', 'M', 'E', '_', 'E', 'N', 'D', '_', '_', '\0', '_', 'D', 'Y', 'N', 'A', 'M', 'I', 'C', '\0', '_', '_', 'G', 'N', 'U', '_', 'E', 'H', '_', 'F', 'R', 'A', 'M', 'E', '_', 'H', 'D', 'R', '\0', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'O', 'F', 'F', 'S', 'E', 'T', '_', 'T', 'A', 'B', 'L', 'E', '_', '\0', 'd', 'u', 'm', 'p', '_', 'r', 'e', 'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 's', '\0', 'd', 'u', 'm', 'p', '_', 'd', 'y', 'n', 's', 't', 'r', '\0', 'f', 'r', 'e', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 'a', 'l', 'l', '\0', '_', '_', 'l', 'i', 'b', 'c', '_', 's', 't', 'a', 'r', 't', '_', 'm', 'a', 'i', 'n', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '3', '4', '\0', 'g', 'e', 'n', 'e', 'r', 'a', 'l', '_', 'd', 'u', 'm', 'p', '\0', 'd', 'u', 'm', 'p', '_', 't', 'a', 'r', 'g', 'e', 't', 's', '\0', '_', 'I', 'T', 'M', '_', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 's', 't', 'd', 'o', 'u', 't', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'f', 'i', 'n', 'd', '_', 't', 'a', 'g', '\0', 'p', 'u', 't', 's', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'f', 'r', 'e', 'a', 'd', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', '_', 's', 't', 'b', 'i', 'n', 'd', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'd', 'y', 'n', 's', 'y', 'm', '\0', '_', 'e', 'd', 'a', 't', 'a', '\0', 'f', 'c', 'l', 'o', 's', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', '_', 'c', 'l', 'a', 's', 's', '\0', 'd', 'u', 'm', 'p', '_', 'h', 'a', 'n', 'd', 'l', 'e', 'r', '\0', 'c', 'o', 'm', 'm', 'a', 'n', 'd', 's', '\0', 'e', 'i', '_', 'd', 'a', 't', 'a', '\0', 'v', 'e', 'r', 'i', 'f', 'y', '_', 'e', 'l', 'f', '\0', 'd', 'u', 'm', 'p', '_', 's', 't', 'r', 't', 'a', 'b', '\0', '_', 'f', 'i', 'n', 'i', '\0', 'r', 't', 'y', 'p', 'e', 's', '\0', 'd', 'u', 'm', 'p', '_', 's', 'y', 'm', 't', 'a', 'b', '\0', 'm', 'e', 'm', 's', 'e', 't', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 'h', 's', 't', 'r', 't', 'a', 'b', '\0', 'd', 'u', 'm', 'p', '_', 'r', 'e', 'l', 'a', 'd', 'y', 'n', '\0', '_', '_', 'd', 'a', 't', 'a', '_', 's', 't', 'a', 'r', 't', '\0', 's', 't', 'r', 'c', 'm', 'p', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', '_', 'd', 't', 'y', 'p', 'e', 's', '\0', 'f', 'p', 'r', 'i', 'n', 't', 'f', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', '_', 'g', 'm', 'o', 'n', '_', 's', 't', 'a', 'r', 't', '_', '_', '\0', 'd', '_', 's', 't', 't', 'y', 'p', 'e', 's', '\0', '_', '_', 'd', 's', 'o', '_', 'h', 'a', 'n', 'd', 'l', 'e', '\0', '_', 'I', 'O', '_', 's', 't', 'd', 'i', 'n', '_', 'u', 's', 'e', 'd', '\0', 'd', '_', 's', 'h', 't', 'y', 'p', 'e', 's', '\0', 'd', '_', 'e', 'h', 't', 'y', 'p', 'e', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'p', 'h', 'd', 'r', 's', '\0', 'd', '_', 'e', 'h', 'm', 'a', 'c', 'h', 'i', 'n', 'e', 's', '\0', 'm', 'a', 'l', 'l', 'o', 'c', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 'h', 'd', 'r', 's', '\0', 's', 'h', 'o', 'w', '_', 'h', 'a', 'n', 'd', 'l', 'e', 'r', '\0', '_', 'e', 'n', 'd', '\0', 'd', '_', 's', 'h', 'f', 'l', 'a', 'g', 's', '\0', 'f', 's', 'e', 'e', 'k', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 'd', 'y', 'n', 's', 'y', 'm', '\0', 'p', 'a', 'r', 's', 'e', '_', 'd', 'y', 'n', 'a', 'm', 'i', 'c', '\0', '_', '_', 'b', 's', 's', '_', 's', 't', 'a', 'r', 't', '\0', 'm', 'a', 'i', 'n', '\0', 'd', '_', 's', 't', 'v', 'i', 's', 'i', 'b', 'l', 'e', '\0', 'u', 's', 'a', 'g', 'e', '\0', 'd', '_', 'p', 'h', 't', 'y', 'p', 'e', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'd', 'y', 'n', 's', 't', 'r', '\0', 'd', 'u', 'm', 'p', '_', 'd', 'y', 'n', 'a', 'm', 'i', 'c', '\0', 'f', 'o', 'p', 'e', 'n', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 'p', 'h', 'd', 'r', 's', '\0', 'd', '_', 'p', 'h', 'f', 'l', 'a', 'g', 's', '\0', 'f', 'w', 'r', 'i', 't', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', '_', 'T', 'M', 'C', '_', 'E', 'N', 'D', '_', '_', '\0', 'd', 'u', 'm', 'p', '_', 's', 'h', 's', 't', 'r', 't', 'a', 'b', '\0', '_', 'I', 'T', 'M', '_', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 't', 'r', 't', 'a', 'b', '\0', 'p', 'a', 'r', 's', 'e', '_', 's', 'y', 'm', 't', 'a', 'b', '\0', 'd', 'u', 'm', 'p', '_', 'e', 'h', 'd', 'r', '\0', 's', 't', 'r', 'd', 'u', 'p', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'p', 'a', 'r', 's', 'e', '_', 'r', 'e', 'l', 'o', 'c', 'a', 't', 'i', 'o', 'n', 's', '\0', '_', '_', 'c', 'x', 'a', '_', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'e', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', 'i', 'n', 'i', 't', '\0', 'i', 'd', 'e', 'n', 't', 'v', 'a', 'l', 's', '\0', 'p', 'a', 'r', 's', 'e', '_', 'e', 'h', 'd', 'r', '\0', 'd', 'u', 'm', 'p', '_', 'r', 'e', 'l', 'a', 'p', 'l', 't', '\0', 's', 't', 'd', 'e', 'r', 'r', '@', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', 'd', 'u', 'm', 'p', '_', 's', 'h', 'd', 'r', 's', '\0', 
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
  "handler.c",
  "__FRAME_END__",
  "_DYNAMIC",
  "__GNU_EH_FRAME_HDR",
  "_GLOBAL_OFFSET_TABLE_",
  "dump_relocations",
  "dump_dynstr",
  "free@GLIBC_2.2.5",
  "dump_all",
  "__libc_start_main@GLIBC_2.34",
  "general_dump",
  "dump_targets",
  "_ITM_deregisterTMCloneTable",
  "stdout@GLIBC_2.2.5",
  "find_tag",
  "puts@GLIBC_2.2.5",
  "fread@GLIBC_2.2.5",
  "d_stbinds",
  "parse_dynsym",
  "_edata",
  "fclose@GLIBC_2.2.5",
  "d_class",
  "dump_handler",
  "commands",
  "ei_data",
  "verify_elf",
  "dump_strtab",
  "_fini",
  "rtypes",
  "dump_symtab",
  "memset@GLIBC_2.2.5",
  "parse_shstrtab",
  "dump_reladyn",
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
  "show_handler",
  "_end",
  "d_shflags",
  "fseek@GLIBC_2.2.5",
  "dump_dynsym",
  "parse_dynamic",
  "__bss_start",
  "main",
  "d_stvisible",
  "usage",
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
  "identvals",
  "parse_ehdr",
  "dump_relaplt",
  "stderr@GLIBC_2.2.5",
  "dump_shdrs",
};

Elf64_Sym symtab = {
  /* ENTRY #0 */
  {
    st_name      = 0         ,  /* OFFSET in .strtab, interpreted as [] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #1 */
  {
    st_name      = 1         ,  /* OFFSET in .strtab, interpreted as [Scrt1.o] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #2 */
  {
    st_name      = 9         ,  /* OFFSET in .strtab, interpreted as [__abi_tag] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 19        ,  /* Section (Idx) the symbol is present in */
    st_value     = 45908     ,  /* Symbol value */
    st_size      = 32        ,  /* Symbol size */
  },
  /* ENTRY #3 */
  {
    st_name      = 19        ,  /* OFFSET in .strtab, interpreted as [crtstuff.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #4 */
  {
    st_name      = 30        ,  /* OFFSET in .strtab, interpreted as [deregister_tm_clones] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12592     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #5 */
  {
    st_name      = 32        ,  /* OFFSET in .strtab, interpreted as [register_tm_clones] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12640     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #6 */
  {
    st_name      = 51        ,  /* OFFSET in .strtab, interpreted as [__do_global_dtors_aux] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12704     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #7 */
  {
    st_name      = 73        ,  /* OFFSET in .strtab, interpreted as [completed.0] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58184     ,  /* Symbol value */
    st_size      = 1         ,  /* Symbol size */
  },
  /* ENTRY #8 */
  {
    st_name      = 85        ,  /* OFFSET in .strtab, interpreted as [__do_global_dtors_aux_fini_array_entry] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 21        ,  /* Section (Idx) the symbol is present in */
    st_value     = 52696     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #9 */
  {
    st_name      = 124       ,  /* OFFSET in .strtab, interpreted as [frame_dummy] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12768     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #10 */
  {
    st_name      = 136       ,  /* OFFSET in .strtab, interpreted as [__frame_dummy_init_array_entry] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 20        ,  /* Section (Idx) the symbol is present in */
    st_value     = 52688     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #11 */
  {
    st_name      = 167       ,  /* OFFSET in .strtab, interpreted as [main.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #12 */
  {
    st_name      = 174       ,  /* OFFSET in .strtab, interpreted as [parser.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #13 */
  {
    st_name      = 183       ,  /* OFFSET in .strtab, interpreted as [dump.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #14 */
  {
    st_name      = 190       ,  /* OFFSET in .strtab, interpreted as [mappings.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #15 */
  {
    st_name      = 201       ,  /* OFFSET in .strtab, interpreted as [handler.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #16 */
  {
    st_name      = 19        ,  /* OFFSET in .strtab, interpreted as [crtstuff.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #17 */
  {
    st_name      = 211       ,  /* OFFSET in .strtab, interpreted as [__FRAME_END__] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 18        ,  /* Section (Idx) the symbol is present in */
    st_value     = 45904     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #18 */
  {
    st_name      = 0         ,  /* OFFSET in .strtab, interpreted as [] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #19 */
  {
    st_name      = 225       ,  /* OFFSET in .strtab, interpreted as [_DYNAMIC] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 22        ,  /* Section (Idx) the symbol is present in */
    st_value     = 52704     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #20 */
  {
    st_name      = 234       ,  /* OFFSET in .strtab, interpreted as [__GNU_EH_FRAME_HDR] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 17        ,  /* Section (Idx) the symbol is present in */
    st_value     = 44512     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #21 */
  {
    st_name      = 253       ,  /* OFFSET in .strtab, interpreted as [_GLOBAL_OFFSET_TABLE_] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 24        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53224     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #22 */
  {
    st_name      = 275       ,  /* OFFSET in .strtab, interpreted as [dump_relocations] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 28708     ,  /* Symbol value */
    st_size      = 1614      ,  /* Symbol size */
  },
  /* ENTRY #23 */
  {
    st_name      = 292       ,  /* OFFSET in .strtab, interpreted as [dump_dynstr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 30322     ,  /* Symbol value */
    st_size      = 530       ,  /* Symbol size */
  },
  /* ENTRY #24 */
  {
    st_name      = 304       ,  /* OFFSET in .strtab, interpreted as [free@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #25 */
  {
    st_name      = 321       ,  /* OFFSET in .strtab, interpreted as [dump_all] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 31415     ,  /* Symbol value */
    st_size      = 580       ,  /* Symbol size */
  },
  /* ENTRY #26 */
  {
    st_name      = 330       ,  /* OFFSET in .strtab, interpreted as [__libc_start_main@GLIBC_2.34] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #27 */
  {
    st_name      = 359       ,  /* OFFSET in .strtab, interpreted as [general_dump] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 20745     ,  /* Symbol value */
    st_size      = 175       ,  /* Symbol size */
  },
  /* ENTRY #28 */
  {
    st_name      = 372       ,  /* OFFSET in .strtab, interpreted as [dump_targets] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 57824     ,  /* Symbol value */
    st_size      = 312       ,  /* Symbol size */
  },
  /* ENTRY #29 */
  {
    st_name      = 385       ,  /* OFFSET in .strtab, interpreted as [_ITM_deregisterTMCloneTable] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #30 */
  {
    st_name      = 413       ,  /* OFFSET in .strtab, interpreted as [stdout@GLIBC_2.2.5] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58144     ,  /* Symbol value */
    st_size      = 8         ,  /* Symbol size */
  },
  /* ENTRY #31 */
  {
    st_name      = 660       ,  /* OFFSET in .strtab, interpreted as [data_start] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53344     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #32 */
  {
    st_name      = 432       ,  /* OFFSET in .strtab, interpreted as [find_tag] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 32025     ,  /* Symbol value */
    st_size      = 65        ,  /* Symbol size */
  },
  /* ENTRY #33 */
  {
    st_name      = 441       ,  /* OFFSET in .strtab, interpreted as [puts@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #34 */
  {
    st_name      = 458       ,  /* OFFSET in .strtab, interpreted as [fread@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #35 */
  {
    st_name      = 476       ,  /* OFFSET in .strtab, interpreted as [d_stbinds] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 55296     ,  /* Symbol value */
    st_size      = 96        ,  /* Symbol size */
  },
  /* ENTRY #36 */
  {
    st_name      = 486       ,  /* OFFSET in .strtab, interpreted as [parse_dynsym] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 17131     ,  /* Symbol value */
    st_size      = 638       ,  /* Symbol size */
  },
  /* ENTRY #37 */
  {
    st_name      = 499       ,  /* OFFSET in .strtab, interpreted as [_edata] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58136     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #38 */
  {
    st_name      = 506       ,  /* OFFSET in .strtab, interpreted as [fclose@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #39 */
  {
    st_name      = 525       ,  /* OFFSET in .strtab, interpreted as [d_class] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53600     ,  /* Symbol value */
    st_size      = 48        ,  /* Symbol size */
  },
  /* ENTRY #40 */
  {
    st_name      = 533       ,  /* OFFSET in .strtab, interpreted as [dump_handler] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 32090     ,  /* Symbol value */
    st_size      = 171       ,  /* Symbol size */
  },
  /* ENTRY #41 */
  {
    st_name      = 546       ,  /* OFFSET in .strtab, interpreted as [commands] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 57728     ,  /* Symbol value */
    st_size      = 72        ,  /* Symbol size */
  },
  /* ENTRY #42 */
  {
    st_name      = 555       ,  /* OFFSET in .strtab, interpreted as [ei_data] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53664     ,  /* Symbol value */
    st_size      = 48        ,  /* Symbol size */
  },
  /* ENTRY #43 */
  {
    st_name      = 563       ,  /* OFFSET in .strtab, interpreted as [verify_elf] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 13559     ,  /* Symbol value */
    st_size      = 220       ,  /* Symbol size */
  },
  /* ENTRY #44 */
  {
    st_name      = 574       ,  /* OFFSET in .strtab, interpreted as [dump_strtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 25653     ,  /* Symbol value */
    st_size      = 511       ,  /* Symbol size */
  },
  /* ENTRY #45 */
  {
    st_name      = 586       ,  /* OFFSET in .strtab, interpreted as [_fini] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 15        ,  /* Section (Idx) the symbol is present in */
    st_value     = 32284     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #46 */
  {
    st_name      = 592       ,  /* OFFSET in .strtab, interpreted as [rtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 55456     ,  /* Symbol value */
    st_size      = 672       ,  /* Symbol size */
  },
  /* ENTRY #47 */
  {
    st_name      = 599       ,  /* OFFSET in .strtab, interpreted as [dump_symtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 26164     ,  /* Symbol value */
    st_size      = 1272      ,  /* Symbol size */
  },
  /* ENTRY #48 */
  {
    st_name      = 611       ,  /* OFFSET in .strtab, interpreted as [memset@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #49 */
  {
    st_name      = 630       ,  /* OFFSET in .strtab, interpreted as [parse_shstrtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 14718     ,  /* Symbol value */
    st_size      = 653       ,  /* Symbol size */
  },
  /* ENTRY #50 */
  {
    st_name      = 645       ,  /* OFFSET in .strtab, interpreted as [dump_reladyn] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 31995     ,  /* Symbol value */
    st_size      = 15        ,  /* Symbol size */
  },
  /* ENTRY #51 */
  {
    st_name      = 658       ,  /* OFFSET in .strtab, interpreted as [__data_start] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53344     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #52 */
  {
    st_name      = 671       ,  /* OFFSET in .strtab, interpreted as [strcmp@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #53 */
  {
    st_name      = 690       ,  /* OFFSET in .strtab, interpreted as [d_dtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 56128     ,  /* Symbol value */
    st_size      = 1600      ,  /* Symbol size */
  },
  /* ENTRY #54 */
  {
    st_name      = 699       ,  /* OFFSET in .strtab, interpreted as [fprintf@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #55 */
  {
    st_name      = 719       ,  /* OFFSET in .strtab, interpreted as [__gmon_start__] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #56 */
  {
    st_name      = 734       ,  /* OFFSET in .strtab, interpreted as [d_sttypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 55136     ,  /* Symbol value */
    st_size      = 144       ,  /* Symbol size */
  },
  /* ENTRY #57 */
  {
    st_name      = 744       ,  /* OFFSET in .strtab, interpreted as [__dso_handle] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53352     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #58 */
  {
    st_name      = 757       ,  /* OFFSET in .strtab, interpreted as [_IO_stdin_used] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 16        ,  /* Section (Idx) the symbol is present in */
    st_value     = 32768     ,  /* Symbol value */
    st_size      = 4         ,  /* Symbol size */
  },
  /* ENTRY #59 */
  {
    st_name      = 772       ,  /* OFFSET in .strtab, interpreted as [d_shtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 54304     ,  /* Symbol value */
    st_size      = 576       ,  /* Symbol size */
  },
  /* ENTRY #60 */
  {
    st_name      = 782       ,  /* OFFSET in .strtab, interpreted as [d_ehtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53472     ,  /* Symbol value */
    st_size      = 128       ,  /* Symbol size */
  },
  /* ENTRY #61 */
  {
    st_name      = 792       ,  /* OFFSET in .strtab, interpreted as [parse_phdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 14012     ,  /* Symbol value */
    st_size      = 358       ,  /* Symbol size */
  },
  /* ENTRY #62 */
  {
    st_name      = 804       ,  /* OFFSET in .strtab, interpreted as [d_ehmachines] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53728     ,  /* Symbol value */
    st_size      = 160       ,  /* Symbol size */
  },
  /* ENTRY #63 */
  {
    st_name      = 817       ,  /* OFFSET in .strtab, interpreted as [malloc@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #64 */
  {
    st_name      = 836       ,  /* OFFSET in .strtab, interpreted as [parse_shdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 14370     ,  /* Symbol value */
    st_size      = 348       ,  /* Symbol size */
  },
  /* ENTRY #65 */
  {
    st_name      = 848       ,  /* OFFSET in .strtab, interpreted as [show_handler] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 32261     ,  /* Symbol value */
    st_size      = 23        ,  /* Symbol size */
  },
  /* ENTRY #66 */
  {
    st_name      = 861       ,  /* OFFSET in .strtab, interpreted as [_end] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58192     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #67 */
  {
    st_name      = 866       ,  /* OFFSET in .strtab, interpreted as [d_shflags] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 54880     ,  /* Symbol value */
    st_size      = 256       ,  /* Symbol size */
  },
  /* ENTRY #68 */
  {
    st_name      = 664       ,  /* OFFSET in .strtab, interpreted as [_start] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12544     ,  /* Symbol value */
    st_size      = 34        ,  /* Symbol size */
  },
  /* ENTRY #69 */
  {
    st_name      = 876       ,  /* OFFSET in .strtab, interpreted as [fseek@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #70 */
  {
    st_name      = 894       ,  /* OFFSET in .strtab, interpreted as [dump_dynsym] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 27436     ,  /* Symbol value */
    st_size      = 1272      ,  /* Symbol size */
  },
  /* ENTRY #71 */
  {
    st_name      = 906       ,  /* OFFSET in .strtab, interpreted as [parse_dynamic] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 20096     ,  /* Symbol value */
    st_size      = 649       ,  /* Symbol size */
  },
  /* ENTRY #72 */
  {
    st_name      = 920       ,  /* OFFSET in .strtab, interpreted as [__bss_start] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58144     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #73 */
  {
    st_name      = 932       ,  /* OFFSET in .strtab, interpreted as [main] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12934     ,  /* Symbol value */
    st_size      = 625       ,  /* Symbol size */
  },
  /* ENTRY #74 */
  {
    st_name      = 937       ,  /* OFFSET in .strtab, interpreted as [d_stvisible] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 55392     ,  /* Symbol value */
    st_size      = 64        ,  /* Symbol size */
  },
  /* ENTRY #75 */
  {
    st_name      = 949       ,  /* OFFSET in .strtab, interpreted as [usage] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12777     ,  /* Symbol value */
    st_size      = 157       ,  /* Symbol size */
  },
  /* ENTRY #76 */
  {
    st_name      = 955       ,  /* OFFSET in .strtab, interpreted as [d_phtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53888     ,  /* Symbol value */
    st_size      = 352       ,  /* Symbol size */
  },
  /* ENTRY #77 */
  {
    st_name      = 965       ,  /* OFFSET in .strtab, interpreted as [parse_dynstr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 18919     ,  /* Symbol value */
    st_size      = 1177      ,  /* Symbol size */
  },
  /* ENTRY #78 */
  {
    st_name      = 978       ,  /* OFFSET in .strtab, interpreted as [dump_dynamic] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 30852     ,  /* Symbol value */
    st_size      = 563       ,  /* Symbol size */
  },
  /* ENTRY #79 */
  {
    st_name      = 991       ,  /* OFFSET in .strtab, interpreted as [fopen@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #80 */
  {
    st_name      = 1009      ,  /* OFFSET in .strtab, interpreted as [dump_phdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 22592     ,  /* Symbol value */
    st_size      = 1289      ,  /* Symbol size */
  },
  /* ENTRY #81 */
  {
    st_name      = 1020      ,  /* OFFSET in .strtab, interpreted as [d_phflags] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 54240     ,  /* Symbol value */
    st_size      = 48        ,  /* Symbol size */
  },
  /* ENTRY #82 */
  {
    st_name      = 1030      ,  /* OFFSET in .strtab, interpreted as [fwrite@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #83 */
  {
    st_name      = 1049      ,  /* OFFSET in .strtab, interpreted as [__TMC_END__] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58136     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #84 */
  {
    st_name      = 1061      ,  /* OFFSET in .strtab, interpreted as [dump_shstrtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 25142     ,  /* Symbol value */
    st_size      = 511       ,  /* Symbol size */
  },
  /* ENTRY #85 */
  {
    st_name      = 1075      ,  /* OFFSET in .strtab, interpreted as [_ITM_registerTMCloneTable] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #86 */
  {
    st_name      = 1101      ,  /* OFFSET in .strtab, interpreted as [parse_strtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 15371     ,  /* Symbol value */
    st_size      = 1122      ,  /* Symbol size */
  },
  /* ENTRY #87 */
  {
    st_name      = 1114      ,  /* OFFSET in .strtab, interpreted as [parse_symtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 16493     ,  /* Symbol value */
    st_size      = 638       ,  /* Symbol size */
  },
  /* ENTRY #88 */
  {
    st_name      = 1127      ,  /* OFFSET in .strtab, interpreted as [dump_ehdr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 20920     ,  /* Symbol value */
    st_size      = 1672      ,  /* Symbol size */
  },
  /* ENTRY #89 */
  {
    st_name      = 1137      ,  /* OFFSET in .strtab, interpreted as [strdup@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #90 */
  {
    st_name      = 1156      ,  /* OFFSET in .strtab, interpreted as [parse_relocations] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 17769     ,  /* Symbol value */
    st_size      = 1150      ,  /* Symbol size */
  },
  /* ENTRY #91 */
  {
    st_name      = 1174      ,  /* OFFSET in .strtab, interpreted as [__cxa_finalize@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #92 */
  {
    st_name      = 1201      ,  /* OFFSET in .strtab, interpreted as [_init] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 11        ,  /* Section (Idx) the symbol is present in */
    st_value     = 12288     ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #93 */
  {
    st_name      = 1207      ,  /* OFFSET in .strtab, interpreted as [identvals] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in */
    st_value     = 53376     ,  /* Symbol value */
    st_size      = 72        ,  /* Symbol size */
  },
  /* ENTRY #94 */
  {
    st_name      = 1217      ,  /* OFFSET in .strtab, interpreted as [parse_ehdr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 13779     ,  /* Symbol value */
    st_size      = 233       ,  /* Symbol size */
  },
  /* ENTRY #95 */
  {
    st_name      = 1228      ,  /* OFFSET in .strtab, interpreted as [dump_relaplt] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 32010     ,  /* Symbol value */
    st_size      = 15        ,  /* Symbol size */
  },
  /* ENTRY #96 */
  {
    st_name      = 1241      ,  /* OFFSET in .strtab, interpreted as [stderr@GLIBC_2.2.5] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58176     ,  /* Symbol value */
    st_size      = 8         ,  /* Symbol size */
  },
  /* ENTRY #97 */
  {
    st_name      = 1260      ,  /* OFFSET in .strtab, interpreted as [dump_shdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in */
    st_value     = 23881     ,  /* Symbol value */
    st_size      = 1261      ,  /* Symbol size */
  },
};

Elf64_Sym dynsym = {
  /* ENTRY #0 */
  {
    st_name      = 0         ,  /* OFFSET in .strtab, interpreted as [] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #1 */
  {
    st_name      = 6         ,  /* OFFSET in .strtab, interpreted as [.o] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #2 */
  {
    st_name      = 44        ,  /* OFFSET in .strtab, interpreted as [clones] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #3 */
  {
    st_name      = 159       ,  /* OFFSET in .strtab, interpreted as [y_entry] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #4 */
  {
    st_name      = 1         ,  /* OFFSET in .strtab, interpreted as [Scrt1.o] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #5 */
  {
    st_name      = 11        ,  /* OFFSET in .strtab, interpreted as [abi_tag] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #6 */
  {
    st_name      = 92        ,  /* OFFSET in .strtab, interpreted as [obal_dtors_aux_fini_array_entry] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #7 */
  {
    st_name      = 99        ,  /* OFFSET in .strtab, interpreted as [ors_aux_fini_array_entry] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #8 */
  {
    st_name      = 113       ,  /* OFFSET in .strtab, interpreted as [rray_entry] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #9 */
  {
    st_name      = 69        ,  /* OFFSET in .strtab, interpreted as [aux] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #10 */
  {
    st_name      = 187       ,  /* OFFSET in .strtab, interpreted as [.c] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #11 */
  {
    st_name      = 37        ,  /* OFFSET in .strtab, interpreted as [ter_tm_clones] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #12 */
  {
    st_name      = 120       ,  /* OFFSET in .strtab, interpreted as [try] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #13 */
  {
    st_name      = 24        ,  /* OFFSET in .strtab, interpreted as [uff.c] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #14 */
  {
    st_name      = 106       ,  /* OFFSET in .strtab, interpreted as [_fini_array_entry] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #15 */
  {
    st_name      = 202       ,  /* OFFSET in .strtab, interpreted as [andler.c] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #16 */
  {
    st_name      = 17        ,  /* OFFSET in .strtab, interpreted as [g] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #17 */
  {
    st_name      = 30        ,  /* OFFSET in .strtab, interpreted as [deregister_tm_clones] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58144     ,  /* Symbol value */
    st_size      = 8         ,  /* Symbol size */
  },
  /* ENTRY #18 */
  {
    st_name      = 77        ,  /* OFFSET in .strtab, interpreted as [leted.0] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* Section (Idx) the symbol is present in */
    st_value     = 0         ,  /* Symbol value */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #19 */
  {
    st_name      = 62        ,  /* OFFSET in .strtab, interpreted as [_dtors_aux] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in */
    st_value     = 58176     ,  /* Symbol value */
    st_size      = 8         ,  /* Symbol size */
  },
};

Elf64_Rela rela_dyn = {
  /* Entry #0 && Symbol: [] */
  {
    r_offset     = 52688     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 12768     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #1 && Symbol: [] */
  {
    r_offset     = 52696     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 12704     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #2 && Symbol: [] */
  {
    r_offset     = 53352     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 53352     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #3 && Symbol: [] */
  {
    r_offset     = 53376     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36544     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #4 && Symbol: [] */
  {
    r_offset     = 53384     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36552     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #5 && Symbol: [] */
  {
    r_offset     = 53392     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36560     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #6 && Symbol: [] */
  {
    r_offset     = 53400     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36568     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #7 && Symbol: [] */
  {
    r_offset     = 53408     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36576     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #8 && Symbol: [] */
  {
    r_offset     = 53416     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36585     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #9 && Symbol: [] */
  {
    r_offset     = 53424     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36593     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #10 && Symbol: [] */
  {
    r_offset     = 53432     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36604     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #11 && Symbol: [] */
  {
    r_offset     = 53440     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 36611     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #12 && Symbol: [] */
  {
    r_offset     = 53480     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40400     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #13 && Symbol: [] */
  {
    r_offset     = 53496     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40408     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #14 && Symbol: [] */
  {
    r_offset     = 53512     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40415     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #15 && Symbol: [] */
  {
    r_offset     = 53528     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40423     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #16 && Symbol: [] */
  {
    r_offset     = 53544     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40430     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #17 && Symbol: [] */
  {
    r_offset     = 53560     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40438     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #18 && Symbol: [] */
  {
    r_offset     = 53576     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40445     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #19 && Symbol: [] */
  {
    r_offset     = 53592     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40455     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #20 && Symbol: [] */
  {
    r_offset     = 53608     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40465     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #21 && Symbol: [] */
  {
    r_offset     = 53624     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40478     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #22 && Symbol: [] */
  {
    r_offset     = 53640     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40489     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #23 && Symbol: [] */
  {
    r_offset     = 53672     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40500     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #24 && Symbol: [] */
  {
    r_offset     = 53688     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40512     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #25 && Symbol: [] */
  {
    r_offset     = 53704     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40524     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #26 && Symbol: [] */
  {
    r_offset     = 53736     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40400     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #27 && Symbol: [] */
  {
    r_offset     = 53752     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40536     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #28 && Symbol: [] */
  {
    r_offset     = 53768     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40543     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #29 && Symbol: [] */
  {
    r_offset     = 53784     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40552     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #30 && Symbol: [] */
  {
    r_offset     = 53800     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40559     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #31 && Symbol: [] */
  {
    r_offset     = 53816     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40566     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #32 && Symbol: [] */
  {
    r_offset     = 53832     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40573     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #33 && Symbol: [] */
  {
    r_offset     = 53848     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40580     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #34 && Symbol: [] */
  {
    r_offset     = 53864     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40590     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #35 && Symbol: [] */
  {
    r_offset     = 53880     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40601     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #36 && Symbol: [] */
  {
    r_offset     = 53896     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40610     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #37 && Symbol: [] */
  {
    r_offset     = 53912     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40618     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #38 && Symbol: [] */
  {
    r_offset     = 53928     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40626     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #39 && Symbol: [] */
  {
    r_offset     = 53944     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40637     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #40 && Symbol: [] */
  {
    r_offset     = 53960     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40647     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #41 && Symbol: [] */
  {
    r_offset     = 53976     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40655     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #42 && Symbol: [] */
  {
    r_offset     = 53992     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40664     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #43 && Symbol: [] */
  {
    r_offset     = 54008     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40672     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #44 && Symbol: [] */
  {
    r_offset     = 54024     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40679     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #45 && Symbol: [] */
  {
    r_offset     = 54040     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40686     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #46 && Symbol: [] */
  {
    r_offset     = 54056     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40694     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #47 && Symbol: [] */
  {
    r_offset     = 54072     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40710     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #48 && Symbol: [] */
  {
    r_offset     = 54088     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40723     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #49 && Symbol: [] */
  {
    r_offset     = 54104     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40736     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #50 && Symbol: [] */
  {
    r_offset     = 54120     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40752     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #51 && Symbol: [] */
  {
    r_offset     = 54136     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40766     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #52 && Symbol: [] */
  {
    r_offset     = 54152     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40776     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #53 && Symbol: [] */
  {
    r_offset     = 54168     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40787     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #54 && Symbol: [] */
  {
    r_offset     = 54184     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40800     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #55 && Symbol: [] */
  {
    r_offset     = 54200     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40810     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #56 && Symbol: [] */
  {
    r_offset     = 54216     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40818     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #57 && Symbol: [] */
  {
    r_offset     = 54232     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40828     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #58 && Symbol: [] */
  {
    r_offset     = 54248     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40838     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #59 && Symbol: [] */
  {
    r_offset     = 54264     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40844     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #60 && Symbol: [] */
  {
    r_offset     = 54280     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40850     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #61 && Symbol: [] */
  {
    r_offset     = 54312     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40856     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #62 && Symbol: [] */
  {
    r_offset     = 54328     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40865     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #63 && Symbol: [] */
  {
    r_offset     = 54344     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40878     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #64 && Symbol: [] */
  {
    r_offset     = 54360     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40889     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #65 && Symbol: [] */
  {
    r_offset     = 54376     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40900     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #66 && Symbol: [] */
  {
    r_offset     = 54392     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40909     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #67 && Symbol: [] */
  {
    r_offset     = 54408     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40918     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #68 && Symbol: [] */
  {
    r_offset     = 54424     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40930     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #69 && Symbol: [] */
  {
    r_offset     = 54440     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40939     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #70 && Symbol: [] */
  {
    r_offset     = 54456     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40950     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #71 && Symbol: [] */
  {
    r_offset     = 54472     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40958     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #72 && Symbol: [] */
  {
    r_offset     = 54488     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40968     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #73 && Symbol: [] */
  {
    r_offset     = 54504     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40979     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #74 && Symbol: [] */
  {
    r_offset     = 54520     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40994     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #75 && Symbol: [] */
  {
    r_offset     = 54536     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41009     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #76 && Symbol: [] */
  {
    r_offset     = 54552     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41027     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #77 && Symbol: [] */
  {
    r_offset     = 54568     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41037     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #78 && Symbol: [] */
  {
    r_offset     = 54584     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41054     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #79 && Symbol: [] */
  {
    r_offset     = 54600     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41063     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #80 && Symbol: [] */
  {
    r_offset     = 54616     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41072     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #81 && Symbol: [] */
  {
    r_offset     = 54632     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41091     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #82 && Symbol: [] */
  {
    r_offset     = 54648     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41104     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #83 && Symbol: [] */
  {
    r_offset     = 54664     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41120     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #84 && Symbol: [] */
  {
    r_offset     = 54680     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41133     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #85 && Symbol: [] */
  {
    r_offset     = 54696     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41144     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #86 && Symbol: [] */
  {
    r_offset     = 54712     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41158     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #87 && Symbol: [] */
  {
    r_offset     = 54728     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41174     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #88 && Symbol: [] */
  {
    r_offset     = 54744     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41191     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #89 && Symbol: [] */
  {
    r_offset     = 54760     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41206     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #90 && Symbol: [] */
  {
    r_offset     = 54776     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41222     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #91 && Symbol: [] */
  {
    r_offset     = 54792     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41237     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #92 && Symbol: [] */
  {
    r_offset     = 54808     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41248     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #93 && Symbol: [] */
  {
    r_offset     = 54824     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41257     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #94 && Symbol: [] */
  {
    r_offset     = 54840     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41268     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #95 && Symbol: [] */
  {
    r_offset     = 54856     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41279     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #96 && Symbol: [] */
  {
    r_offset     = 54872     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41290     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #97 && Symbol: [] */
  {
    r_offset     = 54888     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41301     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #98 && Symbol: [] */
  {
    r_offset     = 54904     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41311     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #99 && Symbol: [] */
  {
    r_offset     = 54920     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41321     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #100 && Symbol: [] */
  {
    r_offset     = 54936     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41335     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #101 && Symbol: [] */
  {
    r_offset     = 54952     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41345     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #102 && Symbol: [] */
  {
    r_offset     = 54968     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41357     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #103 && Symbol: [] */
  {
    r_offset     = 54984     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41371     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #104 && Symbol: [] */
  {
    r_offset     = 55000     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41386     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #105 && Symbol: [] */
  {
    r_offset     = 55016     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41407     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #106 && Symbol: [] */
  {
    r_offset     = 55032     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41417     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #107 && Symbol: [] */
  {
    r_offset     = 55048     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41425     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #108 && Symbol: [] */
  {
    r_offset     = 55064     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41440     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #109 && Symbol: [] */
  {
    r_offset     = 55080     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41451     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #110 && Symbol: [] */
  {
    r_offset     = 55096     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41464     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #111 && Symbol: [] */
  {
    r_offset     = 55112     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41479     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #112 && Symbol: [] */
  {
    r_offset     = 55128     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41491     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #113 && Symbol: [] */
  {
    r_offset     = 55144     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41503     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #114 && Symbol: [] */
  {
    r_offset     = 55160     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41514     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #115 && Symbol: [] */
  {
    r_offset     = 55176     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41525     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #116 && Symbol: [] */
  {
    r_offset     = 55192     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41534     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #117 && Symbol: [] */
  {
    r_offset     = 55208     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41546     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #118 && Symbol: [] */
  {
    r_offset     = 55224     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41555     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #119 && Symbol: [] */
  {
    r_offset     = 55240     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41566     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #120 && Symbol: [] */
  {
    r_offset     = 55256     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41574     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #121 && Symbol: [] */
  {
    r_offset     = 55272     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41581     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #122 && Symbol: [] */
  {
    r_offset     = 55304     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41588     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #123 && Symbol: [] */
  {
    r_offset     = 55320     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41598     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #124 && Symbol: [] */
  {
    r_offset     = 55336     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41609     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #125 && Symbol: [] */
  {
    r_offset     = 55352     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41618     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #126 && Symbol: [] */
  {
    r_offset     = 55368     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41574     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #127 && Symbol: [] */
  {
    r_offset     = 55384     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41581     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #128 && Symbol: [] */
  {
    r_offset     = 55400     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41633     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #129 && Symbol: [] */
  {
    r_offset     = 55416     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41645     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #130 && Symbol: [] */
  {
    r_offset     = 55432     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41658     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #131 && Symbol: [] */
  {
    r_offset     = 55448     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41669     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #132 && Symbol: [] */
  {
    r_offset     = 55464     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41683     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #133 && Symbol: [] */
  {
    r_offset     = 55480     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41697     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #134 && Symbol: [] */
  {
    r_offset     = 55496     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41709     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #135 && Symbol: [] */
  {
    r_offset     = 55512     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41723     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #136 && Symbol: [] */
  {
    r_offset     = 55528     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41738     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #137 && Symbol: [] */
  {
    r_offset     = 55544     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41753     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #138 && Symbol: [] */
  {
    r_offset     = 55560     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41767     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #139 && Symbol: [] */
  {
    r_offset     = 55576     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41785     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #140 && Symbol: [] */
  {
    r_offset     = 55592     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41804     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #141 && Symbol: [] */
  {
    r_offset     = 55608     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41822     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #142 && Symbol: [] */
  {
    r_offset     = 55624     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41840     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #143 && Symbol: [] */
  {
    r_offset     = 55640     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41852     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #144 && Symbol: [] */
  {
    r_offset     = 55656     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41865     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #145 && Symbol: [] */
  {
    r_offset     = 55672     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41877     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #146 && Symbol: [] */
  {
    r_offset     = 55688     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41891     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #147 && Symbol: [] */
  {
    r_offset     = 55704     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41902     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #148 && Symbol: [] */
  {
    r_offset     = 55720     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41915     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #149 && Symbol: [] */
  {
    r_offset     = 55736     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41933     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #150 && Symbol: [] */
  {
    r_offset     = 55752     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41951     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #151 && Symbol: [] */
  {
    r_offset     = 55768     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41968     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #152 && Symbol: [] */
  {
    r_offset     = 55784     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41983     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #153 && Symbol: [] */
  {
    r_offset     = 55800     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41998     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #154 && Symbol: [] */
  {
    r_offset     = 55816     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42016     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #155 && Symbol: [] */
  {
    r_offset     = 55832     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42034     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #156 && Symbol: [] */
  {
    r_offset     = 55848     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42051     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #157 && Symbol: [] */
  {
    r_offset     = 55864     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42065     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #158 && Symbol: [] */
  {
    r_offset     = 55880     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42083     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #159 && Symbol: [] */
  {
    r_offset     = 55896     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42100     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #160 && Symbol: [] */
  {
    r_offset     = 55912     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42115     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #161 && Symbol: [] */
  {
    r_offset     = 55928     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42135     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #162 && Symbol: [] */
  {
    r_offset     = 55944     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42152     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #163 && Symbol: [] */
  {
    r_offset     = 55960     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42170     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #164 && Symbol: [] */
  {
    r_offset     = 55976     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42188     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #165 && Symbol: [] */
  {
    r_offset     = 55992     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42204     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #166 && Symbol: [] */
  {
    r_offset     = 56008     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42220     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #167 && Symbol: [] */
  {
    r_offset     = 56024     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42245     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #168 && Symbol: [] */
  {
    r_offset     = 56040     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42267     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #169 && Symbol: [] */
  {
    r_offset     = 56056     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42284     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #170 && Symbol: [] */
  {
    r_offset     = 56072     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42303     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #171 && Symbol: [] */
  {
    r_offset     = 56088     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42323     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #172 && Symbol: [] */
  {
    r_offset     = 56104     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42342     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #173 && Symbol: [] */
  {
    r_offset     = 56120     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42365     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #174 && Symbol: [] */
  {
    r_offset     = 56136     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42378     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #175 && Symbol: [] */
  {
    r_offset     = 56144     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42386     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #176 && Symbol: [] */
  {
    r_offset     = 56152     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42400     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #177 && Symbol: [] */
  {
    r_offset     = 56168     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42436     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #178 && Symbol: [] */
  {
    r_offset     = 56176     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #179 && Symbol: [] */
  {
    r_offset     = 56184     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42464     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #180 && Symbol: [] */
  {
    r_offset     = 56200     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42524     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #181 && Symbol: [] */
  {
    r_offset     = 56208     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #182 && Symbol: [] */
  {
    r_offset     = 56216     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42536     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #183 && Symbol: [] */
  {
    r_offset     = 56232     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42577     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #184 && Symbol: [] */
  {
    r_offset     = 56240     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #185 && Symbol: [] */
  {
    r_offset     = 56248     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42600     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #186 && Symbol: [] */
  {
    r_offset     = 56264     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42632     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #187 && Symbol: [] */
  {
    r_offset     = 56272     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #188 && Symbol: [] */
  {
    r_offset     = 56280     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42640     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #189 && Symbol: [] */
  {
    r_offset     = 56296     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42671     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #190 && Symbol: [] */
  {
    r_offset     = 56304     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #191 && Symbol: [] */
  {
    r_offset     = 56312     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42681     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #192 && Symbol: [] */
  {
    r_offset     = 56328     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42708     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #193 && Symbol: [] */
  {
    r_offset     = 56336     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #194 && Symbol: [] */
  {
    r_offset     = 56344     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42718     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #195 && Symbol: [] */
  {
    r_offset     = 56360     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42745     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #196 && Symbol: [] */
  {
    r_offset     = 56368     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #197 && Symbol: [] */
  {
    r_offset     = 56376     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42760     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #198 && Symbol: [] */
  {
    r_offset     = 56392     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42797     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #199 && Symbol: [] */
  {
    r_offset     = 56400     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #200 && Symbol: [] */
  {
    r_offset     = 56408     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42808     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #201 && Symbol: [] */
  {
    r_offset     = 56424     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42849     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #202 && Symbol: [] */
  {
    r_offset     = 56432     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #203 && Symbol: [] */
  {
    r_offset     = 56440     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42864     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #204 && Symbol: [] */
  {
    r_offset     = 56456     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42912     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #205 && Symbol: [] */
  {
    r_offset     = 56464     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #206 && Symbol: [] */
  {
    r_offset     = 56472     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42928     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #207 && Symbol: [] */
  {
    r_offset     = 56488     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42963     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #208 && Symbol: [] */
  {
    r_offset     = 56496     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #209 && Symbol: [] */
  {
    r_offset     = 56504     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42976     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #210 && Symbol: [] */
  {
    r_offset     = 56520     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43022     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #211 && Symbol: [] */
  {
    r_offset     = 56528     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #212 && Symbol: [] */
  {
    r_offset     = 56536     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43030     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #213 && Symbol: [] */
  {
    r_offset     = 56552     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43056     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #214 && Symbol: [] */
  {
    r_offset     = 56560     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #215 && Symbol: [] */
  {
    r_offset     = 56568     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43064     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #216 && Symbol: [] */
  {
    r_offset     = 56584     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43090     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #217 && Symbol: [] */
  {
    r_offset     = 56592     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #218 && Symbol: [] */
  {
    r_offset     = 56600     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43100     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #219 && Symbol: [] */
  {
    r_offset     = 56616     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43120     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #220 && Symbol: [] */
  {
    r_offset     = 56624     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #221 && Symbol: [] */
  {
    r_offset     = 56632     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43136     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #222 && Symbol: [] */
  {
    r_offset     = 56648     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43196     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #223 && Symbol: [] */
  {
    r_offset     = 56656     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42386     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #224 && Symbol: [] */
  {
    r_offset     = 56664     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43100     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #225 && Symbol: [] */
  {
    r_offset     = 56680     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43208     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #226 && Symbol: [] */
  {
    r_offset     = 56688     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #227 && Symbol: [] */
  {
    r_offset     = 56696     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43216     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #228 && Symbol: [] */
  {
    r_offset     = 56712     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43252     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #229 && Symbol: [] */
  {
    r_offset     = 56720     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #230 && Symbol: [] */
  {
    r_offset     = 56728     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43264     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #231 && Symbol: [] */
  {
    r_offset     = 56744     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43304     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #232 && Symbol: [] */
  {
    r_offset     = 56752     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #233 && Symbol: [] */
  {
    r_offset     = 56760     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43320     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #234 && Symbol: [] */
  {
    r_offset     = 56776     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43367     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #235 && Symbol: [] */
  {
    r_offset     = 56784     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #236 && Symbol: [] */
  {
    r_offset     = 56792     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43384     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #237 && Symbol: [] */
  {
    r_offset     = 56808     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43470     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #238 && Symbol: [] */
  {
    r_offset     = 56816     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #239 && Symbol: [] */
  {
    r_offset     = 56824     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43479     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #240 && Symbol: [] */
  {
    r_offset     = 56840     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43497     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #241 && Symbol: [] */
  {
    r_offset     = 56848     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42386     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #242 && Symbol: [] */
  {
    r_offset     = 56856     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43100     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #243 && Symbol: [] */
  {
    r_offset     = 56872     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43508     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #244 && Symbol: [] */
  {
    r_offset     = 56880     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42587     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #245 && Symbol: [] */
  {
    r_offset     = 56888     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43520     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #246 && Symbol: [] */
  {
    r_offset     = 56904     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43553     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #247 && Symbol: [] */
  {
    r_offset     = 56912     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 42386     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #248 && Symbol: [] */
  {
    r_offset     = 56920     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43100     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #249 && Symbol: [] */
  {
    r_offset     = 56936     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43565     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #250 && Symbol: [] */
  {
    r_offset     = 56944     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #251 && Symbol: [] */
  {
    r_offset     = 56968     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43580     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #252 && Symbol: [] */
  {
    r_offset     = 56976     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #253 && Symbol: [] */
  {
    r_offset     = 57000     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43594     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #254 && Symbol: [] */
  {
    r_offset     = 57008     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #255 && Symbol: [] */
  {
    r_offset     = 57032     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43610     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #256 && Symbol: [] */
  {
    r_offset     = 57040     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #257 && Symbol: [] */
  {
    r_offset     = 57064     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43626     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #258 && Symbol: [] */
  {
    r_offset     = 57072     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #259 && Symbol: [] */
  {
    r_offset     = 57096     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43637     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #260 && Symbol: [] */
  {
    r_offset     = 57104     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #261 && Symbol: [] */
  {
    r_offset     = 57128     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43646     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #262 && Symbol: [] */
  {
    r_offset     = 57136     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #263 && Symbol: [] */
  {
    r_offset     = 57160     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43658     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #264 && Symbol: [] */
  {
    r_offset     = 57168     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #265 && Symbol: [] */
  {
    r_offset     = 57192     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43675     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #266 && Symbol: [] */
  {
    r_offset     = 57200     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #267 && Symbol: [] */
  {
    r_offset     = 57224     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43694     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #268 && Symbol: [] */
  {
    r_offset     = 57232     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #269 && Symbol: [] */
  {
    r_offset     = 57256     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43710     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #270 && Symbol: [] */
  {
    r_offset     = 57264     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #271 && Symbol: [] */
  {
    r_offset     = 57288     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43720     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #272 && Symbol: [] */
  {
    r_offset     = 57296     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #273 && Symbol: [] */
  {
    r_offset     = 57320     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43728     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #274 && Symbol: [] */
  {
    r_offset     = 57328     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #275 && Symbol: [] */
  {
    r_offset     = 57352     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43739     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #276 && Symbol: [] */
  {
    r_offset     = 57360     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #277 && Symbol: [] */
  {
    r_offset     = 57384     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43749     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #278 && Symbol: [] */
  {
    r_offset     = 57392     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #279 && Symbol: [] */
  {
    r_offset     = 57416     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43762     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #280 && Symbol: [] */
  {
    r_offset     = 57424     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #281 && Symbol: [] */
  {
    r_offset     = 57448     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43774     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #282 && Symbol: [] */
  {
    r_offset     = 57456     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #283 && Symbol: [] */
  {
    r_offset     = 57480     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43785     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #284 && Symbol: [] */
  {
    r_offset     = 57488     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #285 && Symbol: [] */
  {
    r_offset     = 57512     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43795     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #286 && Symbol: [] */
  {
    r_offset     = 57520     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #287 && Symbol: [] */
  {
    r_offset     = 57544     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43808     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #288 && Symbol: [] */
  {
    r_offset     = 57552     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #289 && Symbol: [] */
  {
    r_offset     = 57576     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43819     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #290 && Symbol: [] */
  {
    r_offset     = 57584     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #291 && Symbol: [] */
  {
    r_offset     = 57608     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43833     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #292 && Symbol: [] */
  {
    r_offset     = 57616     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #293 && Symbol: [] */
  {
    r_offset     = 57640     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41574     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #294 && Symbol: [] */
  {
    r_offset     = 57648     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43845     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #295 && Symbol: [] */
  {
    r_offset     = 57672     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 41581     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #296 && Symbol: [] */
  {
    r_offset     = 57680     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43845     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #297 && Symbol: [] */
  {
    r_offset     = 57728     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43864     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #298 && Symbol: [] */
  {
    r_offset     = 57736     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 32090     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #299 && Symbol: [] */
  {
    r_offset     = 57744     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43872     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #300 && Symbol: [] */
  {
    r_offset     = 57752     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43911     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #301 && Symbol: [] */
  {
    r_offset     = 57760     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 32261     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #302 && Symbol: [] */
  {
    r_offset     = 57768     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43920     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #303 && Symbol: [] */
  {
    r_offset     = 57824     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43960     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #304 && Symbol: [] */
  {
    r_offset     = 57832     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 31415     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #305 && Symbol: [] */
  {
    r_offset     = 57840     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43964     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #306 && Symbol: [] */
  {
    r_offset     = 57848     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43982     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #307 && Symbol: [] */
  {
    r_offset     = 57856     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 20920     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #308 && Symbol: [] */
  {
    r_offset     = 57864     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 43987     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #309 && Symbol: [] */
  {
    r_offset     = 57872     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44010     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #310 && Symbol: [] */
  {
    r_offset     = 57880     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 22592     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #311 && Symbol: [] */
  {
    r_offset     = 57888     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44016     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #312 && Symbol: [] */
  {
    r_offset     = 57896     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44039     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #313 && Symbol: [] */
  {
    r_offset     = 57904     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 23881     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #314 && Symbol: [] */
  {
    r_offset     = 57912     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44045     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #315 && Symbol: [] */
  {
    r_offset     = 57920     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44068     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #316 && Symbol: [] */
  {
    r_offset     = 57928     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 25142     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #317 && Symbol: [] */
  {
    r_offset     = 57936     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44080     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #318 && Symbol: [] */
  {
    r_offset     = 57944     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44115     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #319 && Symbol: [] */
  {
    r_offset     = 57952     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 26164     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #320 && Symbol: [] */
  {
    r_offset     = 57960     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44122     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #321 && Symbol: [] */
  {
    r_offset     = 57968     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44149     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #322 && Symbol: [] */
  {
    r_offset     = 57976     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 25653     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #323 && Symbol: [] */
  {
    r_offset     = 57984     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44160     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #324 && Symbol: [] */
  {
    r_offset     = 57992     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44204     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #325 && Symbol: [] */
  {
    r_offset     = 58000     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 27436     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #326 && Symbol: [] */
  {
    r_offset     = 58008     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44211     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #327 && Symbol: [] */
  {
    r_offset     = 58016     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44239     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #328 && Symbol: [] */
  {
    r_offset     = 58024     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 30322     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #329 && Symbol: [] */
  {
    r_offset     = 58032     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44248     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #330 && Symbol: [] */
  {
    r_offset     = 58040     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44293     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #331 && Symbol: [] */
  {
    r_offset     = 58048     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 30852     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #332 && Symbol: [] */
  {
    r_offset     = 58056     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44301     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #333 && Symbol: [] */
  {
    r_offset     = 58064     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44324     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #334 && Symbol: [] */
  {
    r_offset     = 58072     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 28708     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #335 && Symbol: [] */
  {
    r_offset     = 58080     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44336     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #336 && Symbol: [] */
  {
    r_offset     = 58088     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44366     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #337 && Symbol: [] */
  {
    r_offset     = 58096     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 31995     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #338 && Symbol: [] */
  {
    r_offset     = 58104     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44376     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #339 && Symbol: [] */
  {
    r_offset     = 58112     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44412     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #340 && Symbol: [] */
  {
    r_offset     = 58120     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 32010     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #341 && Symbol: [] */
  {
    r_offset     = 58128     ,  /* OFFSET to apply relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 44424     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #342 && Symbol: [__abi_tag] */
  {
    r_offset     = 53184     ,  /* OFFSET to apply relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 2         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #343 && Symbol: [crtstuff.c] */
  {
    r_offset     = 53192     ,  /* OFFSET to apply relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 3         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #344 && Symbol: [__frame_dummy_init_array_entry] */
  {
    r_offset     = 53200     ,  /* OFFSET to apply relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 10        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #345 && Symbol: [handler.c] */
  {
    r_offset     = 53208     ,  /* OFFSET to apply relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 15        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #346 && Symbol: [] */
  {
    r_offset     = 53216     ,  /* OFFSET to apply relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 18        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #347 && Symbol: [__FRAME_END__] */
  {
    r_offset     = 58144     ,  /* OFFSET to apply relocation at */
    r_info.type  = 5         ,  /* Relocation type [R_X86_64_COPY] */,
    r_info.idx   = 17        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #348 && Symbol: [_DYNAMIC] */
  {
    r_offset     = 58176     ,  /* OFFSET to apply relocation at */
    r_info.type  = 5         ,  /* Relocation type [R_X86_64_COPY] */,
    r_info.idx   = 19        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
};

Elf64_Rela rela_plt = {
  /* Entry #0 && Symbol: [Scrt1.o] */
  {
    r_offset     = 53248     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 1         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #1 && Symbol: [deregister_tm_clones] */
  {
    r_offset     = 53256     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 4         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #2 && Symbol: [register_tm_clones] */
  {
    r_offset     = 53264     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 5         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #3 && Symbol: [__do_global_dtors_aux] */
  {
    r_offset     = 53272     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 6         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #4 && Symbol: [completed.0] */
  {
    r_offset     = 53280     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 7         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #5 && Symbol: [__do_global_dtors_aux_fini_array_entry] */
  {
    r_offset     = 53288     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 8         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #6 && Symbol: [frame_dummy] */
  {
    r_offset     = 53296     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 9         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #7 && Symbol: [main.c] */
  {
    r_offset     = 53304     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 11        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #8 && Symbol: [parser.c] */
  {
    r_offset     = 53312     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 12        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #9 && Symbol: [dump.c] */
  {
    r_offset     = 53320     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 13        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #10 && Symbol: [mappings.c] */
  {
    r_offset     = 53328     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 14        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #11 && Symbol: [crtstuff.c] */
  {
    r_offset     = 53336     ,  /* OFFSET to apply relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 16        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
};

/* Dynamic String Table (.dynstr) flat-dump. */
char* r_dynstr = {
  '\0', 'p', 'u', 't', 's', '\0', 'f', 'r', 'e', 'e', '\0', 'f', 'r', 'e', 'a', 'd', '\0', 's', 't', 'r', 'd', 'u', 'p', '\0', 'f', 'o', 'p', 'e', 'n', '\0', 's', 't', 'd', 'o', 'u', 't', '\0', 'm', 'a', 'l', 'l', 'o', 'c', '\0', '_', '_', 'l', 'i', 'b', 'c', '_', 's', 't', 'a', 'r', 't', '_', 'm', 'a', 'i', 'n', '\0', 's', 't', 'd', 'e', 'r', 'r', '\0', 'f', 'p', 'r', 'i', 'n', 't', 'f', '\0', '_', '_', 'c', 'x', 'a', '_', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'e', '\0', 'f', 'c', 'l', 'o', 's', 'e', '\0', 'm', 'e', 'm', 's', 'e', 't', '\0', 'f', 'w', 'r', 'i', 't', 'e', '\0', 's', 't', 'r', 'c', 'm', 'p', '\0', 'f', 's', 'e', 'e', 'k', '\0', 'l', 'i', 'b', 'c', '.', 's', 'o', '.', '6', '\0', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '3', '4', '\0', 'G', 'L', 'I', 'B', 'C', '_', '2', '.', '2', '.', '5', '\0', '_', 'I', 'T', 'M', '_', 'd', 'e', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', '_', '_', 'g', 'm', 'o', 'n', '_', 's', 't', 'a', 'r', 't', '_', '_', '\0', '_', 'I', 'T', 'M', '_', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'M', 'C', 'l', 'o', 'n', 'e', 'T', 'a', 'b', 'l', 'e', '\0', 
};

/* Dynamic String Table (.dynstr) formatted-dump. */
char** f_dynstr = {
  "",
  "puts",
  "free",
  "fread",
  "strdup",
  "fopen",
  "stdout",
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

Elf64_Dyn dynamic = {
  /* Dynamic Array Tag #0 */
  {
    d_tag        = 1         ,  /* [DT_NEEDED] */
    d_un.d_val   = 126       ,  /* OFFSET in .strtab resolving to the name of a shared library */
  },
  /* Dynamic Array Tag #1 */
  {
    d_tag        = 12        ,  /* [DT_INIT] */
    d_un.d_ptr   = 12288     ,  /* The address of the INIT() */
  },
  /* Dynamic Array Tag #2 */
  {
    d_tag        = 13        ,  /* [DT_FINI] */
    d_un.d_ptr   = 32284     ,  /* The address of the FINI() */
  },
  /* Dynamic Array Tag #3 */
  {
    d_tag        = 25        ,  /* [DT_INIT_ARRAY] */
                 = 52688     ,  /* (null) */
  },
  /* Dynamic Array Tag #4 */
  {
    d_tag        = 27        ,  /* [DT_INIT_ARRAYSZ] */
                 = 8         ,  /* (null) */
  },
  /* Dynamic Array Tag #5 */
  {
    d_tag        = 26        ,  /* [DT_FINI_ARRAY] */
                 = 52696     ,  /* (null) */
  },
  /* Dynamic Array Tag #6 */
  {
    d_tag        = 28        ,  /* [DT_FINI_ARRAYSZ] */
                 = 8         ,  /* (null) */
  },
  /* Dynamic Array Tag #7 */
  {
    d_tag        = 1879047925,  /* [DT_GNU_HASH] */
                 = 944       ,  /* (null) */
  },
  /* Dynamic Array Tag #8 */
  {
    d_tag        = 5         ,  /* [DT_STRTAB] */
    d_un.d_ptr   = 1472      ,  /* The address of the .strtab */
  },
  /* Dynamic Array Tag #9 */
  {
    d_tag        = 6         ,  /* [DT_SYMTAB] */
    d_un.d_ptr   = 992       ,  /* The address of the .symtab */
  },
  /* Dynamic Array Tag #10 */
  {
    d_tag        = 10        ,  /* [DT_STRSZ] */
    d_un.d_val   = 228       ,  /* The size of the .strtab (in bytes) */
  },
  /* Dynamic Array Tag #11 */
  {
    d_tag        = 11        ,  /* [DT_SYMENT] */
    d_un.d_val   = 24        ,  /* The size of a single .symtab entry (in bytes) */
  },
  /* Dynamic Array Tag #12 */
  {
    d_tag        = 21        ,  /* [DT_DEBUG] */
    d_un.d_ptr   = 0         ,  /* Used in debugging */
  },
  /* Dynamic Array Tag #13 */
  {
    d_tag        = 3         ,  /* [DT_PLTGOT] */
    d_un.d_ptr   = 53224     ,  /* The address of .plt.got section */
  },
  /* Dynamic Array Tag #14 */
  {
    d_tag        = 2         ,  /* [DT_PLTRELSZ] */
    d_un.d_val   = 288       ,  /* The size of .rela.plt entries (in bytes) */
  },
  /* Dynamic Array Tag #15 */
  {
    d_tag        = 20        ,  /* [DT_PLTREL] */
    d_un.d_val   = 7         ,  /* Tells whether addends are used in .rela.plt relocations or not; stores DT_REL/DT_RELA */
  },
  /* Dynamic Array Tag #16 */
  {
    d_tag        = 23        ,  /* [DT_JMPREL] */
    d_un.d_ptr   = 10168     ,  /* The address of .rela.plt entries */
  },
  /* Dynamic Array Tag #17 */
  {
    d_tag        = 7         ,  /* [DT_RELA] */
    d_un.d_ptr   = 1792      ,  /* The address of the .rela.dyn entries */
  },
  /* Dynamic Array Tag #18 */
  {
    d_tag        = 8         ,  /* [DT_RELASZ] */
    d_un.d_val   = 8376      ,  /* The size of .rela.dyn entries (in bytes) */
  },
  /* Dynamic Array Tag #19 */
  {
    d_tag        = 9         ,  /* [DT_RELAENT] */
    d_un.d_val   = 24        ,  /* The size of a single .rela.dyn entry (in bytes) */
  },
  /* Dynamic Array Tag #20 */
  {
    d_tag        = 1879048187,  /* [DT_FLAGS_1] */
                 = 134217728 ,  /* (null) */
  },
  /* Dynamic Array Tag #21 */
  {
    d_tag        = 1879048190,  /* [DT_VERNEED] */
                 = 1744      ,  /* (null) */
  },
  /* Dynamic Array Tag #22 */
  {
    d_tag        = 1879048191,  /* [DT_VERNEEDNUM] */
                 = 1         ,  /* (null) */
  },
  /* Dynamic Array Tag #23 */
  {
    d_tag        = 1879048176,  /* [DT_VERSYM] */
                 = 1700      ,  /* (null) */
  },
  /* Dynamic Array Tag #24 */
  {
    d_tag        = 1879048185,  /* [DT_RELACOUNT] */
                 = 342       ,  /* (null) */
  },
  /* Dynamic Array Tag #25 */
  {
    d_tag        = 0         ,  /* [DT_NULL] */
    ignored      = 0         ,  /* Marks the end of the .dynamic array */
  },
  /* Dynamic Array Tag #26 */
  {
    d_tag        = 0         ,  /* [DT_NULL] */
    ignored      = 0         ,  /* Marks the end of the .dynamic array */
  },
  /* Dynamic Array Tag #27 */
  {
    d_tag        = 0         ,  /* [DT_NULL] */
    ignored      = 0         ,  /* Marks the end of the .dynamic array */
  },
  /* Dynamic Array Tag #28 */
  {
    d_tag        = 0         ,  /* [DT_NULL] */
    ignored      = 0         ,  /* Marks the end of the .dynamic array */
  },
  /* Dynamic Array Tag #29 */
  {
    d_tag        = 0         ,  /* [DT_NULL] */
    ignored      = 0         ,  /* Marks the end of the .dynamic array */
  },
};

