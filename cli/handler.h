#ifndef HANDLER_H
#define HANDLER_H

// #include "../core_api/parser.h"
#include "../dump_structure/dump.h"

int dump_handler(const char* target, const char* filename, ElfFile* AccessFile);
int show_handler(const char* target, const char* filename, ElfFile* AccessFile);

// A generalizer for handler functions
typedef int (*cmd_handler)(const char*, const char*, ElfFile*);

typedef struct {
  const char* name;
  cmd_handler handler;
  const char* description;
} CmdStack;

extern CmdStack commands[];
  
// A generalizer for dump APIs
typedef int (*target_handler)(ElfFile*);

typedef struct {
  const char* name;
  target_handler handler;
  const char* description;
} TargetSpec;

extern TargetSpec dump_targets[];

#endif