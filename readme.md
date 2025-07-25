# An ELF Parser For My `Hello, World!` C Binary

## Libraries Used

```c
#include <stdio.h>                // I/O
#include <stdlib.h>               //
#include <string.h>               // String management
#include <elf.h>                  // ELF data types
#include "elf_parser.h"           // 
```

## Why we are using `elf.h`?

Everything in the ELF spec is made up of custom defined data types. These data types are declared in the form `structs`. When parsing the elf, we can make use of the `elf.h` library to ease out the parsing process. Otherwise, we have to write everything from scratch.

## Step 1: Open the file?

We know that the OS first checks whether the loaded file is an ELF or not, before loading it into memory. To check this, we have to read the initial 4 bytes in the elf, which form the magic number.

The file can be opened using the `fopen()` function. We will open it in binary mode so that we can read individual byte.

## Step 2: Extracting the ELF Header

Now we have to extract the ELF header from the loaded ELF.

For this, we have to create a variable in which we can store the ELF header. We can use the `Elf64_Ehdr` data type for this.

Next we will use the `fread()` function. It's signature is:
```c
fread(destination_ptr, size_of_each_element, number_of_elements, file_pointer);
```

We are using `fread()` because it is available in the standard I/O API (stdio.h). It works consistently with `fopen()`. We can use `read` as well but the API would change. And we don't need it now.

We have to match for `0x7f E L F` for in the `e_ident` field in the `elf_header` struct.

We are using `fprintf()` because it provides more options and it writes to `stderr` stream and error messages should go to `stderr`, not `stdout`.