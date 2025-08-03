	.file	"main.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"Usage: %s <elf-binary>\n"
.LC1:
	.string	"Opening the file...."
.LC2:
	.string	"rb"
	.align 8
.LC3:
	.string	"  Error: `fopen()`: file can't be opened!\n"
.LC4:
	.string	"  File opened successfully!"
.LC5:
	.string	"Checking for ELF validity...."
	.align 8
.LC6:
	.string	"  Error: `parse_elf()`: Failed to verify the ELF file.\n"
.LC7:
	.string	"  The file is a valid ELF."
	.align 8
.LC8:
	.string	"Error: `malloc` failed to allocate memory for `AccessELF`\n"
.LC9:
	.string	"Parsing file headers...."
	.align 8
.LC10:
	.string	"  Error: file headers can't be parsed!\n"
	.align 8
.LC11:
	.string	"  File headers parsed successfully."
.LC12:
	.string	"Parsing program headers...."
	.align 8
.LC13:
	.string	"  Error: program headers can't be parsed!\n"
	.align 8
.LC14:
	.string	"  Program headers parsed successfully."
.LC15:
	.string	"Parsing section headers...."
	.align 8
.LC16:
	.string	"  Error: section headers can't be parsed!\n"
	.align 8
.LC17:
	.string	"  Section headers parsed successfully."
	.align 8
.LC18:
	.string	"Parsing section header string table...."
	.align 8
.LC19:
	.string	"  Error: section header string table can not be parsed.\n"
	.align 8
.LC20:
	.string	"  Section header string table parsed successfully."
.LC21:
	.string	"Parsing string table...."
	.align 8
.LC22:
	.string	"Error: string table can not be parsed.\n"
	.align 8
.LC23:
	.string	"  String table parsed successfully."
.LC24:
	.string	"Parsing symbol table...."
	.align 8
.LC25:
	.string	"Error: .symtab can not be parsed.\n"
	.align 8
.LC26:
	.string	"  Symbol table parsed successfully."
	.align 8
.LC27:
	.string	"Parsing dynamic symbol table...."
	.align 8
.LC28:
	.string	"Error: .dynsym can not be parsed.\n"
	.align 8
.LC29:
	.string	"  Dynamic symbol table parsed successfully."
.LC30:
	.string	"Parsing relocation table...."
	.align 8
.LC31:
	.string	"Error: .rela.* entries can not be parsed.\n"
	.align 8
.LC32:
	.string	"  Relocation table parsed successfully."
	.align 8
.LC33:
	.string	"Parsing dynamic string table...."
	.align 8
.LC34:
	.string	"  \342\224\224\342\224\200 Error: .dynstr entries can not be parsed.\n"
	.align 8
.LC35:
	.string	"  Dynamic string table parsed successfully."
.LC36:
	.string	"Parsing dynamic section...."
	.align 8
.LC37:
	.string	"  \342\224\224\342\224\200 Error: .dynamic entries can not be parsed.\n"
	.align 8
.LC38:
	.string	"  Dynamic section parsed successfully."
.LC39:
	.string	"Calling ehdr interpreter...."
.LC40:
	.string	"  Error: `raw_ehdr` failed.\n"
.LC41:
	.string	"  ehdr dump ready!"
.LC42:
	.string	"Calling phdrs interpreter...."
.LC43:
	.string	"  Error: `dump_ehdr` failed.\n"
.LC44:
	.string	"  phdrs dump ready!"
.LC45:
	.string	"Calling shdrs interpreter...."
	.align 8
.LC46:
	.string	"  Error: `dump_shdrs` failed.\n"
.LC47:
	.string	"  shdrs dump ready!"
	.align 8
.LC48:
	.string	"Calling shstrtab interpreter...."
	.align 8
.LC49:
	.string	"  Error: `dump_shstrtab` failed.\n"
.LC50:
	.string	"  shstrtab dump ready!"
	.align 8
.LC51:
	.string	"Calling strtab interpreter...."
	.align 8
.LC52:
	.string	"  Error: `dump_strtab` failed.\n"
.LC53:
	.string	"  strtab dump ready!"
	.align 8
.LC54:
	.string	"Calling symtab interpreter...."
	.align 8
.LC55:
	.string	"  Error: `dump_symtab` failed.\n"
.LC56:
	.string	"  symtab dump ready!"
	.align 8
.LC57:
	.string	"Calling dynsym interpreter...."
	.align 8
.LC58:
	.string	"  Error: `dump_dynsym` failed.\n"
.LC59:
	.string	"  dynsym dump ready!"
	.align 8
.LC60:
	.string	"Calling relocations interpreter...."
	.align 8
.LC61:
	.string	"  Error: `dump_relocations` failed.\n"
.LC62:
	.string	"  relocations dump ready!"
	.align 8
.LC63:
	.string	"Calling dynstr interpreter...."
	.align 8
.LC64:
	.string	"  Error: `dump_dynstr` failed.\n"
.LC65:
	.string	"  dynstr dump ready!"
	.align 8
.LC66:
	.string	"Calling dynamic section interpreter...."
	.align 8
.LC67:
	.string	"  Error: `dump_dynamic` failed.\n"
