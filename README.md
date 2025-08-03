# An ELF Parser For My `Hello, World!` C Binary

Project documentation can be found at [GitBook](https://ankuragrawal.gitbook.io/home/my-first-c-project-an-elf-parser-and-interpreter)

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