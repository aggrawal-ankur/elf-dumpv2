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
  e_shoff        = 62480     ,  /* Bytes into file */
  e_shnum        = 31        ,  /* Number of section headers */
  e_shentsize    = 64        ,  /* Size of section headers (in bytes) */
  e_shstrndx     = 30        ,  /* Section header string table index in the section headers table */
  e_flags        = 0x0       ,  /* Flags */
};

Elf64_Shdr shdrs = {
  /* Total Count #31 */
  /* Section Header #0 */
  {
    sh_name        = 0         ,  /* No name */
    sh_type        = 0         ,  /* SHT_NULL */
    sh_flags       = 0         ,  /* No flags */
    sh_addr        = 0         ,  /* No Address */
    sh_offset      = 0         ,  /* No file offset */
    sh_size        = 0         ,  /* No size */
    sh_link        = 0         ,  /* [SHN_UNDEF]: No link information */
    sh_info        = 0         ,  /* No auxiliary information */
    sh_addralign   = 0         ,  /* No alignment requirement */
    sh_entsize     = 0         ,  /* No entries */
  },
  /* Section Header #1 */
  {
    sh_name        = 27        ,  /* OFFSET in .shstrtab [.note.gnu.property] */
    sh_type        = 7         ,  /* [SHT_NOTE] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 848       ,  /* Virtual Address of this section entry */
    sh_offset      = 848       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 32        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #2 */
  {
    sh_name        = 46        ,  /* OFFSET in .shstrtab [.note.gnu.build-id] */
    sh_type        = 7         ,  /* [SHT_NOTE] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 880       ,  /* Virtual Address of this section entry */
    sh_offset      = 880       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 36        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #3 */
  {
    sh_name        = 65        ,  /* OFFSET in .shstrtab [.interp] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 916       ,  /* Virtual Address of this section entry */
    sh_offset      = 916       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 28        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #4 */
  {
    sh_name        = 73        ,  /* OFFSET in .shstrtab [.gnu.hash] */
    sh_type        = 1879048182,  /* [SHT_GNU_HASH] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 944       ,  /* Virtual Address of this section entry */
    sh_offset      = 944       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 48        ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #5 */
  {
    sh_name        = 83        ,  /* OFFSET in .shstrtab [.dynsym] */
    sh_type        = 11        ,  /* [SHT_DYNSYM] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 992       ,  /* Virtual Address of this section entry */
    sh_offset      = 992       ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 480       ,  /* Size of this section (in bytes) */
    sh_link        = 6         ,  /* Link informat */
    sh_info        = 1         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #6 */
  {
    sh_name        = 91        ,  /* OFFSET in .shstrtab [.dynstr] */
    sh_type        = 3         ,  /* [SHT_STRTAB] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1472      ,  /* Virtual Address of this section entry */
    sh_offset      = 1472      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 228       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #7 */
  {
    sh_name        = 99        ,  /* OFFSET in .shstrtab [.gnu.version] */
    sh_type        = 1879048191,  /* [SHT_GNU_versym] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1700      ,  /* Virtual Address of this section entry */
    sh_offset      = 1700      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 40        ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 2         ,  /* Section alignment requirement */
    sh_entsize     = 2         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #8 */
  {
    sh_name        = 112       ,  /* OFFSET in .shstrtab [.gnu.version_r] */
    sh_type        = 1879048190,  /* [SHT_GNU_verneed] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1744      ,  /* Virtual Address of this section entry */
    sh_offset      = 1744      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 48        ,  /* Size of this section (in bytes) */
    sh_link        = 6         ,  /* Link informat */
    sh_info        = 1         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #9 */
  {
    sh_name        = 127       ,  /* OFFSET in .shstrtab [.rela.dyn] */
    sh_type        = 4         ,  /* [SHT_RELA] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 1792      ,  /* Virtual Address of this section entry */
    sh_offset      = 1792      ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8736      ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #10 */
  {
    sh_name        = 137       ,  /* OFFSET in .shstrtab [.rela.plt] */
    sh_type        = 4         ,  /* [SHT_RELA] */
    sh_flags       = 66        ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_INFO_LINK],  */
    sh_addr        = 10528     ,  /* Virtual Address of this section entry */
    sh_offset      = 10528     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 288       ,  /* Size of this section (in bytes) */
    sh_link        = 5         ,  /* Link informat */
    sh_info        = 24        ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #11 */
  {
    sh_name        = 147       ,  /* OFFSET in .shstrtab [.init] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12288     ,  /* Virtual Address of this section entry */
    sh_offset      = 12288     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 23        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #12 */
  {
    sh_name        = 142       ,  /* OFFSET in .shstrtab [.plt] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12320     ,  /* Virtual Address of this section entry */
    sh_offset      = 12320     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 208       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 16        ,  /* Section alignment requirement */
    sh_entsize     = 16        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #13 */
  {
    sh_name        = 153       ,  /* OFFSET in .shstrtab [.plt.got] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12528     ,  /* Virtual Address of this section entry */
    sh_offset      = 12528     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #14 */
  {
    sh_name        = 162       ,  /* OFFSET in .shstrtab [.text] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 12544     ,  /* Virtual Address of this section entry */
    sh_offset      = 12544     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 22840     ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 16        ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #15 */
  {
    sh_name        = 168       ,  /* OFFSET in .shstrtab [.fini] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 6         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC], [SHF_EXECINSTR],  */
    sh_addr        = 35384     ,  /* Virtual Address of this section entry */
    sh_offset      = 35384     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 9         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #16 */
  {
    sh_name        = 174       ,  /* OFFSET in .shstrtab [.rodata] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 36864     ,  /* Virtual Address of this section entry */
    sh_offset      = 36864     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 12789     ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #17 */
  {
    sh_name        = 182       ,  /* OFFSET in .shstrtab [.eh_frame_hdr] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 49656     ,  /* Virtual Address of this section entry */
    sh_offset      = 49656     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 276       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #18 */
  {
    sh_name        = 196       ,  /* OFFSET in .shstrtab [.eh_frame] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 49936     ,  /* Virtual Address of this section entry */
    sh_offset      = 49936     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 1116      ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #19 */
  {
    sh_name        = 206       ,  /* OFFSET in .shstrtab [.note.ABI-tag] */
    sh_type        = 7         ,  /* [SHT_NOTE] */
    sh_flags       = 2         ,  /* BIT-MASKED value, interpreted as [SHF_ALLOC],  */
    sh_addr        = 51052     ,  /* Virtual Address of this section entry */
    sh_offset      = 51052     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 32        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 4         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #20 */
  {
    sh_name        = 220       ,  /* OFFSET in .shstrtab [.init_array] */
    sh_type        = 14        ,  /* [SHT_INIT_ARRAY] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 56784     ,  /* Virtual Address of this section entry */
    sh_offset      = 52688     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #21 */
  {
    sh_name        = 232       ,  /* OFFSET in .shstrtab [.fini_array] */
    sh_type        = 15        ,  /* [SHT_FINI_ARRAY] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 56792     ,  /* Virtual Address of this section entry */
    sh_offset      = 52696     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 8         ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #22 */
  {
    sh_name        = 244       ,  /* OFFSET in .shstrtab [.dynamic] */
    sh_type        = 6         ,  /* [SHT_DYNAMIC] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 56800     ,  /* Virtual Address of this section entry */
    sh_offset      = 52704     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 480       ,  /* Size of this section (in bytes) */
    sh_link        = 6         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 16        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #23 */
  {
    sh_name        = 157       ,  /* OFFSET in .shstrtab [.got] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 57280     ,  /* Virtual Address of this section entry */
    sh_offset      = 53184     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 40        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #24 */
  {
    sh_name        = 253       ,  /* OFFSET in .shstrtab [.got.plt] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 57320     ,  /* Virtual Address of this section entry */
    sh_offset      = 53224     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 120       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 8         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #25 */
  {
    sh_name        = 262       ,  /* OFFSET in .shstrtab [.data] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 57440     ,  /* Virtual Address of this section entry */
    sh_offset      = 53344     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 5192      ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 32        ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #26 */
  {
    sh_name        = 268       ,  /* OFFSET in .shstrtab [.bss] */
    sh_type        = 8         ,  /* [SHT_NOBITS] */
    sh_flags       = 3         ,  /* BIT-MASKED value, interpreted as [SHF_WRITE], [SHF_ALLOC],  */
    sh_addr        = 62656     ,  /* Virtual Address of this section entry */
    sh_offset      = 58536     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 48        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 32        ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #27 */
  {
    sh_name        = 273       ,  /* OFFSET in .shstrtab [.comment] */
    sh_type        = 1         ,  /* [SHT_PROGBITS] */
    sh_flags       = 48        ,  /* BIT-MASKED value, interpreted as [SHF_MERGE], [SHF_STRINGS],  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 58536     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 31        ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 1         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #28 */
  {
    sh_name        = 1         ,  /* OFFSET in .shstrtab [.symtab] */
    sh_type        = 2         ,  /* [SHT_SYMTAB] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 58568     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 2352      ,  /* Size of this section (in bytes) */
    sh_link        = 29        ,  /* Link informat */
    sh_info        = 22        ,  /* Auxiliary informat */
    sh_addralign   = 8         ,  /* Section alignment requirement */
    sh_entsize     = 24        ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #29 */
  {
    sh_name        = 9         ,  /* OFFSET in .shstrtab [.strtab] */
    sh_type        = 3         ,  /* [SHT_STRTAB] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 60920     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 1271      ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
  /* Section Header #30 */
  {
    sh_name        = 17        ,  /* OFFSET in .shstrtab [.shstrtab] */
    sh_type        = 3         ,  /* [SHT_STRTAB] */
    sh_flags       = 0         ,  /* BIT-MASKED value, interpreted as  */
    sh_addr        = 0         ,  /* Virtual Address of this section entry */
    sh_offset      = 62191     ,  /* OFFSET in the file this section entry starts from */
    sh_size        = 282       ,  /* Size of this section (in bytes) */
    sh_link        = 0         ,  /* Link informat */
    sh_info        = 0         ,  /* Auxiliary informat */
    sh_addralign   = 1         ,  /* Section alignment requirement */
    sh_entsize     = 0         ,  /* The section has fixed size entries of this size (in bytes) */
  },
};

Elf64_Phdr phdrs = {
  /* Total Count #14 */
  /* Program Header #0 */
  {
    p_type     = 6         ,  /* [PT_PHDR] */
    p_offset   = 64        ,  /* OFFSET in the file this segment starts from */
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
    p_offset   = 916       ,  /* OFFSET in the file this segment starts from */
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
    p_offset   = 0         ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0x0       ,  /* Virtual address */
    p_paddr    = 0x0       ,  /* Physical address */
    p_filesz   = 10816     ,  /* Segment size in bytes */
    p_memsz    = 10816     ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #3 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 12288     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0x3000    ,  /* Virtual address */
    p_paddr    = 0x3000    ,  /* Physical address */
    p_filesz   = 23105     ,  /* Segment size in bytes */
    p_memsz    = 23105     ,  /* Segment size in bytes */
    p_flags    = 5         ,  /* Memory protection flags: PF_X PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #4 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 36864     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0x9000    ,  /* Virtual address */
    p_paddr    = 0x9000    ,  /* Physical address */
    p_filesz   = 14220     ,  /* Segment size in bytes */
    p_memsz    = 14220     ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #5 */
  {
    p_type     = 1         ,  /* [PT_LOAD] */
    p_offset   = 52688     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0xddd0    ,  /* Virtual address */
    p_paddr    = 0xddd0    ,  /* Physical address */
    p_filesz   = 5848      ,  /* Segment size in bytes */
    p_memsz    = 5920      ,  /* Segment size in bytes */
    p_flags    = 6         ,  /* Memory protection flags: PF_W PF_R  */,
    p_align    = 4096      ,  /* Alignment requirement */
  },
  /* Program Header #6 */
  {
    p_type     = 2         ,  /* [PT_DYNAMIC] */
    p_offset   = 52704     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0xdde0    ,  /* Virtual address */
    p_paddr    = 0xdde0    ,  /* Physical address */
    p_filesz   = 480       ,  /* Segment size in bytes */
    p_memsz    = 480       ,  /* Segment size in bytes */
    p_flags    = 6         ,  /* Memory protection flags: PF_W PF_R  */,
    p_align    = 8         ,  /* Alignment requirement */
  },
  /* Program Header #7 */
  {
    p_type     = 4         ,  /* [PT_NOTE] */
    p_offset   = 848       ,  /* OFFSET in the file this segment starts from */
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
    p_offset   = 880       ,  /* OFFSET in the file this segment starts from */
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
    p_offset   = 51052     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0xc76c    ,  /* Virtual address */
    p_paddr    = 0xc76c    ,  /* Physical address */
    p_filesz   = 32        ,  /* Segment size in bytes */
    p_memsz    = 32        ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4         ,  /* Alignment requirement */
  },
  /* Program Header #10 */
  {
    p_type     = 1685382483,  /* [PT_GNU_PROPERTY] */
    p_offset   = 848       ,  /* OFFSET in the file this segment starts from */
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
    p_offset   = 49656     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0xc1f8    ,  /* Virtual address */
    p_paddr    = 0xc1f8    ,  /* Physical address */
    p_filesz   = 276       ,  /* Segment size in bytes */
    p_memsz    = 276       ,  /* Segment size in bytes */
    p_flags    = 4         ,  /* Memory protection flags: PF_R  */,
    p_align    = 4         ,  /* Alignment requirement */
  },
  /* Program Header #12 */
  {
    p_type     = 1685382481,  /* [PT_GNU_STACK] */
    p_offset   = 0         ,  /* OFFSET in the file this segment starts from */
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
    p_offset   = 52688     ,  /* OFFSET in the file this segment starts from */
    p_vaddr    = 0xddd0    ,  /* Virtual address */
    p_paddr    = 0xddd0    ,  /* Physical address */
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
/* Total Count #93 */
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
  /* Total Count #98 */
  /* ENTRY #0 : STN_UNDEF */
  {
    st_name      = 0         ,  /* No name */
    st_info.type = 0         ,  /* No type */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [STN_UNDEF]: No section */
    st_value     = 0         ,  /* No value */
    st_size      = 0         ,  /* No size */
  },
  /* ENTRY #1 */
  {
    st_name      = 1         ,  /* OFFSET in .strtab [Scrt1.o] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #2 */
  {
    st_name      = 9         ,  /* OFFSET in .strtab [__abi_tag] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 19        ,  /* Section (Idx) the symbol is present in [.note.ABI-tag] */
    st_value     = 51052     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 32        ,  /* Symbol size */
  },
  /* ENTRY #3 */
  {
    st_name      = 19        ,  /* OFFSET in .strtab [crtstuff.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #4 */
  {
    st_name      = 30        ,  /* OFFSET in .strtab [deregister_tm_clones] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12592     ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #5 */
  {
    st_name      = 32        ,  /* OFFSET in .strtab [register_tm_clones] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12640     ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #6 */
  {
    st_name      = 51        ,  /* OFFSET in .strtab [__do_global_dtors_aux] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12704     ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #7 */
  {
    st_name      = 73        ,  /* OFFSET in .strtab [completed.0] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62696     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 1         ,  /* Symbol size */
  },
  /* ENTRY #8 */
  {
    st_name      = 85        ,  /* OFFSET in .strtab [__do_global_dtors_aux_fini_array_entry] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 21        ,  /* Section (Idx) the symbol is present in [.fini_array] */
    st_value     = 56792     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #9 */
  {
    st_name      = 124       ,  /* OFFSET in .strtab [frame_dummy] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12768     ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #10 */
  {
    st_name      = 136       ,  /* OFFSET in .strtab [__frame_dummy_init_array_entry] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 20        ,  /* Section (Idx) the symbol is present in [.init_array] */
    st_value     = 56784     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #11 */
  {
    st_name      = 167       ,  /* OFFSET in .strtab [main.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #12 */
  {
    st_name      = 174       ,  /* OFFSET in .strtab [parser.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #13 */
  {
    st_name      = 183       ,  /* OFFSET in .strtab [dump.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #14 */
  {
    st_name      = 190       ,  /* OFFSET in .strtab [mappings.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #15 */
  {
    st_name      = 201       ,  /* OFFSET in .strtab [handler.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #16 */
  {
    st_name      = 19        ,  /* OFFSET in .strtab [crtstuff.c] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #17 */
  {
    st_name      = 211       ,  /* OFFSET in .strtab [__FRAME_END__] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 18        ,  /* Section (Idx) the symbol is present in [.eh_frame] */
    st_value     = 51048     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #18 */
  {
    st_name      = 0         ,  /* OFFSET in .strtab [] */
    st_info.type = 4         ,  /* STT_FILE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 65521     ,  /* [SHN_ABS]: The symbol has an absolute value and will not change on relocation */
    st_value     = 0         ,  /* Symbol Association: A file */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #19 */
  {
    st_name      = 225       ,  /* OFFSET in .strtab [_DYNAMIC] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 22        ,  /* Section (Idx) the symbol is present in [.dynamic] */
    st_value     = 56800     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #20 */
  {
    st_name      = 234       ,  /* OFFSET in .strtab [__GNU_EH_FRAME_HDR] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 17        ,  /* Section (Idx) the symbol is present in [.eh_frame_hdr] */
    st_value     = 49656     ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #21 */
  {
    st_name      = 253       ,  /* OFFSET in .strtab [_GLOBAL_OFFSET_TABLE_] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 24        ,  /* Section (Idx) the symbol is present in [.got.plt] */
    st_value     = 57320     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #22 */
  {
    st_name      = 275       ,  /* OFFSET in .strtab [dump_relocations] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 33208     ,  /* Symbol Association: A function or other executable code */
    st_size      = 135       ,  /* Symbol size */
  },
  /* ENTRY #23 */
  {
    st_name      = 292       ,  /* OFFSET in .strtab [dump_dynstr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 33343     ,  /* Symbol Association: A function or other executable code */
    st_size      = 567       ,  /* Symbol size */
  },
  /* ENTRY #24 */
  {
    st_name      = 304       ,  /* OFFSET in .strtab [free@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #25 */
  {
    st_name      = 321       ,  /* OFFSET in .strtab [dump_all] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 34545     ,  /* Symbol Association: A function or other executable code */
    st_size      = 580       ,  /* Symbol size */
  },
  /* ENTRY #26 */
  {
    st_name      = 330       ,  /* OFFSET in .strtab [__libc_start_main@GLIBC_2.34] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #27 */
  {
    st_name      = 359       ,  /* OFFSET in .strtab [general_dump] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 20823     ,  /* Symbol Association: A function or other executable code */
    st_size      = 175       ,  /* Symbol size */
  },
  /* ENTRY #28 */
  {
    st_name      = 372       ,  /* OFFSET in .strtab [dump_targets] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 62272     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 360       ,  /* Symbol size */
  },
  /* ENTRY #29 */
  {
    st_name      = 385       ,  /* OFFSET in .strtab [_ITM_deregisterTMCloneTable] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #30 */
  {
    st_name      = 413       ,  /* OFFSET in .strtab [stdout@GLIBC_2.2.5] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62656     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 8         ,  /* Symbol size */
  },
  /* ENTRY #31 */
  {
    st_name      = 660       ,  /* OFFSET in .strtab [data_start] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57440     ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #32 */
  {
    st_name      = 432       ,  /* OFFSET in .strtab [find_tag] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 35125     ,  /* Symbol Association: A function or other executable code */
    st_size      = 65        ,  /* Symbol size */
  },
  /* ENTRY #33 */
  {
    st_name      = 441       ,  /* OFFSET in .strtab [puts@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #34 */
  {
    st_name      = 458       ,  /* OFFSET in .strtab [fread@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #35 */
  {
    st_name      = 476       ,  /* OFFSET in .strtab [d_stbinds] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 59648     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 112       ,  /* Symbol size */
  },
  /* ENTRY #36 */
  {
    st_name      = 486       ,  /* OFFSET in .strtab [parse_dynsym] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 17131     ,  /* Symbol Association: A function or other executable code */
    st_size      = 638       ,  /* Symbol size */
  },
  /* ENTRY #37 */
  {
    st_name      = 499       ,  /* OFFSET in .strtab [_edata] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 62632     ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #38 */
  {
    st_name      = 506       ,  /* OFFSET in .strtab [fclose@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #39 */
  {
    st_name      = 525       ,  /* OFFSET in .strtab [d_class] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57728     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 48        ,  /* Symbol size */
  },
  /* ENTRY #40 */
  {
    st_name      = 533       ,  /* OFFSET in .strtab [dump_handler] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 35190     ,  /* Symbol Association: A function or other executable code */
    st_size      = 171       ,  /* Symbol size */
  },
  /* ENTRY #41 */
  {
    st_name      = 546       ,  /* OFFSET in .strtab [commands] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 62176     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 72        ,  /* Symbol size */
  },
  /* ENTRY #42 */
  {
    st_name      = 555       ,  /* OFFSET in .strtab [ei_data] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57792     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 48        ,  /* Symbol size */
  },
  /* ENTRY #43 */
  {
    st_name      = 563       ,  /* OFFSET in .strtab [verify_elf] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 13559     ,  /* Symbol Association: A function or other executable code */
    st_size      = 220       ,  /* Symbol size */
  },
  /* ENTRY #44 */
  {
    st_name      = 574       ,  /* OFFSET in .strtab [dump_strtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 26220     ,  /* Symbol Association: A function or other executable code */
    st_size      = 545       ,  /* Symbol size */
  },
  /* ENTRY #45 */
  {
    st_name      = 586       ,  /* OFFSET in .strtab [_fini] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 15        ,  /* Section (Idx) the symbol is present in [.fini] */
    st_value     = 35384     ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #46 */
  {
    st_name      = 592       ,  /* OFFSET in .strtab [rtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 59872     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 688       ,  /* Symbol size */
  },
  /* ENTRY #47 */
  {
    st_name      = 599       ,  /* OFFSET in .strtab [dump_symtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 26765     ,  /* Symbol Association: A function or other executable code */
    st_size      = 2366      ,  /* Symbol size */
  },
  /* ENTRY #48 */
  {
    st_name      = 611       ,  /* OFFSET in .strtab [memset@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #49 */
  {
    st_name      = 630       ,  /* OFFSET in .strtab [parse_shstrtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 14718     ,  /* Symbol Association: A function or other executable code */
    st_size      = 653       ,  /* Symbol size */
  },
  /* ENTRY #50 */
  {
    st_name      = 645       ,  /* OFFSET in .strtab [dump_reladyn] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 31500     ,  /* Symbol Association: A function or other executable code */
    st_size      = 876       ,  /* Symbol size */
  },
  /* ENTRY #51 */
  {
    st_name      = 658       ,  /* OFFSET in .strtab [__data_start] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57440     ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #52 */
  {
    st_name      = 671       ,  /* OFFSET in .strtab [strcmp@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #53 */
  {
    st_name      = 690       ,  /* OFFSET in .strtab [d_dtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 60576     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 1600      ,  /* Symbol size */
  },
  /* ENTRY #54 */
  {
    st_name      = 699       ,  /* OFFSET in .strtab [fprintf@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #55 */
  {
    st_name      = 719       ,  /* OFFSET in .strtab [__gmon_start__] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #56 */
  {
    st_name      = 734       ,  /* OFFSET in .strtab [d_sttypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 59392     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 240       ,  /* Symbol size */
  },
  /* ENTRY #57 */
  {
    st_name      = 744       ,  /* OFFSET in .strtab [__dso_handle] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57448     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #58 */
  {
    st_name      = 757       ,  /* OFFSET in .strtab [_IO_stdin_used] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 16        ,  /* Section (Idx) the symbol is present in [.rodata] */
    st_value     = 36864     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 4         ,  /* Symbol size */
  },
  /* ENTRY #59 */
  {
    st_name      = 772       ,  /* OFFSET in .strtab [d_shtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 58496     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 592       ,  /* Symbol size */
  },
  /* ENTRY #60 */
  {
    st_name      = 782       ,  /* OFFSET in .strtab [d_ehtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57568     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 144       ,  /* Symbol size */
  },
  /* ENTRY #61 */
  {
    st_name      = 792       ,  /* OFFSET in .strtab [parse_phdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 14012     ,  /* Symbol Association: A function or other executable code */
    st_size      = 358       ,  /* Symbol size */
  },
  /* ENTRY #62 */
  {
    st_name      = 804       ,  /* OFFSET in .strtab [d_ehmachines] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57856     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 176       ,  /* Symbol size */
  },
  /* ENTRY #63 */
  {
    st_name      = 817       ,  /* OFFSET in .strtab [malloc@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #64 */
  {
    st_name      = 836       ,  /* OFFSET in .strtab [parse_shdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 14370     ,  /* Symbol Association: A function or other executable code */
    st_size      = 348       ,  /* Symbol size */
  },
  /* ENTRY #65 */
  {
    st_name      = 848       ,  /* OFFSET in .strtab [show_handler] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 35361     ,  /* Symbol Association: A function or other executable code */
    st_size      = 23        ,  /* Symbol size */
  },
  /* ENTRY #66 */
  {
    st_name      = 861       ,  /* OFFSET in .strtab [_end] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62704     ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #67 */
  {
    st_name      = 866       ,  /* OFFSET in .strtab [d_shflags] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 59104     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 272       ,  /* Symbol size */
  },
  /* ENTRY #68 */
  {
    st_name      = 664       ,  /* OFFSET in .strtab [_start] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12544     ,  /* Symbol Association: A function or other executable code */
    st_size      = 34        ,  /* Symbol size */
  },
  /* ENTRY #69 */
  {
    st_name      = 876       ,  /* OFFSET in .strtab [fseek@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #70 */
  {
    st_name      = 894       ,  /* OFFSET in .strtab [dump_dynsym] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 29131     ,  /* Symbol Association: A function or other executable code */
    st_size      = 2369      ,  /* Symbol size */
  },
  /* ENTRY #71 */
  {
    st_name      = 906       ,  /* OFFSET in .strtab [parse_dynamic] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 20096     ,  /* Symbol Association: A function or other executable code */
    st_size      = 727       ,  /* Symbol size */
  },
  /* ENTRY #72 */
  {
    st_name      = 920       ,  /* OFFSET in .strtab [__bss_start] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62656     ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #73 */
  {
    st_name      = 932       ,  /* OFFSET in .strtab [main] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12934     ,  /* Symbol Association: A function or other executable code */
    st_size      = 625       ,  /* Symbol size */
  },
  /* ENTRY #74 */
  {
    st_name      = 937       ,  /* OFFSET in .strtab [d_stvisible] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 59776     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 80        ,  /* Symbol size */
  },
  /* ENTRY #75 */
  {
    st_name      = 949       ,  /* OFFSET in .strtab [usage] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 12777     ,  /* Symbol Association: A function or other executable code */
    st_size      = 157       ,  /* Symbol size */
  },
  /* ENTRY #76 */
  {
    st_name      = 955       ,  /* OFFSET in .strtab [d_phtypes] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 58048     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 368       ,  /* Symbol size */
  },
  /* ENTRY #77 */
  {
    st_name      = 965       ,  /* OFFSET in .strtab [parse_dynstr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 18919     ,  /* Symbol Association: A function or other executable code */
    st_size      = 1177      ,  /* Symbol size */
  },
  /* ENTRY #78 */
  {
    st_name      = 978       ,  /* OFFSET in .strtab [dump_dynamic] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 33910     ,  /* Symbol Association: A function or other executable code */
    st_size      = 635       ,  /* Symbol size */
  },
  /* ENTRY #79 */
  {
    st_name      = 991       ,  /* OFFSET in .strtab [fopen@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #80 */
  {
    st_name      = 1009      ,  /* OFFSET in .strtab [dump_phdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 22624     ,  /* Symbol Association: A function or other executable code */
    st_size      = 1312      ,  /* Symbol size */
  },
  /* ENTRY #81 */
  {
    st_name      = 1020      ,  /* OFFSET in .strtab [d_phflags] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 58432     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 48        ,  /* Symbol size */
  },
  /* ENTRY #82 */
  {
    st_name      = 1030      ,  /* OFFSET in .strtab [fwrite@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #83 */
  {
    st_name      = 1049      ,  /* OFFSET in .strtab [__TMC_END__] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 62632     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #84 */
  {
    st_name      = 1061      ,  /* OFFSET in .strtab [dump_shstrtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 25709     ,  /* Symbol Association: A function or other executable code */
    st_size      = 511       ,  /* Symbol size */
  },
  /* ENTRY #85 */
  {
    st_name      = 1075      ,  /* OFFSET in .strtab [_ITM_registerTMCloneTable] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #86 */
  {
    st_name      = 1101      ,  /* OFFSET in .strtab [parse_strtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 15371     ,  /* Symbol Association: A function or other executable code */
    st_size      = 1122      ,  /* Symbol size */
  },
  /* ENTRY #87 */
  {
    st_name      = 1114      ,  /* OFFSET in .strtab [parse_symtab] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 16493     ,  /* Symbol Association: A function or other executable code */
    st_size      = 638       ,  /* Symbol size */
  },
  /* ENTRY #88 */
  {
    st_name      = 1127      ,  /* OFFSET in .strtab [dump_ehdr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 20998     ,  /* Symbol Association: A function or other executable code */
    st_size      = 1626      ,  /* Symbol size */
  },
  /* ENTRY #89 */
  {
    st_name      = 1137      ,  /* OFFSET in .strtab [strdup@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #90 */
  {
    st_name      = 1156      ,  /* OFFSET in .strtab [parse_relocations] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 17769     ,  /* Symbol Association: A function or other executable code */
    st_size      = 1150      ,  /* Symbol size */
  },
  /* ENTRY #91 */
  {
    st_name      = 1174      ,  /* OFFSET in .strtab [__cxa_finalize@GLIBC_2.2.5] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #92 */
  {
    st_name      = 1201      ,  /* OFFSET in .strtab [_init] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 2         ,  /* STV_HIDDEN */
    st_shdx      = 11        ,  /* Section (Idx) the symbol is present in [.init] */
    st_value     = 12288     ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #93 */
  {
    st_name      = 1207      ,  /* OFFSET in .strtab [identvals] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 25        ,  /* Section (Idx) the symbol is present in [.data] */
    st_value     = 57472     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 72        ,  /* Symbol size */
  },
  /* ENTRY #94 */
  {
    st_name      = 1217      ,  /* OFFSET in .strtab [parse_ehdr] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 13779     ,  /* Symbol Association: A function or other executable code */
    st_size      = 233       ,  /* Symbol size */
  },
  /* ENTRY #95 */
  {
    st_name      = 1228      ,  /* OFFSET in .strtab [dump_relaplt] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 32376     ,  /* Symbol Association: A function or other executable code */
    st_size      = 832       ,  /* Symbol size */
  },
  /* ENTRY #96 */
  {
    st_name      = 1241      ,  /* OFFSET in .strtab [stderr@GLIBC_2.2.5] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62688     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 8         ,  /* Symbol size */
  },
  /* ENTRY #97 */
  {
    st_name      = 1260      ,  /* OFFSET in .strtab [dump_shdrs] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 14        ,  /* Section (Idx) the symbol is present in [.text] */
    st_value     = 23936     ,  /* Symbol Association: A function or other executable code */
    st_size      = 1773      ,  /* Symbol size */
  },
};

Elf64_Sym dynsym = {
  /* Total Count #20 */
  /* ENTRY #0 : STN_UNDEF */
  {
    st_name      = 0         ,  /* No name */
    st_info.type = 0         ,  /* No type */
    st_info.bind = 0         ,  /* STB_LOCAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [STN_UNDEF]: No section */
    st_value     = 0         ,  /* No value */
    st_size      = 0         ,  /* No size */
  },
  /* ENTRY #1 */
  {
    st_name      = 6         ,  /* OFFSET in .dynstr [free] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #2 */
  {
    st_name      = 44        ,  /* OFFSET in .dynstr [__libc_start_main] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #3 */
  {
    st_name      = 159       ,  /* OFFSET in .dynstr [_ITM_deregisterTMCloneTable] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #4 */
  {
    st_name      = 1         ,  /* OFFSET in .dynstr [puts] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #5 */
  {
    st_name      = 11        ,  /* OFFSET in .dynstr [fread] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #6 */
  {
    st_name      = 92        ,  /* OFFSET in .dynstr [fclose] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #7 */
  {
    st_name      = 99        ,  /* OFFSET in .dynstr [memset] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #8 */
  {
    st_name      = 113       ,  /* OFFSET in .dynstr [strcmp] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #9 */
  {
    st_name      = 69        ,  /* OFFSET in .dynstr [fprintf] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #10 */
  {
    st_name      = 187       ,  /* OFFSET in .dynstr [__gmon_start__] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #11 */
  {
    st_name      = 37        ,  /* OFFSET in .dynstr [malloc] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #12 */
  {
    st_name      = 120       ,  /* OFFSET in .dynstr [fseek] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #13 */
  {
    st_name      = 24        ,  /* OFFSET in .dynstr [fopen] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #14 */
  {
    st_name      = 106       ,  /* OFFSET in .dynstr [fwrite] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #15 */
  {
    st_name      = 202       ,  /* OFFSET in .dynstr [_ITM_registerTMCloneTable] */
    st_info.type = 0         ,  /* STT_NOTYPE */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: Not specified */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #16 */
  {
    st_name      = 17        ,  /* OFFSET in .dynstr [strdup] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #17 */
  {
    st_name      = 30        ,  /* OFFSET in .dynstr [stdout] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62656     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 8         ,  /* Symbol size */
  },
  /* ENTRY #18 */
  {
    st_name      = 77        ,  /* OFFSET in .dynstr [__cxa_finalize] */
    st_info.type = 2         ,  /* STT_FUNC */
    st_info.bind = 2         ,  /* STB_WEAK */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 0         ,  /* [SHN_UNDEF]: The symbol is undefined; needs relocation */
    st_value     = 0         ,  /* Symbol Association: A function or other executable code */
    st_size      = 0         ,  /* Symbol size */
  },
  /* ENTRY #19 */
  {
    st_name      = 62        ,  /* OFFSET in .dynstr [stderr] */
    st_info.type = 1         ,  /* STT_OBJECT */
    st_info.bind = 1         ,  /* STB_GLOBAL */
    st_other     = 0         ,  /* STV_DEFAULT */
    st_shdx      = 26        ,  /* Section (Idx) the symbol is present in [.bss] */
    st_value     = 62688     ,  /* Symbol Association: A data object (variable/array/etc) */
    st_size      = 8         ,  /* Symbol size */
  },
};

Elf64_Rela rela_dyn = {
  /* Total Count #364 */
  /* Entry #0 && Symbol: [] */
  {
    r_offset     = 56784     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 12768     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #1 && Symbol: [] */
  {
    r_offset     = 56792     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 12704     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #2 && Symbol: [] */
  {
    r_offset     = 57448     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 57448     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #3 && Symbol: [] */
  {
    r_offset     = 57472     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40640     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #4 && Symbol: [] */
  {
    r_offset     = 57480     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40648     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #5 && Symbol: [] */
  {
    r_offset     = 57488     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40656     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #6 && Symbol: [] */
  {
    r_offset     = 57496     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40664     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #7 && Symbol: [] */
  {
    r_offset     = 57504     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40672     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #8 && Symbol: [] */
  {
    r_offset     = 57512     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40681     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #9 && Symbol: [] */
  {
    r_offset     = 57520     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40689     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #10 && Symbol: [] */
  {
    r_offset     = 57528     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40700     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #11 && Symbol: [] */
  {
    r_offset     = 57536     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 40707     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #12 && Symbol: [] */
  {
    r_offset     = 57576     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45136     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #13 && Symbol: [] */
  {
    r_offset     = 57592     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45144     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #14 && Symbol: [] */
  {
    r_offset     = 57608     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45151     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #15 && Symbol: [] */
  {
    r_offset     = 57624     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45159     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #16 && Symbol: [] */
  {
    r_offset     = 57640     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45166     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #17 && Symbol: [] */
  {
    r_offset     = 57656     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45174     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #18 && Symbol: [] */
  {
    r_offset     = 57672     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45181     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #19 && Symbol: [] */
  {
    r_offset     = 57688     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45191     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #20 && Symbol: [] */
  {
    r_offset     = 57736     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45201     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #21 && Symbol: [] */
  {
    r_offset     = 57752     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45214     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #22 && Symbol: [] */
  {
    r_offset     = 57768     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45225     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #23 && Symbol: [] */
  {
    r_offset     = 57800     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45236     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #24 && Symbol: [] */
  {
    r_offset     = 57816     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45248     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #25 && Symbol: [] */
  {
    r_offset     = 57832     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45260     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #26 && Symbol: [] */
  {
    r_offset     = 57864     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45136     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #27 && Symbol: [] */
  {
    r_offset     = 57880     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45272     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #28 && Symbol: [] */
  {
    r_offset     = 57896     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45279     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #29 && Symbol: [] */
  {
    r_offset     = 57912     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45288     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #30 && Symbol: [] */
  {
    r_offset     = 57928     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45295     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #31 && Symbol: [] */
  {
    r_offset     = 57944     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45302     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #32 && Symbol: [] */
  {
    r_offset     = 57960     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45309     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #33 && Symbol: [] */
  {
    r_offset     = 57976     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45316     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #34 && Symbol: [] */
  {
    r_offset     = 57992     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45326     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #35 && Symbol: [] */
  {
    r_offset     = 58008     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45337     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #36 && Symbol: [] */
  {
    r_offset     = 58056     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45346     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #37 && Symbol: [] */
  {
    r_offset     = 58072     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45354     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #38 && Symbol: [] */
  {
    r_offset     = 58088     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45362     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #39 && Symbol: [] */
  {
    r_offset     = 58104     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45373     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #40 && Symbol: [] */
  {
    r_offset     = 58120     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45383     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #41 && Symbol: [] */
  {
    r_offset     = 58136     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45391     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #42 && Symbol: [] */
  {
    r_offset     = 58152     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45400     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #43 && Symbol: [] */
  {
    r_offset     = 58168     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45408     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #44 && Symbol: [] */
  {
    r_offset     = 58184     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45415     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #45 && Symbol: [] */
  {
    r_offset     = 58200     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45422     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #46 && Symbol: [] */
  {
    r_offset     = 58216     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45430     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #47 && Symbol: [] */
  {
    r_offset     = 58232     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45446     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #48 && Symbol: [] */
  {
    r_offset     = 58248     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45459     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #49 && Symbol: [] */
  {
    r_offset     = 58264     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45472     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #50 && Symbol: [] */
  {
    r_offset     = 58280     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45488     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #51 && Symbol: [] */
  {
    r_offset     = 58296     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45502     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #52 && Symbol: [] */
  {
    r_offset     = 58312     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45512     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #53 && Symbol: [] */
  {
    r_offset     = 58328     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45523     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #54 && Symbol: [] */
  {
    r_offset     = 58344     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45536     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #55 && Symbol: [] */
  {
    r_offset     = 58360     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45546     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #56 && Symbol: [] */
  {
    r_offset     = 58376     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45554     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #57 && Symbol: [] */
  {
    r_offset     = 58392     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45564     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #58 && Symbol: [] */
  {
    r_offset     = 58440     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45574     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #59 && Symbol: [] */
  {
    r_offset     = 58456     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45580     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #60 && Symbol: [] */
  {
    r_offset     = 58472     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45586     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #61 && Symbol: [] */
  {
    r_offset     = 58504     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45592     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #62 && Symbol: [] */
  {
    r_offset     = 58520     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45601     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #63 && Symbol: [] */
  {
    r_offset     = 58536     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45614     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #64 && Symbol: [] */
  {
    r_offset     = 58552     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45625     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #65 && Symbol: [] */
  {
    r_offset     = 58568     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45636     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #66 && Symbol: [] */
  {
    r_offset     = 58584     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45645     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #67 && Symbol: [] */
  {
    r_offset     = 58600     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45654     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #68 && Symbol: [] */
  {
    r_offset     = 58616     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45666     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #69 && Symbol: [] */
  {
    r_offset     = 58632     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45675     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #70 && Symbol: [] */
  {
    r_offset     = 58648     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45686     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #71 && Symbol: [] */
  {
    r_offset     = 58664     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45694     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #72 && Symbol: [] */
  {
    r_offset     = 58680     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45704     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #73 && Symbol: [] */
  {
    r_offset     = 58696     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45715     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #74 && Symbol: [] */
  {
    r_offset     = 58712     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45730     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #75 && Symbol: [] */
  {
    r_offset     = 58728     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45745     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #76 && Symbol: [] */
  {
    r_offset     = 58744     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45763     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #77 && Symbol: [] */
  {
    r_offset     = 58760     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45773     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #78 && Symbol: [] */
  {
    r_offset     = 58776     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45790     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #79 && Symbol: [] */
  {
    r_offset     = 58792     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45799     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #80 && Symbol: [] */
  {
    r_offset     = 58808     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45808     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #81 && Symbol: [] */
  {
    r_offset     = 58824     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45827     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #82 && Symbol: [] */
  {
    r_offset     = 58840     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45840     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #83 && Symbol: [] */
  {
    r_offset     = 58856     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45856     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #84 && Symbol: [] */
  {
    r_offset     = 58872     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45869     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #85 && Symbol: [] */
  {
    r_offset     = 58888     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45880     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #86 && Symbol: [] */
  {
    r_offset     = 58904     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45894     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #87 && Symbol: [] */
  {
    r_offset     = 58920     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45910     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #88 && Symbol: [] */
  {
    r_offset     = 58936     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45927     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #89 && Symbol: [] */
  {
    r_offset     = 58952     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45942     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #90 && Symbol: [] */
  {
    r_offset     = 58968     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45958     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #91 && Symbol: [] */
  {
    r_offset     = 58984     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45973     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #92 && Symbol: [] */
  {
    r_offset     = 59000     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45984     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #93 && Symbol: [] */
  {
    r_offset     = 59016     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 45993     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #94 && Symbol: [] */
  {
    r_offset     = 59032     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46004     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #95 && Symbol: [] */
  {
    r_offset     = 59048     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46015     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #96 && Symbol: [] */
  {
    r_offset     = 59064     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46026     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #97 && Symbol: [] */
  {
    r_offset     = 59112     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46037     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #98 && Symbol: [] */
  {
    r_offset     = 59128     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46047     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #99 && Symbol: [] */
  {
    r_offset     = 59144     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46057     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #100 && Symbol: [] */
  {
    r_offset     = 59160     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46071     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #101 && Symbol: [] */
  {
    r_offset     = 59176     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46081     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #102 && Symbol: [] */
  {
    r_offset     = 59192     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46093     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #103 && Symbol: [] */
  {
    r_offset     = 59208     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46107     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #104 && Symbol: [] */
  {
    r_offset     = 59224     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46122     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #105 && Symbol: [] */
  {
    r_offset     = 59240     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46143     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #106 && Symbol: [] */
  {
    r_offset     = 59256     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46153     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #107 && Symbol: [] */
  {
    r_offset     = 59272     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46161     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #108 && Symbol: [] */
  {
    r_offset     = 59288     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46176     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #109 && Symbol: [] */
  {
    r_offset     = 59304     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46187     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #110 && Symbol: [] */
  {
    r_offset     = 59320     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46200     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #111 && Symbol: [] */
  {
    r_offset     = 59336     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46215     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #112 && Symbol: [] */
  {
    r_offset     = 59352     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46227     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #113 && Symbol: [] */
  {
    r_offset     = 59400     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46239     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #114 && Symbol: [] */
  {
    r_offset     = 59408     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46256     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #115 && Symbol: [] */
  {
    r_offset     = 59424     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46290     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #116 && Symbol: [] */
  {
    r_offset     = 59432     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46304     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #117 && Symbol: [] */
  {
    r_offset     = 59448     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46359     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #118 && Symbol: [] */
  {
    r_offset     = 59456     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46368     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #119 && Symbol: [] */
  {
    r_offset     = 59472     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46424     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #120 && Symbol: [] */
  {
    r_offset     = 59480     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46436     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #121 && Symbol: [] */
  {
    r_offset     = 59496     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46466     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #122 && Symbol: [] */
  {
    r_offset     = 59504     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46475     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #123 && Symbol: [] */
  {
    r_offset     = 59520     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46502     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #124 && Symbol: [] */
  {
    r_offset     = 59528     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46520     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #125 && Symbol: [] */
  {
    r_offset     = 59544     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46560     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #126 && Symbol: [] */
  {
    r_offset     = 59552     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46520     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #127 && Symbol: [] */
  {
    r_offset     = 59568     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46568     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #128 && Symbol: [] */
  {
    r_offset     = 59576     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46579     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #129 && Symbol: [] */
  {
    r_offset     = 59592     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46607     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #130 && Symbol: [] */
  {
    r_offset     = 59600     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46618     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #131 && Symbol: [] */
  {
    r_offset     = 59656     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46644     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #132 && Symbol: [] */
  {
    r_offset     = 59672     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46654     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #133 && Symbol: [] */
  {
    r_offset     = 59688     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46665     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #134 && Symbol: [] */
  {
    r_offset     = 59704     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46674     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #135 && Symbol: [] */
  {
    r_offset     = 59720     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46689     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #136 && Symbol: [] */
  {
    r_offset     = 59736     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46696     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #137 && Symbol: [] */
  {
    r_offset     = 59784     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46703     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #138 && Symbol: [] */
  {
    r_offset     = 59800     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46715     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #139 && Symbol: [] */
  {
    r_offset     = 59816     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46728     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #140 && Symbol: [] */
  {
    r_offset     = 59832     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46739     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #141 && Symbol: [] */
  {
    r_offset     = 59880     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46753     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #142 && Symbol: [] */
  {
    r_offset     = 59896     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46767     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #143 && Symbol: [] */
  {
    r_offset     = 59912     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46779     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #144 && Symbol: [] */
  {
    r_offset     = 59928     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46793     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #145 && Symbol: [] */
  {
    r_offset     = 59944     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46808     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #146 && Symbol: [] */
  {
    r_offset     = 59960     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46823     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #147 && Symbol: [] */
  {
    r_offset     = 59976     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46837     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #148 && Symbol: [] */
  {
    r_offset     = 59992     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46855     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #149 && Symbol: [] */
  {
    r_offset     = 60008     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46874     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #150 && Symbol: [] */
  {
    r_offset     = 60024     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46892     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #151 && Symbol: [] */
  {
    r_offset     = 60040     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46910     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #152 && Symbol: [] */
  {
    r_offset     = 60056     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46922     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #153 && Symbol: [] */
  {
    r_offset     = 60072     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46935     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #154 && Symbol: [] */
  {
    r_offset     = 60088     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46947     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #155 && Symbol: [] */
  {
    r_offset     = 60104     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46961     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #156 && Symbol: [] */
  {
    r_offset     = 60120     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46972     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #157 && Symbol: [] */
  {
    r_offset     = 60136     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46985     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #158 && Symbol: [] */
  {
    r_offset     = 60152     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47003     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #159 && Symbol: [] */
  {
    r_offset     = 60168     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47021     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #160 && Symbol: [] */
  {
    r_offset     = 60184     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47038     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #161 && Symbol: [] */
  {
    r_offset     = 60200     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47053     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #162 && Symbol: [] */
  {
    r_offset     = 60216     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47068     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #163 && Symbol: [] */
  {
    r_offset     = 60232     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47086     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #164 && Symbol: [] */
  {
    r_offset     = 60248     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47104     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #165 && Symbol: [] */
  {
    r_offset     = 60264     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47121     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #166 && Symbol: [] */
  {
    r_offset     = 60280     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47135     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #167 && Symbol: [] */
  {
    r_offset     = 60296     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47153     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #168 && Symbol: [] */
  {
    r_offset     = 60312     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47170     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #169 && Symbol: [] */
  {
    r_offset     = 60328     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47185     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #170 && Symbol: [] */
  {
    r_offset     = 60344     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47205     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #171 && Symbol: [] */
  {
    r_offset     = 60360     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47222     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #172 && Symbol: [] */
  {
    r_offset     = 60376     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47240     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #173 && Symbol: [] */
  {
    r_offset     = 60392     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47258     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #174 && Symbol: [] */
  {
    r_offset     = 60408     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47274     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #175 && Symbol: [] */
  {
    r_offset     = 60424     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47290     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #176 && Symbol: [] */
  {
    r_offset     = 60440     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47315     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #177 && Symbol: [] */
  {
    r_offset     = 60456     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47337     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #178 && Symbol: [] */
  {
    r_offset     = 60472     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47354     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #179 && Symbol: [] */
  {
    r_offset     = 60488     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47373     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #180 && Symbol: [] */
  {
    r_offset     = 60504     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47393     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #181 && Symbol: [] */
  {
    r_offset     = 60520     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47412     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #182 && Symbol: [] */
  {
    r_offset     = 60536     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47435     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #183 && Symbol: [] */
  {
    r_offset     = 60584     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47448     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #184 && Symbol: [] */
  {
    r_offset     = 60592     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47456     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #185 && Symbol: [] */
  {
    r_offset     = 60600     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47464     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #186 && Symbol: [] */
  {
    r_offset     = 60616     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47500     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #187 && Symbol: [] */
  {
    r_offset     = 60624     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #188 && Symbol: [] */
  {
    r_offset     = 60632     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47528     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #189 && Symbol: [] */
  {
    r_offset     = 60648     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47588     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #190 && Symbol: [] */
  {
    r_offset     = 60656     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #191 && Symbol: [] */
  {
    r_offset     = 60664     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47600     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #192 && Symbol: [] */
  {
    r_offset     = 60680     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47641     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #193 && Symbol: [] */
  {
    r_offset     = 60688     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #194 && Symbol: [] */
  {
    r_offset     = 60696     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47664     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #195 && Symbol: [] */
  {
    r_offset     = 60712     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47696     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #196 && Symbol: [] */
  {
    r_offset     = 60720     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #197 && Symbol: [] */
  {
    r_offset     = 60728     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47704     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #198 && Symbol: [] */
  {
    r_offset     = 60744     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47735     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #199 && Symbol: [] */
  {
    r_offset     = 60752     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #200 && Symbol: [] */
  {
    r_offset     = 60760     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47745     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #201 && Symbol: [] */
  {
    r_offset     = 60776     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47772     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #202 && Symbol: [] */
  {
    r_offset     = 60784     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #203 && Symbol: [] */
  {
    r_offset     = 60792     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47782     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #204 && Symbol: [] */
  {
    r_offset     = 60808     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47809     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #205 && Symbol: [] */
  {
    r_offset     = 60816     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #206 && Symbol: [] */
  {
    r_offset     = 60824     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47824     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #207 && Symbol: [] */
  {
    r_offset     = 60840     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47861     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #208 && Symbol: [] */
  {
    r_offset     = 60848     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #209 && Symbol: [] */
  {
    r_offset     = 60856     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47872     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #210 && Symbol: [] */
  {
    r_offset     = 60872     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47913     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #211 && Symbol: [] */
  {
    r_offset     = 60880     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #212 && Symbol: [] */
  {
    r_offset     = 60888     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47928     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #213 && Symbol: [] */
  {
    r_offset     = 60904     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47976     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #214 && Symbol: [] */
  {
    r_offset     = 60912     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #215 && Symbol: [] */
  {
    r_offset     = 60920     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47992     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #216 && Symbol: [] */
  {
    r_offset     = 60936     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48027     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #217 && Symbol: [] */
  {
    r_offset     = 60944     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #218 && Symbol: [] */
  {
    r_offset     = 60952     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48040     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #219 && Symbol: [] */
  {
    r_offset     = 60968     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48086     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #220 && Symbol: [] */
  {
    r_offset     = 60976     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #221 && Symbol: [] */
  {
    r_offset     = 60984     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48094     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #222 && Symbol: [] */
  {
    r_offset     = 61000     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48120     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #223 && Symbol: [] */
  {
    r_offset     = 61008     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #224 && Symbol: [] */
  {
    r_offset     = 61016     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48128     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #225 && Symbol: [] */
  {
    r_offset     = 61032     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48154     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #226 && Symbol: [] */
  {
    r_offset     = 61040     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #227 && Symbol: [] */
  {
    r_offset     = 61048     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48164     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #228 && Symbol: [] */
  {
    r_offset     = 61064     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48184     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #229 && Symbol: [] */
  {
    r_offset     = 61072     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #230 && Symbol: [] */
  {
    r_offset     = 61080     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48200     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #231 && Symbol: [] */
  {
    r_offset     = 61096     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48260     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #232 && Symbol: [] */
  {
    r_offset     = 61104     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47456     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #233 && Symbol: [] */
  {
    r_offset     = 61112     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48164     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #234 && Symbol: [] */
  {
    r_offset     = 61128     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48272     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #235 && Symbol: [] */
  {
    r_offset     = 61136     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #236 && Symbol: [] */
  {
    r_offset     = 61144     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48280     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #237 && Symbol: [] */
  {
    r_offset     = 61160     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48316     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #238 && Symbol: [] */
  {
    r_offset     = 61168     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #239 && Symbol: [] */
  {
    r_offset     = 61176     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48328     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #240 && Symbol: [] */
  {
    r_offset     = 61192     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48368     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #241 && Symbol: [] */
  {
    r_offset     = 61200     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #242 && Symbol: [] */
  {
    r_offset     = 61208     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48384     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #243 && Symbol: [] */
  {
    r_offset     = 61224     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48431     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #244 && Symbol: [] */
  {
    r_offset     = 61232     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47510     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #245 && Symbol: [] */
  {
    r_offset     = 61240     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48448     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #246 && Symbol: [] */
  {
    r_offset     = 61256     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48534     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #247 && Symbol: [] */
  {
    r_offset     = 61264     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #248 && Symbol: [] */
  {
    r_offset     = 61272     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48543     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #249 && Symbol: [] */
  {
    r_offset     = 61288     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48561     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #250 && Symbol: [] */
  {
    r_offset     = 61296     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47456     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #251 && Symbol: [] */
  {
    r_offset     = 61304     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48164     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #252 && Symbol: [] */
  {
    r_offset     = 61320     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48572     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #253 && Symbol: [] */
  {
    r_offset     = 61328     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47651     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #254 && Symbol: [] */
  {
    r_offset     = 61336     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48584     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #255 && Symbol: [] */
  {
    r_offset     = 61352     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48617     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #256 && Symbol: [] */
  {
    r_offset     = 61360     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 47456     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #257 && Symbol: [] */
  {
    r_offset     = 61368     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48164     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #258 && Symbol: [] */
  {
    r_offset     = 61384     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48629     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #259 && Symbol: [] */
  {
    r_offset     = 61392     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #260 && Symbol: [] */
  {
    r_offset     = 61416     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48644     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #261 && Symbol: [] */
  {
    r_offset     = 61424     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #262 && Symbol: [] */
  {
    r_offset     = 61448     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48658     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #263 && Symbol: [] */
  {
    r_offset     = 61456     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #264 && Symbol: [] */
  {
    r_offset     = 61480     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48674     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #265 && Symbol: [] */
  {
    r_offset     = 61488     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #266 && Symbol: [] */
  {
    r_offset     = 61512     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48690     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #267 && Symbol: [] */
  {
    r_offset     = 61520     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #268 && Symbol: [] */
  {
    r_offset     = 61544     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48701     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #269 && Symbol: [] */
  {
    r_offset     = 61552     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #270 && Symbol: [] */
  {
    r_offset     = 61576     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48710     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #271 && Symbol: [] */
  {
    r_offset     = 61584     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #272 && Symbol: [] */
  {
    r_offset     = 61608     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48722     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #273 && Symbol: [] */
  {
    r_offset     = 61616     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #274 && Symbol: [] */
  {
    r_offset     = 61640     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48739     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #275 && Symbol: [] */
  {
    r_offset     = 61648     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #276 && Symbol: [] */
  {
    r_offset     = 61672     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48758     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #277 && Symbol: [] */
  {
    r_offset     = 61680     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #278 && Symbol: [] */
  {
    r_offset     = 61704     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48774     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #279 && Symbol: [] */
  {
    r_offset     = 61712     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #280 && Symbol: [] */
  {
    r_offset     = 61736     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48784     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #281 && Symbol: [] */
  {
    r_offset     = 61744     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #282 && Symbol: [] */
  {
    r_offset     = 61768     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48792     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #283 && Symbol: [] */
  {
    r_offset     = 61776     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #284 && Symbol: [] */
  {
    r_offset     = 61800     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48803     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #285 && Symbol: [] */
  {
    r_offset     = 61808     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #286 && Symbol: [] */
  {
    r_offset     = 61832     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48813     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #287 && Symbol: [] */
  {
    r_offset     = 61840     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #288 && Symbol: [] */
  {
    r_offset     = 61864     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48826     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #289 && Symbol: [] */
  {
    r_offset     = 61872     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #290 && Symbol: [] */
  {
    r_offset     = 61896     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48838     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #291 && Symbol: [] */
  {
    r_offset     = 61904     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #292 && Symbol: [] */
  {
    r_offset     = 61928     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48849     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #293 && Symbol: [] */
  {
    r_offset     = 61936     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #294 && Symbol: [] */
  {
    r_offset     = 61960     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48859     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #295 && Symbol: [] */
  {
    r_offset     = 61968     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #296 && Symbol: [] */
  {
    r_offset     = 61992     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48872     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #297 && Symbol: [] */
  {
    r_offset     = 62000     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #298 && Symbol: [] */
  {
    r_offset     = 62024     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48883     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #299 && Symbol: [] */
  {
    r_offset     = 62032     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #300 && Symbol: [] */
  {
    r_offset     = 62056     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48897     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #301 && Symbol: [] */
  {
    r_offset     = 62064     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48643     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #302 && Symbol: [] */
  {
    r_offset     = 62088     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46689     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #303 && Symbol: [] */
  {
    r_offset     = 62096     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48909     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #304 && Symbol: [] */
  {
    r_offset     = 62120     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 46696     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #305 && Symbol: [] */
  {
    r_offset     = 62128     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48909     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #306 && Symbol: [] */
  {
    r_offset     = 62176     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48928     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #307 && Symbol: [] */
  {
    r_offset     = 62184     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 35190     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #308 && Symbol: [] */
  {
    r_offset     = 62192     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48936     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #309 && Symbol: [] */
  {
    r_offset     = 62200     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48975     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #310 && Symbol: [] */
  {
    r_offset     = 62208     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 35361     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #311 && Symbol: [] */
  {
    r_offset     = 62216     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 48984     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #312 && Symbol: [] */
  {
    r_offset     = 62272     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49024     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #313 && Symbol: [] */
  {
    r_offset     = 62280     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 34545     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #314 && Symbol: [] */
  {
    r_offset     = 62288     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49028     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #315 && Symbol: [] */
  {
    r_offset     = 62296     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49046     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #316 && Symbol: [] */
  {
    r_offset     = 62304     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 20998     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #317 && Symbol: [] */
  {
    r_offset     = 62312     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49051     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #318 && Symbol: [] */
  {
    r_offset     = 62320     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49074     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #319 && Symbol: [] */
  {
    r_offset     = 62328     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 22624     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #320 && Symbol: [] */
  {
    r_offset     = 62336     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49080     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #321 && Symbol: [] */
  {
    r_offset     = 62344     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49103     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #322 && Symbol: [] */
  {
    r_offset     = 62352     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 23936     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #323 && Symbol: [] */
  {
    r_offset     = 62360     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49109     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #324 && Symbol: [] */
  {
    r_offset     = 62368     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49132     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #325 && Symbol: [] */
  {
    r_offset     = 62376     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 25709     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #326 && Symbol: [] */
  {
    r_offset     = 62384     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49144     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #327 && Symbol: [] */
  {
    r_offset     = 62392     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49179     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #328 && Symbol: [] */
  {
    r_offset     = 62400     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 26765     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #329 && Symbol: [] */
  {
    r_offset     = 62408     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49186     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #330 && Symbol: [] */
  {
    r_offset     = 62416     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49213     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #331 && Symbol: [] */
  {
    r_offset     = 62424     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 26220     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #332 && Symbol: [] */
  {
    r_offset     = 62432     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49224     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #333 && Symbol: [] */
  {
    r_offset     = 62440     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49268     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #334 && Symbol: [] */
  {
    r_offset     = 62448     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 29131     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #335 && Symbol: [] */
  {
    r_offset     = 62456     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49275     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #336 && Symbol: [] */
  {
    r_offset     = 62464     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49303     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #337 && Symbol: [] */
  {
    r_offset     = 62472     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 33343     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #338 && Symbol: [] */
  {
    r_offset     = 62480     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49312     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #339 && Symbol: [] */
  {
    r_offset     = 62488     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49357     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #340 && Symbol: [] */
  {
    r_offset     = 62496     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 33910     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #341 && Symbol: [] */
  {
    r_offset     = 62504     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49365     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #342 && Symbol: [] */
  {
    r_offset     = 62512     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49388     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #343 && Symbol: [] */
  {
    r_offset     = 62520     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 33208     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #344 && Symbol: [] */
  {
    r_offset     = 62528     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49400     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #345 && Symbol: [] */
  {
    r_offset     = 62536     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49430     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #346 && Symbol: [] */
  {
    r_offset     = 62544     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 31500     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #347 && Symbol: [] */
  {
    r_offset     = 62552     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49440     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #348 && Symbol: [] */
  {
    r_offset     = 62560     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49475     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #349 && Symbol: [] */
  {
    r_offset     = 62568     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 32376     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #350 && Symbol: [] */
  {
    r_offset     = 62576     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49488     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #351 && Symbol: [] */
  {
    r_offset     = 62584     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49430     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #352 && Symbol: [] */
  {
    r_offset     = 62592     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 31500     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #353 && Symbol: [] */
  {
    r_offset     = 62600     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49528     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #354 && Symbol: [] */
  {
    r_offset     = 62608     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49475     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #355 && Symbol: [] */
  {
    r_offset     = 62616     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 32376     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #356 && Symbol: [] */
  {
    r_offset     = 62624     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 8         ,  /* Relocation type [R_X86_64_RELATIVE] */,
    r_info.idx   = 0         ,  /* Symbol idx in the symbol table */
    r_addend     = 49568     ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #357 && Symbol: [__abi_tag] */
  {
    r_offset     = 57280     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 2         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #358 && Symbol: [crtstuff.c] */
  {
    r_offset     = 57288     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 3         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #359 && Symbol: [__frame_dummy_init_array_entry] */
  {
    r_offset     = 57296     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 10        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #360 && Symbol: [handler.c] */
  {
    r_offset     = 57304     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 15        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #361 && Symbol: [] */
  {
    r_offset     = 57312     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 6         ,  /* Relocation type [R_X86_64_GLOB_DAT] */,
    r_info.idx   = 18        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #362 && Symbol: [__FRAME_END__] */
  {
    r_offset     = 62656     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 5         ,  /* Relocation type [R_X86_64_COPY] */,
    r_info.idx   = 17        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #363 && Symbol: [_DYNAMIC] */
  {
    r_offset     = 62688     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 5         ,  /* Relocation type [R_X86_64_COPY] */,
    r_info.idx   = 19        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
};

Elf64_Rela rela_plt = {
  /* Total Count #12 */
  /* Entry #0 && Symbol: [Scrt1.o] */
  {
    r_offset     = 57344     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 1         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #1 && Symbol: [deregister_tm_clones] */
  {
    r_offset     = 57352     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 4         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #2 && Symbol: [register_tm_clones] */
  {
    r_offset     = 57360     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 5         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #3 && Symbol: [__do_global_dtors_aux] */
  {
    r_offset     = 57368     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 6         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #4 && Symbol: [completed.0] */
  {
    r_offset     = 57376     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 7         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #5 && Symbol: [__do_global_dtors_aux_fini_array_entry] */
  {
    r_offset     = 57384     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 8         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #6 && Symbol: [frame_dummy] */
  {
    r_offset     = 57392     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 9         ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #7 && Symbol: [main.c] */
  {
    r_offset     = 57400     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 11        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #8 && Symbol: [parser.c] */
  {
    r_offset     = 57408     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 12        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #9 && Symbol: [dump.c] */
  {
    r_offset     = 57416     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 13        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #10 && Symbol: [mappings.c] */
  {
    r_offset     = 57424     ,  /* OFFSET to apply the relocation at */
    r_info.type  = 7         ,  /* Relocation type [R_X86_64_JUMP_SLOT] */,
    r_info.idx   = 14        ,  /* Symbol idx in the symbol table */
    r_addend     = 0         ,  /* Constant to be added to calculate the final value */
  },
  /* Entry #11 && Symbol: [crtstuff.c] */
  {
    r_offset     = 57432     ,  /* OFFSET to apply the relocation at */
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
/* Total Count #23 */
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
  /* Total Count #26 */
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
    d_un.d_ptr   = 35384     ,  /* The address of the FINI() */
  },
  /* Dynamic Array Tag #3 */
  {
    d_tag        = 25        ,  /* [DT_INIT_ARRAY] */
                 = 56784     ,  /* (null) */
  },
  /* Dynamic Array Tag #4 */
  {
    d_tag        = 27        ,  /* [DT_INIT_ARRAYSZ] */
                 = 8         ,  /* (null) */
  },
  /* Dynamic Array Tag #5 */
  {
    d_tag        = 26        ,  /* [DT_FINI_ARRAY] */
                 = 56792     ,  /* (null) */
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
    d_un.d_ptr   = 57320     ,  /* The address of .plt.got section */
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
    d_un.d_ptr   = 10528     ,  /* The address of .rela.plt entries */
  },
  /* Dynamic Array Tag #17 */
  {
    d_tag        = 7         ,  /* [DT_RELA] */
    d_un.d_ptr   = 1792      ,  /* The address of the .rela.dyn entries */
  },
  /* Dynamic Array Tag #18 */
  {
    d_tag        = 8         ,  /* [DT_RELASZ] */
    d_un.d_val   = 8736      ,  /* The size of .rela.dyn entries (in bytes) */
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
                 = 357       ,  /* (null) */
  },
  /* Dynamic Array Tag #25 */
  {
    d_tag        = 0         ,  /* [DT_NULL] */
    ignored      = 0         ,  /* Marks the end of the .dynamic array */
  },
};

