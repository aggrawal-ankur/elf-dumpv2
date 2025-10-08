# An ELF Parser For My `Hello, World!` C Binary

An ELF parser and C-style dumper

To run the project,
```bash
git clone https://github.com/hi-anki/elf-dump.git

cd ./elf-dump

gcc main.c core_api/parser.c dump_structure/dump.c dump_structure/mappings.c -o elfdump

./elfdump <ELF_FILE>
```

To generate the build steps,
```bash
gcc main.c core_api/parser.c dump_structure/dump.c dump_structure/mappings.c -o elfdump -save-temps
```

Add `-masm=intel` for intel assembly
