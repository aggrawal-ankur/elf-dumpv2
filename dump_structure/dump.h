#ifndef DUMP_H
#define DUMP_H

/* Macros for ehdr */

// Part1
#define _ePRINT(fo, idx, name, value)  fprintf(fo, "    /* [%2d] %-12s: */  %d,\n", idx, name, value)
#define _exPRINT(fo, idx, name, value) fprintf(fo, "    /* [%2d] %-12s: */  0x%x,\n", idx, name, value)
#define _eIPRINT(fo, idx, name, value, interp) fprintf(fo, "    /* [%2d] %-12s: */  %x,     /* %s */\n", idx, name, value, interp)
#define _eIxPRINT(fo, idx, name, value, interp) fprintf(fo, "    /* [%2d] %-12s: */  0x%x,   /* %s */\n", idx, name, value, interp)

// Part 2
#define _dPRINT(fo, name, fmt, value, comment) fprintf(fo, "  %-14s = %-10" fmt ",  %s\n", name, value, comment)
#define _xPRINT(fo, name, fmt, value, comment) fprintf(fo, "  %-14s = 0x%-8" fmt ",  %s\n", name, value, comment)
#define _cPRINT(fo, name, fmt, value, comment) fprintf(fo, "  %-14s = %-10" fmt ",  /* [%s] */\n", name, value, comment)

/* Macros for shdrs */
#define _PRINT(fo, name, fmt, value, comment)  fprintf(fo, "%-18s = %-10" fmt ",  %s\n", name, value, comment)
#define _iPRINT(fo, name, fmt, value, comment) fprintf(fo, "%-18s = %-10" fmt ",  /* [%s] */\n", name, value, comment)
#define _fPRINT(fo, name, fmt, value, comment) fprintf(fo, "%-18s = %-10" fmt ",  %s ", name, value, comment)
#define _sPRINT(fo, name, fmt, value, comment, off) fprintf(fo, "%-18s = %-10" fmt ",  %s %s", name, value, comment, off)

/* Macros for .symtab */
#define _SPRINT(fo, name, fmt, value, comment)  fprintf(fo, "    %-12s = %-10" fmt ",  /* %s */\n", name, value, comment)
#define _SnPRINT(fo, name, fmt, value, comment)  fprintf(fo, "    %-12s = %-10" fmt ",  /* %s ", name, value, comment)

/* Macros for .reladyn */
#define _RPRINT(fo, name, fmt, value, comment)  fprintf(fo, "    %-12s = %-10" fmt ",  /* %s */\n", name, value, comment)
#define _R2PRINT(fo, name, fmt, value, comment)  fprintf(fo, "    %-12s = %-10" fmt ",  /* %s ", name, value, comment)


#include "../core_api/parser.h"

int general_dump(ElfFile* AccessFile);
int dump_ehdr(ElfFile* AccessFile);
int dump_phdrs(ElfFile* AccessFile);
int dump_shdrs(ElfFile* AccessFile);
int dump_shstrtab(ElfFile* AccessELF);
int dump_strtab(ElfFile* AccessELF);
int dump_symtab(ElfFile* AccessFile);
int dump_dynsym(ElfFile* AccessFile);
int dump_relocations(ElfFile* AccessELF);
int dump_dynstr(ElfFile* AccessELF);
int dump_dynamic(ElfFile* AccessELF);
int dump_reladyn(ElfFile* AccessFile);
int dump_relaplt(ElfFile* AccessFile);
int dump_all(ElfFile* AccessFile);

#endif