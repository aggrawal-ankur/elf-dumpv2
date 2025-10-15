#include <stdio.h>
#include "handler.h"
#include "../core_api/parser.h"

int dump_handler(const char* target, const char* filename, ElfFile* AccessFile){
  fprintf(stdout, "Dumping %s from %s....\n", target, filename);

  for(TargetSpec* t = dump_targets; t->name; t++){
    if (strcmp(t->name, target) == 0){
      return t->handler(AccessFile);
    }
  }
  fprintf(stderr, "Unknown dump target: %s\n", target);
  return 1;
}