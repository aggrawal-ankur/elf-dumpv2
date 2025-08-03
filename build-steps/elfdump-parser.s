	.file	"parser.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Error: `fread()`: Unable to read ELF magic bytes.\n"
	.align 8
.LC1:
	.string	"Error: Unexpected magic bytes returned.\n  Expected: `0x7F, E, L, F`\n  Found: %02X, %02X, %02X, %02X\n"
	.text
	.globl	verify_elf
	.type	verify_elf, @function
verify_elf:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rdx, QWORD PTR -24[rbp]
	lea	rax, -4[rbp]
	mov	rcx, rdx
	mov	edx, 4
	mov	esi, 1
	mov	rdi, rax
	call	fread@PLT
	cmp	rax, 4
	je	.L2
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 50
	mov	esi, 1
	lea	rax, .LC0[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, -1
	jmp	.L6
.L2:
	movzx	eax, BYTE PTR -4[rbp]
	cmp	al, 127
	jne	.L4
	movzx	eax, BYTE PTR -3[rbp]
	cmp	al, 69
	jne	.L4
	movzx	eax, BYTE PTR -2[rbp]
	cmp	al, 76
	jne	.L4
	movzx	eax, BYTE PTR -1[rbp]
	cmp	al, 70
	je	.L5
.L4:
	movzx	eax, BYTE PTR -1[rbp]
	movzx	edi, al
	movzx	eax, BYTE PTR -2[rbp]
	movzx	esi, al
	movzx	eax, BYTE PTR -3[rbp]
	movzx	ecx, al
	movzx	eax, BYTE PTR -4[rbp]
	movzx	edx, al
	mov	rax, QWORD PTR stderr[rip]
	mov	r9d, edi
	mov	r8d, esi
	lea	rsi, .LC1[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, -1
	jmp	.L6
.L5:
	mov	eax, 0
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	verify_elf, .-verify_elf
	.section	.rodata
	.align 8
.LC2:
	.string	"Error: `malloc` failed to allocated memory for ehdr.\n"
	.align 8
.LC3:
	.string	"Error: Failed to parse program headers.\n  API: `parse_phdrs`.\n"
	.text
	.globl	parse_ehdr
	.type	parse_ehdr, @function
parse_ehdr:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	edi, 64
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L8
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 53
	mov	esi, 1
	lea	rax, .LC2[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L9
.L8:
	mov	rax, QWORD PTR -8[rbp]
	mov	edx, 0
	mov	esi, 0
	mov	rdi, rax
	call	fseek@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR -8[rbp]
	mov	rcx, rdx
	mov	edx, 64
	mov	esi, 1
	mov	rdi, rax
	call	fread@PLT
	cmp	rax, 64
	je	.L10
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 62
	mov	esi, 1
	lea	rax, .LC3[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	QWORD PTR [rax], 0
	mov	eax, -1
	jmp	.L9
.L10:
	mov	eax, 0
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	parse_ehdr, .-parse_ehdr
	.section	.rodata
	.align 8
.LC4:
	.string	"Error: File headers are empty.\n  API: `parse_phdrs`.\n"
	.align 8
.LC5:
	.string	"Error: `malloc` failed for `phdrs`.\n  API: `parse_phdrs`\n"
	.align 8
.LC6:
	.string	"Error: `fread` failed to read program headers.\n"
	.text
	.globl	parse_phdrs
	.type	parse_phdrs, @function
parse_phdrs:
.LFB8:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L12
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 53
	mov	esi, 1
	lea	rax, .LC4[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L13
.L12:
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rax, QWORD PTR 32[rax]
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 54[rax]
	mov	WORD PTR -10[rbp], ax
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 56[rax]
	mov	WORD PTR -12[rbp], ax
	movzx	edx, WORD PTR -12[rbp]
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR 8[rax]
	test	rax, rax
	jne	.L14
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 57
	mov	esi, 1
	lea	rax, .LC5[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L13
.L14:
	mov	rcx, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	movzx	edx, WORD PTR -12[rbp]
	movzx	esi, WORD PTR -10[rbp]
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	rcx, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	movzx	eax, WORD PTR -12[rbp]
	cmp	rdx, rax
	je	.L15
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 47
	mov	esi, 1
	lea	rax, .LC6[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -32[rbp]
	mov	QWORD PTR 8[rax], 0
	mov	eax, -1
	jmp	.L13
.L15:
	mov	eax, 0
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	parse_phdrs, .-parse_phdrs
	.section	.rodata
	.align 8
.LC7:
	.string	"Error: File headers are empty.\n  API: `parse_shdrs`.\n"
	.align 8
.LC8:
	.string	"Error: `malloc` failed for `shdrs`.\n  API: `parse_shdrs`\n"
	.align 8
.LC9:
	.string	"Error: `fread` failed to read section headers.\n"
	.text
	.globl	parse_shdrs
	.type	parse_shdrs, @function
parse_shdrs:
.LFB9:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L17
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 53
	mov	esi, 1
	lea	rax, .LC7[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L18
.L17:
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rax, QWORD PTR 40[rax]
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	mov	WORD PTR -10[rbp], ax
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 58[rax]
	mov	WORD PTR -12[rbp], ax
	movzx	eax, WORD PTR -10[rbp]
	sal	rax, 6
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	QWORD PTR 16[rax], rdx
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR 16[rax]
	test	rax, rax
	jne	.L19
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 57
	mov	esi, 1
	lea	rax, .LC8[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L18
.L19:
	mov	rcx, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	movzx	edx, WORD PTR -10[rbp]
	movzx	esi, WORD PTR -12[rbp]
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	rcx, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	movzx	eax, WORD PTR -10[rbp]
	cmp	rdx, rax
	je	.L20
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 47
	mov	esi, 1
	lea	rax, .LC9[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -32[rbp]
	mov	QWORD PTR 16[rax], 0
	mov	eax, -1
	jmp	.L18
.L20:
	mov	eax, 0
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	parse_shdrs, .-parse_shdrs
	.section	.rodata
	.align 8
.LC10:
	.string	"Error: ELF file headers are empty.\n  API: `parse_shstrtab`\n"
	.align 8
.LC11:
	.string	"Error: Section headers are empty.\n API: `parse_shstrtab`\n"
	.align 8
.LC12:
	.string	"Error: `malloc` failed for `r_shstrtab`.\n  API: `parse_shstrtab`\n"
	.align 8
.LC13:
	.string	"Error: Failed to parse section header string table in raw form.\n  API: `parse_shstrtab`\n"
	.align 8
.LC14:
	.string	"Error: `malloc` failed for `f_shstrtab`.\n API: `parse_shstrtab`\n"
	.text
	.globl	parse_shstrtab
	.type	parse_shstrtab, @function
parse_shstrtab:
.LFB10:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 56
	.cfi_offset 3, -24
	mov	QWORD PTR -56[rbp], rdi
	mov	QWORD PTR -64[rbp], rsi
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L22
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 59
	mov	esi, 1
	lea	rax, .LC10[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L23
.L22:
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	test	rax, rax
	jne	.L24
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 57
	mov	esi, 1
	lea	rax, .LC11[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L23
.L24:
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	mov	WORD PTR -22[rbp], ax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 62[rax]
	movzx	eax, ax
	mov	DWORD PTR -28[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -28[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -32[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -28[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -36[rbp], eax
	mov	eax, DWORD PTR -32[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -56[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -36[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 24[rax], rdx
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 24[rax]
	test	rax, rax
	jne	.L25
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 65
	mov	esi, 1
	lea	rax, .LC12[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L23
.L25:
	mov	eax, DWORD PTR -36[rbp]
	movsx	rdx, eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 24[rax]
	mov	rcx, QWORD PTR -56[rbp]
	mov	esi, 1
	mov	rdi, rax
	call	fread@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 24[rax]
	test	rax, rax
	jne	.L26
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 88
	mov	esi, 1
	lea	rax, .LC13[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 24[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 24[rax], 0
	mov	eax, -1
	jmp	.L23
.L26:
	movzx	eax, WORD PTR -22[rbp]
	sal	rax, 3
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 40[rax], rdx
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 40[rax]
	test	rax, rax
	jne	.L27
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 64
	mov	esi, 1
	lea	rax, .LC14[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L23
.L27:
	mov	DWORD PTR -20[rbp], 0
	jmp	.L28
.L29:
	mov	rax, QWORD PTR -64[rbp]
	mov	rdx, QWORD PTR 24[rax]
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	ecx, DWORD PTR -20[rbp]
	movsx	rcx, ecx
	sal	rcx, 6
	add	rax, rcx
	mov	eax, DWORD PTR [rax]
	mov	eax, eax
	add	rax, rdx
	mov	rdx, QWORD PTR -64[rbp]
	mov	rdx, QWORD PTR 40[rdx]
	mov	ecx, DWORD PTR -20[rbp]
	movsx	rcx, ecx
	sal	rcx, 3
	lea	rbx, [rdx+rcx]
	mov	rdi, rax
	call	strdup@PLT
	mov	QWORD PTR [rbx], rax
	add	DWORD PTR -20[rbp], 1
.L28:
	movzx	eax, WORD PTR -22[rbp]
	cmp	DWORD PTR -20[rbp], eax
	jl	.L29
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -36[rbp]
	mov	DWORD PTR 32[rax], edx
	movzx	edx, WORD PTR -22[rbp]
	mov	rax, QWORD PTR -64[rbp]
	mov	DWORD PTR 48[rax], edx
	mov	eax, 0
.L23:
	mov	rbx, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	parse_shstrtab, .-parse_shstrtab
	.section	.rodata
	.align 8
.LC15:
	.string	"Error: File headers are empty.\n  API: `parse_strtab`.\n"
	.align 8
.LC16:
	.string	"Error: Raw section header string table is empty.\n  API: `parse_strtab`.\n"
.LC17:
	.string	".strtab"
	.align 8
.LC18:
	.string	"Error: .strtab can not be found!\n  API: `parse_strtab`\n"
	.align 8
.LC19:
	.string	"Error: `malloc` failed for `r_strtab`.\n  API: `parse_strtab`\n"
	.align 8
.LC20:
	.string	"Error: `malloc` failed to allocate memory in heap for `strtab_entsizes`.\n"
	.align 8
.LC21:
	.string	"Error: `malloc` failed for `str_tab`.\n API: `parse_strtab`\n"
	.text
	.globl	parse_strtab
	.type	parse_strtab, @function
parse_strtab:
.LFB11:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 104
	.cfi_offset 3, -24
	mov	QWORD PTR -104[rbp], rdi
	mov	QWORD PTR -112[rbp], rsi
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L31
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 54
	mov	esi, 1
	lea	rax, .LC15[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L32
.L31:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 24[rax]
	test	rax, rax
	jne	.L33
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 72
	mov	esi, 1
	lea	rax, .LC16[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L32
.L33:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	mov	WORD PTR -74[rbp], ax
	mov	DWORD PTR -20[rbp], -1
	mov	DWORD PTR -24[rbp], 0
	mov	DWORD PTR -28[rbp], 0
	mov	DWORD PTR -32[rbp], 0
	jmp	.L34
.L37:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -32[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR [rax]
	mov	DWORD PTR -80[rbp], eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -32[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 3
	jne	.L35
	mov	rax, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 24[rax]
	mov	eax, DWORD PTR -80[rbp]
	cdqe
	add	rax, rdx
	lea	rdx, .LC17[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	strcmp@PLT
	test	eax, eax
	jne	.L35
	mov	eax, DWORD PTR -32[rbp]
	mov	DWORD PTR -20[rbp], eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -24[rbp], eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -28[rbp], eax
	jmp	.L36
.L35:
	add	DWORD PTR -32[rbp], 1
.L34:
	movzx	eax, WORD PTR -74[rbp]
	cmp	DWORD PTR -32[rbp], eax
	jl	.L37
.L36:
	cmp	DWORD PTR -20[rbp], 0
	js	.L38
	movzx	eax, WORD PTR -74[rbp]
	cmp	DWORD PTR -20[rbp], eax
	jle	.L39
.L38:
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 55
	mov	esi, 1
	lea	rax, .LC18[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L32
.L39:
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -112[rbp]
	mov	QWORD PTR 56[rax], rdx
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 56[rax]
	test	rax, rax
	jne	.L40
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 61
	mov	esi, 1
	lea	rax, .LC19[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L32
.L40:
	mov	eax, DWORD PTR -24[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -104[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -28[rbp]
	movsx	rdx, eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 56[rax]
	mov	rcx, QWORD PTR -104[rbp]
	mov	esi, 1
	mov	rdi, rax
	call	fread@PLT
	mov	DWORD PTR -36[rbp], 0
	mov	DWORD PTR -40[rbp], 0
	jmp	.L41
.L43:
	mov	rax, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 56[rax]
	mov	eax, DWORD PTR -40[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L42
	add	DWORD PTR -36[rbp], 1
.L42:
	add	DWORD PTR -40[rbp], 1
.L41:
	mov	eax, DWORD PTR -40[rbp]
	cmp	eax, DWORD PTR -28[rbp]
	jl	.L43
	mov	eax, DWORD PTR -36[rbp]
	cdqe
	sal	rax, 2
	mov	rdi, rax
	call	malloc@PLT
	mov	QWORD PTR -88[rbp], rax
	cmp	QWORD PTR -88[rbp], 0
	jne	.L44
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 73
	mov	esi, 1
	lea	rax, .LC20[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L32
.L44:
	mov	DWORD PTR -44[rbp], 0
	mov	DWORD PTR -48[rbp], 0
	mov	DWORD PTR -52[rbp], 0
	jmp	.L45
.L48:
	mov	rax, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 56[rax]
	mov	eax, DWORD PTR -52[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	je	.L46
	add	DWORD PTR -48[rbp], 1
	jmp	.L47
.L46:
	mov	eax, DWORD PTR -44[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -88[rbp]
	add	rdx, rax
	mov	eax, DWORD PTR -48[rbp]
	mov	DWORD PTR [rdx], eax
	add	DWORD PTR -44[rbp], 1
	mov	DWORD PTR -48[rbp], 0
.L47:
	add	DWORD PTR -52[rbp], 1
.L45:
	mov	eax, DWORD PTR -52[rbp]
	cmp	eax, DWORD PTR -28[rbp]
	jl	.L48
	mov	eax, DWORD PTR -36[rbp]
	cdqe
	sal	rax, 3
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -112[rbp]
	mov	QWORD PTR 72[rax], rdx
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 72[rax]
	test	rax, rax
	jne	.L49
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 59
	mov	esi, 1
	lea	rax, .LC21[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L32
.L49:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 56[rax]
	mov	QWORD PTR -64[rbp], rax
	mov	DWORD PTR -68[rbp], 0
	jmp	.L50
.L53:
	mov	eax, DWORD PTR -68[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -88[rbp]
	add	rax, rdx
	mov	eax, DWORD PTR [rax]
	add	eax, 1
	cdqe
	mov	rdx, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 72[rdx]
	mov	ecx, DWORD PTR -68[rbp]
	movsx	rcx, ecx
	sal	rcx, 3
	lea	rbx, [rdx+rcx]
	mov	rdi, rax
	call	malloc@PLT
	mov	QWORD PTR [rbx], rax
	mov	DWORD PTR -72[rbp], 0
	jmp	.L51
.L52:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 72[rax]
	mov	edx, DWORD PTR -68[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -72[rbp]
	cdqe
	add	rdx, rax
	mov	rax, QWORD PTR -64[rbp]
	movzx	eax, BYTE PTR [rax]
	mov	BYTE PTR [rdx], al
	add	QWORD PTR -64[rbp], 1
	add	DWORD PTR -72[rbp], 1
.L51:
	mov	rax, QWORD PTR -64[rbp]
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L52
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 72[rax]
	mov	edx, DWORD PTR -68[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -72[rbp]
	cdqe
	add	rax, rdx
	mov	BYTE PTR [rax], 0
	add	QWORD PTR -64[rbp], 1
	add	DWORD PTR -68[rbp], 1
.L50:
	mov	eax, DWORD PTR -68[rbp]
	cmp	eax, DWORD PTR -36[rbp]
	jl	.L53
	mov	rax, QWORD PTR -112[rbp]
	mov	edx, DWORD PTR -36[rbp]
	mov	DWORD PTR 80[rax], edx
	mov	rax, QWORD PTR -112[rbp]
	mov	edx, DWORD PTR -28[rbp]
	mov	DWORD PTR 64[rax], edx
	mov	eax, 0
.L32:
	mov	rbx, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	parse_strtab, .-parse_strtab
	.section	.rodata
	.align 8
.LC22:
	.string	"  \342\224\224\342\224\200 Error: File headers are empty.\n     API: `parse_symtab`.\n"
	.align 8
.LC23:
	.string	"  \342\224\224\342\224\200 Error: Section headers are empty.\n     API: `parse_symtab`.\n"
	.align 8
.LC24:
	.string	"  \342\224\224\342\224\200 Error: .symtab table not found.\n     API: `parse_symtab`\n"
	.align 8
.LC25:
	.string	"  \342\224\224\342\224\200 Error: `malloc` failed for `.symtab`.\n     API: `parse_symtab`\n"
	.align 8
.LC26:
	.string	"  \342\224\224\342\224\200 Error: failed to parse .symtab\n     API: `parse_symtab`\n"
	.text
	.globl	parse_symtab
	.type	parse_symtab, @function
parse_symtab:
.LFB12:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L55
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 66
	mov	esi, 1
	lea	rax, .LC22[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L56
.L55:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	test	rax, rax
	jne	.L57
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 69
	mov	esi, 1
	lea	rax, .LC23[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L56
.L57:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	movzx	eax, ax
	mov	DWORD PTR -24[rbp], eax
	mov	DWORD PTR -4[rbp], -1
	mov	DWORD PTR -8[rbp], 0
	mov	DWORD PTR -12[rbp], 0
	mov	DWORD PTR -16[rbp], 0
	mov	DWORD PTR -28[rbp], 0
	mov	DWORD PTR -20[rbp], 0
	jmp	.L58
.L60:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 2
	jne	.L59
	mov	eax, DWORD PTR -20[rbp]
	mov	DWORD PTR -4[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -8[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -12[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 56[rax]
	mov	DWORD PTR -16[rbp], eax
.L59:
	add	DWORD PTR -20[rbp], 1
.L58:
	mov	eax, DWORD PTR -20[rbp]
	cmp	eax, DWORD PTR -24[rbp]
	jl	.L60
	mov	eax, DWORD PTR -12[rbp]
	cdq
	idiv	DWORD PTR -16[rbp]
	mov	DWORD PTR -28[rbp], eax
	cmp	DWORD PTR -4[rbp], 0
	js	.L61
	mov	eax, DWORD PTR -4[rbp]
	cmp	eax, DWORD PTR -24[rbp]
	jle	.L62
.L61:
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 66
	mov	esi, 1
	lea	rax, .LC24[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L56
.L62:
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -48[rbp]
	mov	QWORD PTR 88[rax], rdx
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 88[rax]
	test	rax, rax
	jne	.L63
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 72
	mov	esi, 1
	lea	rax, .LC25[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L56
.L63:
	mov	eax, DWORD PTR -8[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -40[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -28[rbp]
	movsx	rdx, eax
	mov	eax, DWORD PTR -16[rbp]
	movsx	rsi, eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 88[rax]
	mov	rcx, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	cmp	rdx, rax
	je	.L64
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 65
	mov	esi, 1
	lea	rax, .LC26[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 88[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -48[rbp]
	mov	QWORD PTR 88[rax], 0
	mov	eax, -1
	jmp	.L56
.L64:
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -28[rbp]
	mov	DWORD PTR 96[rax], edx
	mov	eax, 0
.L56:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	parse_symtab, .-parse_symtab
	.section	.rodata
	.align 8
.LC27:
	.string	"  \342\224\224\342\224\200 Error: File headers are empty.\n     API: `parse_dynsym`.\n"
	.align 8
.LC28:
	.string	"  \342\224\224\342\224\200 Error: Section headers are empty.\n     API: `parse_dynsym`.\n"
	.align 8
.LC29:
	.string	"  \342\224\224\342\224\200 Error: .dynsym table not found.\n     API: `parse_reocations`\n"
	.align 8
.LC30:
	.string	"  \342\224\224\342\224\200 Error: `malloc` failed for `.dynsym`.\n    API: `parse_dynsym`\n"
	.align 8
.LC31:
	.string	"  \342\224\224\342\224\200 Error: failed to parse .dynsym\n     API: `parse_dynsym`\n"
	.text
	.globl	parse_dynsym
	.type	parse_dynsym, @function
parse_dynsym:
.LFB13:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L66
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 66
	mov	esi, 1
	lea	rax, .LC27[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L67
.L66:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	test	rax, rax
	jne	.L68
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 69
	mov	esi, 1
	lea	rax, .LC28[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L67
.L68:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	movzx	eax, ax
	mov	DWORD PTR -24[rbp], eax
	mov	DWORD PTR -4[rbp], -1
	mov	DWORD PTR -8[rbp], 0
	mov	DWORD PTR -12[rbp], 0
	mov	DWORD PTR -16[rbp], 0
	mov	DWORD PTR -28[rbp], 0
	mov	DWORD PTR -20[rbp], 0
	jmp	.L69
.L71:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 11
	jne	.L70
	mov	eax, DWORD PTR -20[rbp]
	mov	DWORD PTR -4[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -8[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -12[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 56[rax]
	mov	DWORD PTR -16[rbp], eax
.L70:
	add	DWORD PTR -20[rbp], 1
.L69:
	mov	eax, DWORD PTR -20[rbp]
	cmp	eax, DWORD PTR -24[rbp]
	jl	.L71
	mov	eax, DWORD PTR -12[rbp]
	cdq
	idiv	DWORD PTR -16[rbp]
	mov	DWORD PTR -28[rbp], eax
	cmp	DWORD PTR -4[rbp], 0
	js	.L72
	mov	eax, DWORD PTR -4[rbp]
	cmp	eax, DWORD PTR -24[rbp]
	jle	.L73
.L72:
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 70
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L67
.L73:
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -48[rbp]
	mov	QWORD PTR 104[rax], rdx
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 104[rax]
	test	rax, rax
	jne	.L74
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 71
	mov	esi, 1
	lea	rax, .LC30[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L67
.L74:
	mov	eax, DWORD PTR -8[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -40[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -28[rbp]
	movsx	rdx, eax
	mov	eax, DWORD PTR -16[rbp]
	movsx	rsi, eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 104[rax]
	mov	rcx, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	cmp	rdx, rax
	je	.L75
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 65
	mov	esi, 1
	lea	rax, .LC31[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 104[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -48[rbp]
	mov	QWORD PTR 104[rax], 0
	mov	eax, -1
	jmp	.L67
.L75:
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -28[rbp]
	mov	DWORD PTR 112[rax], edx
	mov	eax, 0
.L67:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	parse_dynsym, .-parse_dynsym
	.section	.rodata
	.align 8
.LC32:
	.string	"  \342\224\224\342\224\200 Error: File headers are empty.\n     API: `parse_relocations`.\n"
	.align 8
.LC33:
	.string	"  \342\224\224\342\224\200 Error: Section headers are empty.\n     API: `parse_relocations`.\n"
.LC34:
	.string	".rela.dyn"
.LC35:
	.string	".rela.plt"
	.align 8
.LC36:
	.string	"  \342\224\224\342\224\200 Error: .rela.dyn entries not found.\n     API: `parse_reocations`\n"
	.align 8
.LC37:
	.string	"  \342\224\224\342\224\200 Error: .rela.plt entries not found.\n     API: `parse_reocations`\n"
	.align 8
.LC38:
	.string	"  \342\224\224\342\224\200 Error: `malloc` failed for `rela_dyn`.\n     API: `parse_relocations`\n"
	.align 8
.LC39:
	.string	"  \342\224\224\342\224\200 Error: failed to parse .rela.dyn entries.\n     API: `parse_relocations`\n"
	.align 8
.LC40:
	.string	"  \342\224\224\342\224\200 Error: `malloc` failed for `relaplt`.\n     API: `parse_relocations`\n"
	.align 8
.LC41:
	.string	"  \342\224\224\342\224\200 Error: failed to parse .rela.plt entries.\n     API: `parse_relocations`\n"
	.text
	.globl	parse_relocations
	.type	parse_relocations, @function
parse_relocations:
.LFB14:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 64
	mov	QWORD PTR -56[rbp], rdi
	mov	QWORD PTR -64[rbp], rsi
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L77
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 71
	mov	esi, 1
	lea	rax, .LC32[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L78
.L77:
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	test	rax, rax
	jne	.L79
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 74
	mov	esi, 1
	lea	rax, .LC33[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L78
.L79:
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	movzx	eax, ax
	mov	DWORD PTR -32[rbp], eax
	mov	DWORD PTR -28[rbp], 0
	jmp	.L80
.L83:
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -28[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 4
	jne	.L81
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 40[rax]
	mov	edx, DWORD PTR -28[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rax, QWORD PTR [rax]
	lea	rdx, .LC34[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	strcmp@PLT
	test	eax, eax
	jne	.L81
	mov	eax, DWORD PTR -28[rbp]
	mov	DWORD PTR -44[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -44[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -4[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -44[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -8[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -44[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 56[rax]
	mov	DWORD PTR -12[rbp], eax
.L81:
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -28[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 4
	jne	.L82
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 40[rax]
	mov	edx, DWORD PTR -28[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rax, QWORD PTR [rax]
	lea	rdx, .LC35[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	strcmp@PLT
	test	eax, eax
	jne	.L82
	mov	eax, DWORD PTR -28[rbp]
	mov	DWORD PTR -48[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -48[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -16[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -48[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -20[rbp], eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -48[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 56[rax]
	mov	DWORD PTR -24[rbp], eax
.L82:
	add	DWORD PTR -28[rbp], 1
.L80:
	mov	eax, DWORD PTR -28[rbp]
	cmp	eax, DWORD PTR -32[rbp]
	jl	.L83
	mov	eax, DWORD PTR -8[rbp]
	cdq
	idiv	DWORD PTR -12[rbp]
	mov	DWORD PTR -36[rbp], eax
	mov	eax, DWORD PTR -20[rbp]
	cdq
	idiv	DWORD PTR -24[rbp]
	mov	DWORD PTR -40[rbp], eax
	cmp	DWORD PTR -4[rbp], 0
	jne	.L84
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 74
	mov	esi, 1
	lea	rax, .LC36[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L78
.L84:
	cmp	DWORD PTR -16[rbp], 0
	jne	.L85
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 74
	mov	esi, 1
	lea	rax, .LC37[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L78
.L85:
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 120[rax], rdx
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 120[rax]
	test	rax, rax
	jne	.L86
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 78
	mov	esi, 1
	lea	rax, .LC38[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L78
.L86:
	mov	eax, DWORD PTR -4[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -56[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -36[rbp]
	movsx	rdx, eax
	mov	eax, DWORD PTR -12[rbp]
	movsx	rsi, eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 120[rax]
	mov	rcx, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	mov	eax, DWORD PTR -36[rbp]
	cdqe
	cmp	rdx, rax
	je	.L87
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 81
	mov	esi, 1
	lea	rax, .LC39[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 120[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 120[rax], 0
	mov	eax, -1
	jmp	.L78
.L87:
	mov	eax, DWORD PTR -20[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 136[rax], rdx
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 136[rax]
	test	rax, rax
	jne	.L88
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 77
	mov	esi, 1
	lea	rax, .LC40[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L78
.L88:
	mov	eax, DWORD PTR -16[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -56[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -40[rbp]
	movsx	rdx, eax
	mov	eax, DWORD PTR -24[rbp]
	movsx	rsi, eax
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 136[rax]
	mov	rcx, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	mov	eax, DWORD PTR -40[rbp]
	cdqe
	cmp	rdx, rax
	je	.L89
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 81
	mov	esi, 1
	lea	rax, .LC41[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	rax, QWORD PTR 136[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -64[rbp]
	mov	QWORD PTR 136[rax], 0
	mov	eax, -1
	jmp	.L78
.L89:
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -36[rbp]
	mov	DWORD PTR 128[rax], edx
	mov	rax, QWORD PTR -64[rbp]
	mov	edx, DWORD PTR -40[rbp]
	mov	DWORD PTR 144[rax], edx
	mov	eax, 0
.L78:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	parse_relocations, .-parse_relocations
	.section	.rodata
	.align 8
.LC42:
	.string	"Error: File headers are empty.\n  API: `parse_dynstr`.\n"
	.align 8
.LC43:
	.string	"Error: Raw section header string table is empty.\n  API: `parse_dynstr`.\n"
.LC44:
	.string	".dynstr"
	.align 8
.LC45:
	.string	"  \342\224\224\342\224\200 Error: .dynstr table not found.\n     API: `parse_dynstr`\n"
	.align 8
.LC46:
	.string	"  \342\224\224\342\224\200 Error: malloc failed for `r_dynstr`\n     API: `parse_dynstr`\n"
	.align 8
.LC47:
	.string	"  \342\224\224\342\224\200 Error: `fread` failed to parse .dynstr\n     API: `parse_dynstr`\n"
	.align 8
.LC48:
	.string	"  \342\224\224\342\224\200 Error: `malloc` failed for `f_dynstr`.\n     API: `parse_dynstr`\n"
	.text
	.globl	parse_dynstr
	.type	parse_dynstr, @function
parse_dynstr:
.LFB15:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 104
	.cfi_offset 3, -24
	mov	QWORD PTR -104[rbp], rdi
	mov	QWORD PTR -112[rbp], rsi
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L91
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 54
	mov	esi, 1
	lea	rax, .LC42[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L92
.L91:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 24[rax]
	test	rax, rax
	jne	.L93
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 72
	mov	esi, 1
	lea	rax, .LC43[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L92
.L93:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	mov	WORD PTR -74[rbp], ax
	mov	DWORD PTR -20[rbp], -1
	mov	DWORD PTR -24[rbp], 0
	mov	DWORD PTR -28[rbp], 0
	mov	DWORD PTR -32[rbp], 0
	jmp	.L94
.L96:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -32[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 3
	jne	.L95
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 40[rax]
	mov	edx, DWORD PTR -32[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rax, QWORD PTR [rax]
	lea	rdx, .LC44[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	strcmp@PLT
	test	eax, eax
	jne	.L95
	mov	eax, DWORD PTR -32[rbp]
	mov	DWORD PTR -20[rbp], eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -32[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -24[rbp], eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -32[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -28[rbp], eax
.L95:
	add	DWORD PTR -32[rbp], 1
.L94:
	movzx	eax, WORD PTR -74[rbp]
	cmp	DWORD PTR -32[rbp], eax
	jl	.L96
	cmp	DWORD PTR -20[rbp], 0
	js	.L97
	movzx	eax, WORD PTR -74[rbp]
	cmp	DWORD PTR -20[rbp], eax
	jle	.L98
.L97:
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 66
	mov	esi, 1
	lea	rax, .LC45[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L92
.L98:
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -112[rbp]
	mov	QWORD PTR 152[rax], rdx
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 152[rax]
	test	rax, rax
	jne	.L99
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 70
	mov	esi, 1
	lea	rax, .LC46[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L92
.L99:
	mov	eax, DWORD PTR -24[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -104[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -28[rbp]
	movsx	rdx, eax
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 152[rax]
	mov	rcx, QWORD PTR -104[rbp]
	mov	esi, 1
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	cmp	rdx, rax
	je	.L100
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 73
	mov	esi, 1
	lea	rax, .LC47[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 152[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -112[rbp]
	mov	QWORD PTR 152[rax], 0
	mov	eax, -1
	jmp	.L92
.L100:
	mov	DWORD PTR -36[rbp], 0
	mov	DWORD PTR -40[rbp], 0
	jmp	.L101
.L103:
	mov	rax, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 152[rax]
	mov	eax, DWORD PTR -40[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L102
	add	DWORD PTR -36[rbp], 1
.L102:
	add	DWORD PTR -40[rbp], 1
.L101:
	mov	eax, DWORD PTR -40[rbp]
	cmp	eax, DWORD PTR -28[rbp]
	jl	.L103
	mov	DWORD PTR -44[rbp], 0
	mov	DWORD PTR -48[rbp], 0
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	QWORD PTR -88[rbp], rax
	mov	DWORD PTR -52[rbp], 0
	jmp	.L104
.L107:
	mov	rax, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 152[rax]
	mov	eax, DWORD PTR -52[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	je	.L105
	add	DWORD PTR -48[rbp], 1
	jmp	.L106
.L105:
	mov	eax, DWORD PTR -44[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -88[rbp]
	add	rdx, rax
	mov	eax, DWORD PTR -48[rbp]
	mov	DWORD PTR [rdx], eax
	add	DWORD PTR -44[rbp], 1
	mov	DWORD PTR -48[rbp], 0
.L106:
	add	DWORD PTR -52[rbp], 1
.L104:
	mov	eax, DWORD PTR -52[rbp]
	cmp	eax, DWORD PTR -28[rbp]
	jl	.L107
	mov	eax, DWORD PTR -36[rbp]
	cdqe
	sal	rax, 3
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -112[rbp]
	mov	QWORD PTR 168[rax], rdx
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 168[rax]
	test	rax, rax
	jne	.L108
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 73
	mov	esi, 1
	lea	rax, .LC48[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L92
.L108:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 152[rax]
	mov	QWORD PTR -64[rbp], rax
	mov	DWORD PTR -68[rbp], 0
	jmp	.L109
.L112:
	mov	eax, DWORD PTR -68[rbp]
	cdqe
	lea	rdx, 0[0+rax*4]
	mov	rax, QWORD PTR -88[rbp]
	add	rax, rdx
	mov	eax, DWORD PTR [rax]
	add	eax, 1
	cdqe
	mov	rdx, QWORD PTR -112[rbp]
	mov	rdx, QWORD PTR 168[rdx]
	mov	ecx, DWORD PTR -68[rbp]
	movsx	rcx, ecx
	sal	rcx, 3
	lea	rbx, [rdx+rcx]
	mov	rdi, rax
	call	malloc@PLT
	mov	QWORD PTR [rbx], rax
	mov	DWORD PTR -72[rbp], 0
	jmp	.L110
.L111:
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 168[rax]
	mov	edx, DWORD PTR -68[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -72[rbp]
	cdqe
	add	rdx, rax
	mov	rax, QWORD PTR -64[rbp]
	movzx	eax, BYTE PTR [rax]
	mov	BYTE PTR [rdx], al
	add	QWORD PTR -64[rbp], 1
	add	DWORD PTR -72[rbp], 1
.L110:
	mov	rax, QWORD PTR -64[rbp]
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L111
	mov	rax, QWORD PTR -112[rbp]
	mov	rax, QWORD PTR 168[rax]
	mov	edx, DWORD PTR -68[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -72[rbp]
	cdqe
	add	rax, rdx
	mov	BYTE PTR [rax], 0
	add	QWORD PTR -64[rbp], 1
	add	DWORD PTR -68[rbp], 1
.L109:
	mov	eax, DWORD PTR -68[rbp]
	cmp	eax, DWORD PTR -36[rbp]
	jl	.L112
	mov	rax, QWORD PTR -112[rbp]
	mov	edx, DWORD PTR -28[rbp]
	mov	DWORD PTR 160[rax], edx
	mov	rax, QWORD PTR -112[rbp]
	mov	edx, DWORD PTR -36[rbp]
	mov	DWORD PTR 176[rax], edx
	mov	eax, 0
.L92:
	mov	rbx, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	parse_dynstr, .-parse_dynstr
	.section	.rodata
	.align 8
.LC49:
	.string	"  \342\224\224\342\224\200 Error: ELF file headers are empty.\n  API: `parse_dynamic`\n"
	.align 8
.LC50:
	.string	"  \342\224\224\342\224\200 Error: Section headers are empty.\n API: `parse_dynamic`\n"
	.align 8
.LC51:
	.string	"  \342\224\224\342\224\200 Erro: `malloc` failed for `dynamic`.\n     API: `parse_dynamic`\n"
	.align 8
.LC52:
	.string	"  \342\224\224\342\224\200 Error: `fread` failed to read .dynamic.\n     API: `parse_dynamic`\n"
	.text
	.globl	parse_dynamic
	.type	parse_dynamic, @function
parse_dynamic:
.LFB16:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	jne	.L114
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 67
	mov	esi, 1
	lea	rax, .LC49[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L115
.L114:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	test	rax, rax
	jne	.L116
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 65
	mov	esi, 1
	lea	rax, .LC50[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L115
.L116:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	mov	WORD PTR -22[rbp], ax
	mov	DWORD PTR -4[rbp], -1
	mov	DWORD PTR -8[rbp], 0
	mov	DWORD PTR -12[rbp], 0
	mov	DWORD PTR -16[rbp], 0
	mov	DWORD PTR -20[rbp], 0
	jmp	.L117
.L119:
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	cmp	eax, 6
	jne	.L118
	mov	eax, DWORD PTR -20[rbp]
	mov	DWORD PTR -4[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 24[rax]
	mov	DWORD PTR -8[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 32[rax]
	mov	DWORD PTR -12[rbp], eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -20[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rax, QWORD PTR 56[rax]
	mov	DWORD PTR -16[rbp], eax
.L118:
	add	DWORD PTR -20[rbp], 1
.L117:
	movzx	eax, WORD PTR -22[rbp]
	cmp	DWORD PTR -20[rbp], eax
	jl	.L119
	mov	eax, DWORD PTR -12[rbp]
	cdq
	idiv	DWORD PTR -16[rbp]
	mov	DWORD PTR -28[rbp], eax
	cmp	DWORD PTR -4[rbp], 0
	js	.L120
	movzx	eax, WORD PTR -22[rbp]
	cmp	DWORD PTR -4[rbp], eax
	jle	.L121
.L120:
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 74
	mov	esi, 1
	lea	rax, .LC36[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L115
.L121:
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	mov	rdi, rax
	call	malloc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -48[rbp]
	mov	QWORD PTR 184[rax], rdx
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 184[rax]
	test	rax, rax
	jne	.L122
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 72
	mov	esi, 1
	lea	rax, .LC51[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L115
.L122:
	mov	eax, DWORD PTR -8[rbp]
	movsx	rcx, eax
	mov	rax, QWORD PTR -40[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	fseek@PLT
	mov	eax, DWORD PTR -28[rbp]
	movsx	rdx, eax
	mov	eax, DWORD PTR -16[rbp]
	movsx	rsi, eax
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 184[rax]
	mov	rcx, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	fread@PLT
	mov	rdx, rax
	mov	eax, DWORD PTR -28[rbp]
	cdqe
	cmp	rdx, rax
	je	.L123
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 75
	mov	esi, 1
	lea	rax, .LC52[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR 184[rax]
	mov	rdi, rax
	call	free@PLT
	mov	rax, QWORD PTR -48[rbp]
	mov	QWORD PTR 184[rax], 0
	mov	eax, -1
	jmp	.L115
.L123:
	mov	rax, QWORD PTR -48[rbp]
	mov	edx, DWORD PTR -28[rbp]
	mov	DWORD PTR 192[rax], edx
	mov	eax, 0
.L115:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	parse_dynamic, .-parse_dynamic
	.ident	"GCC: (Debian 14.2.0-19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
