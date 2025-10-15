#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cli/handler.h"

void usage(const char* prog){
  fprintf(stderr, "Usage: %s <command> [target] <elf-file>\n", prog);
  fprintf(stderr, "Commands:\n");
  
  CmdStack* cmd = commands;
  for (; cmd->name; cmd++){
    fprintf(stderr, "  %-8s : %s\n", cmd->name, cmd->description);
  }
}

int main(int argc, char** argv){
  if (argc < 3){
    usage(argv[0]);
    return 1;
  }

  const char* cmd_name = argv[1];
  const char* target   = argv[2];
  const char* filename = argv[3];

  FILE* fobj = fopen(filename, "rb");
  if (!fobj){
    fprintf(stderr, "  Error: `fopen()`: file can't be opened!\n");
    return -1;
  }

  ElfFile* AccessFile = malloc(sizeof(ElfFile));
  if (!AccessFile){
    fprintf(stderr, "Error: `malloc` failed to allocate memory for `AccessFile`\n");
    return -1;
  }

  // To make ptrs null and variables 0 in one hit.
  memset(AccessFile, 0, sizeof(ElfFile));

  // Set the filename variable
  AccessFile->filename = argv[3];

  // Populate the ELF layout (ElfFile)
  verify_elf(fobj);
  parse_ehdr(fobj, AccessFile);
  parse_phdrs(fobj, AccessFile);
  parse_shdrs(fobj, AccessFile);
  parse_shstrtab(fobj, AccessFile);
  parse_strtab(fobj, AccessFile);
  parse_symtab(fobj, AccessFile);
  parse_dynsym(fobj, AccessFile);
  parse_relocations(fobj, AccessFile);
  parse_dynstr(fobj, AccessFile);
  parse_dynamic(fobj, AccessFile);
  // deallocator(AccessFile);

  for (CmdStack* cmd = commands; cmd->name; cmd++){
    if (strcmp(cmd->name, cmd_name) == 0){
      // Subtract 2 from argc and pass arguments index 2 on wards
      if (cmd->handler(target, filename, AccessFile)){
        fprintf(stderr, "Error: command handler failed!\n");
        return 1;
      }
      return 0;
    }
  }
  printf("Successful.\n");

  return 0;
}