#include <stdio.h>
#include <inttypes.h>
#include "phdrs.h"

struct pTypes types[] = {
  {0, "PT_NULL"},
  {1, "PT_LOAD"},
  {2, "PT_DYNAMIC"},
  {3, "PT_INTERP"},
  {4, "PT_NOTE"},
  {5, "PT_SHLIB"},
  {6, "PT_PHDR"},
  {7, "PT_TLS"},
  {8, "PT_NUM"},
  {9, "PT_LOOS"},
  {0x60000000, "PT_GNU_EH_FRAME"},
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

struct pFlags flags[] = {
  {(1 << 0), "PF_X"},
  {(1 << 1), "PF_W"},
  {(1 << 2), "PF_R"}
};

int dump_phdrs(ElfFile* AccessFile){
  FILE* f_obj = fopen("output/dump.c", "a");
  if (!f_obj){
    fprintf(stderr, "Error: `f_obj` failed.\n ");
    return -1;
  }

  fprintf(f_obj, "/* Program headers (phdrs) dump. */\n");
  fprintf(f_obj, "Elf64_Phdr phdrs = {\n");
  
  for (int i = 0; i < AccessFile->ehdr->e_phnum; i++){
    fprintf(f_obj, "  {\n");
    fprintf(f_obj, "    /* p_type      */     %" PRIu32 ",\n", AccessFile->phdrs[i].p_type);
    fprintf(f_obj, "    /* p_flags     */     %" PRIu32 ",\n", AccessFile->phdrs[i].p_flags);
    fprintf(f_obj, "    /* p_offset    */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_offset);
    fprintf(f_obj, "    /* p_vaddr     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_vaddr);
    fprintf(f_obj, "    /* p_paddr     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_paddr);
    fprintf(f_obj, "    /* p_filesz    */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_filesz);
    fprintf(f_obj, "    /* p_memsz     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_memsz);
    fprintf(f_obj, "    /* p_align     */     %" PRIu64 ",\n", AccessFile->phdrs[i].p_align);
    fprintf(f_obj, "  },\n");
  }
  fprintf(f_obj, "};\n\n\n");

  fclose(f_obj);
  return 0;
}