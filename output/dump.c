/* This is the raw C-style dump! */

/* Header file to obtain ELF type definitions. */
#include <elf.h>

/* ELF file header (ehdr) dump */
Elf64_Ehdr ehdr = {
  /* e_ident[16] */     {
    0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  /* e_type      */     3        /* ET_DYN */,
  /* e_machine   */     62       /* EM_X86_64 */,
  /* e_version   */     1        /* EV_CURRENT */,
  /* e_ehsize    */     64       /* size in decimal bytes */,
  /* e_entry     */     4352,    /* bytes (in decimal) in the binary */
  /* e_phoff     */     64       /* bytes (in decimal) in the binary */,
  /* e_phnum     */     14,
  /* e_phentsize */     56       /* size in decimal bytes */,
  /* e_shoff     */     27712    /* bytes (in decimal) in the binary */,
  /* e_shnum     */     31,
  /* e_shentsize */     64,      /* size in decimal bytes */
  /* e_shstrndx  */     30,
  /* e_flags     */     0,
};