.LC68:
	.string	"  dynamic section dump ready!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	DWORD PTR -20[rbp], edi
	mov	QWORD PTR -32[rbp], rsi
	cmp	DWORD PTR -20[rbp], 2
	je	.L2
	mov	rax, QWORD PTR -32[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR stderr[rip]
	lea	rcx, .LC0[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	eax, 1
	jmp	.L3
.L2:
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -32[rbp]
	add	rax, 8
	mov	rax, QWORD PTR [rax]
	lea	rdx, .LC2[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -8[rbp], rax
	cmp	QWORD PTR -8[rbp], 0
	jne	.L4
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 42
	mov	esi, 1
	lea	rax, .LC3[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L4:
	lea	rax, .LC4[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC5[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	verify_elf@PLT
	test	eax, eax
	je	.L5
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 55
	mov	esi, 1
	lea	rax, .LC6[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, 1
	jmp	.L3
.L5:
	lea	rax, .LC7[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	edi, 200
	call	malloc@PLT
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L6
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 58
	mov	esi, 1
	lea	rax, .LC8[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L6:
	mov	rax, QWORD PTR -16[rbp]
	mov	edx, 200
	mov	esi, 0
	mov	rdi, rax
	call	memset@PLT
	lea	rax, .LC9[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_ehdr@PLT
	test	eax, eax
	je	.L7
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 39
	mov	esi, 1
	lea	rax, .LC10[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L7:
	lea	rax, .LC11[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC12[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_phdrs@PLT
	test	eax, eax
	je	.L8
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 42
	mov	esi, 1
	lea	rax, .LC13[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L8:
	lea	rax, .LC14[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC15[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_shdrs@PLT
	test	eax, eax
	je	.L9
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 42
	mov	esi, 1
	lea	rax, .LC16[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L9:
	lea	rax, .LC17[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC18[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_shstrtab@PLT
	test	eax, eax
	je	.L10
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 56
	mov	esi, 1
	lea	rax, .LC19[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L10:
	lea	rax, .LC20[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC21[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_strtab@PLT
	test	eax, eax
	je	.L11
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 39
	mov	esi, 1
	lea	rax, .LC22[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L11:
	lea	rax, .LC23[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC24[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_symtab@PLT
	test	eax, eax
	je	.L12
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 34
	mov	esi, 1
	lea	rax, .LC25[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L12:
	lea	rax, .LC26[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC27[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_dynsym@PLT
	test	eax, eax
	je	.L13
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 34
	mov	esi, 1
	lea	rax, .LC28[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L13:
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC30[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_relocations@PLT
	test	eax, eax
	je	.L14
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 42
	mov	esi, 1
	lea	rax, .LC31[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L14:
	lea	rax, .LC32[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC33[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_dynstr@PLT
	test	eax, eax
	je	.L15
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 51
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L15:
	lea	rax, .LC35[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC36[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	parse_dynamic@PLT
	test	eax, eax
	je	.L16
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 52
	mov	esi, 1
	lea	rax, .LC37[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L16:
	lea	rax, .LC38[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	fclose@PLT
	lea	rax, .LC39[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	eax, 0
	call	general_dump@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_ehdr@PLT
	test	eax, eax
	je	.L17
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 28
	mov	esi, 1
	lea	rax, .LC40[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L17:
	lea	rax, .LC41[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC42[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_phdrs@PLT
	test	eax, eax
	je	.L18
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 29
	mov	esi, 1
	lea	rax, .LC43[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L18:
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC45[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_shdrs@PLT
	test	eax, eax
	je	.L19
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 30
	mov	esi, 1
	lea	rax, .LC46[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L19:
	lea	rax, .LC47[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC48[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_shstrtab@PLT
	test	eax, eax
	je	.L20
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 33
	mov	esi, 1
	lea	rax, .LC49[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L20:
	lea	rax, .LC50[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC51[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_strtab@PLT
	test	eax, eax
	je	.L21
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 31
	mov	esi, 1
	lea	rax, .LC52[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L21:
	lea	rax, .LC53[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC54[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_symtab@PLT
	test	eax, eax
	je	.L22
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 31
	mov	esi, 1
	lea	rax, .LC55[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L22:
	lea	rax, .LC56[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC57[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_dynsym@PLT
	test	eax, eax
	je	.L23
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 31
	mov	esi, 1
	lea	rax, .LC58[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L23:
	lea	rax, .LC59[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC60[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_relocations@PLT
	test	eax, eax
	je	.L24
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 36
	mov	esi, 1
	lea	rax, .LC61[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L24:
	lea	rax, .LC62[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC63[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_dynstr@PLT
	test	eax, eax
	je	.L25
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 31
	mov	esi, 1
	lea	rax, .LC64[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L25:
	lea	rax, .LC65[rip]
	mov	rdi, rax
	call	puts@PLT
	lea	rax, .LC66[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	dump_dynamic@PLT
	test	eax, eax
	je	.L26
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 32
	mov	esi, 1
	lea	rax, .LC67[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L26:
	lea	rax, .LC68[rip]
	mov	rdi, rax
	call	puts@PLT
	mov	eax, 0
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Debian 14.2.0-19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
