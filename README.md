# An ELF Parser

An ELF parser and C-style dumper

To run the project,
```bash
git clone https://github.com/hi-anki/elf-dump.git

cd ./elf-dump

gcc main.c core_api/parser.c dump_structure/dump.c dump_structure/mappings.c -o elfdump

./elfdump <ELF_FILE>
```

# Features For Future

1. JSON output.
2. Plain summary tables like readelf.
3. GOT/PLT as ASCII tables.
4. Output formatting based on flags.
5. Memory efficiency (malloc mgmt).
6. Selective parsing and dumping based on flags.
7. Writing output to terminal as well.
8. Error management.
