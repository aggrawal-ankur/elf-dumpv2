	.file	"dump.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"w"
.LC1:
	.string	"./output/dump.c"
	.align 8
.LC2:
	.string	"Error: `f_obj` failed.\n  Inside `general_dump`\n"
	.align 8
.LC3:
	.string	"/* This is the raw C-style dump! */\n\n"
	.align 8
.LC4:
	.string	"/* Header file to obtain ELF type definitions. */\n"
.LC5:
	.string	"#include <elf.h>\n\n"
	.text
	.globl	general_dump
	.type	general_dump, @function
general_dump:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	lea	rax, .LC0[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -8[rbp], rax
	cmp	QWORD PTR -8[rbp], 0
	jne	.L2
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 47
	mov	esi, 1
	lea	rax, .LC2[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L3
.L2:
	mov	rax, QWORD PTR -8[rbp]
	mov	rcx, rax
	mov	edx, 37
	mov	esi, 1
	lea	rax, .LC3[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rcx, rax
	mov	edx, 50
	mov	esi, 1
	lea	rax, .LC4[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rcx, rax
	mov	edx, 18
	mov	esi, 1
	lea	rax, .LC5[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	general_dump, .-general_dump
	.section	.rodata
.LC6:
	.string	"a"
	.align 8
.LC7:
	.string	"Error: `f_obj` failed.\n  Inside `dump_ehdr`\n"
	.align 8
.LC8:
	.string	"/* ELF file header (ehdr) dump. */\n"
.LC9:
	.string	"Elf64_Ehdr ehdr = {\n"
	.align 8
.LC10:
	.string	"  /* e_ident[16] */     {\n    "
.LC11:
	.string	""
.LC12:
	.string	", "
.LC13:
	.string	"0x%02x%s"
.LC14:
	.string	"\n  },\n"
	.align 8
.LC15:
	.string	"  /* e_type        */     %u        /* %s */,\n"
	.align 8
.LC16:
	.string	"  /* e_machine     */     %u       /* %s */,\n"
.LC17:
	.string	"EV_CURRENT"
	.align 8
.LC18:
	.string	"  /* e_version     */     %u        /* %s */,\n"
	.align 8
.LC19:
	.string	"  /* e_ehsize      */     %u       /* size in decimal bytes */,\n"
	.align 8
.LC20:
	.string	"  /* e_entry       */     %lu,    /* bytes (in decimal) in the binary */\n"
	.align 8
.LC21:
	.string	"  /* e_phoff       */     %lu       /* bytes (in decimal) in the binary */,\n"
	.align 8
.LC22:
	.string	"  /* e_phnum       */     %u,\n"
	.align 8
.LC23:
	.string	"  /* e_phentsize   */     %u       /* size in decimal bytes */,\n"
	.align 8
.LC24:
	.string	"  /* e_shoff       */     %lu    /* bytes (in decimal) in the binary */,\n"
	.align 8
.LC25:
	.string	"  /* e_shnum       */     %u,\n"
	.align 8
.LC26:
	.string	"  /* e_shentsize   */     %u,      /* size in decimal bytes */\n"
	.align 8
.LC27:
	.string	"  /* e_shstrndx    */     %u,\n"
	.align 8
.LC28:
	.string	"  /* e_flags       */     %u,\n"
.LC29:
	.string	"};\n\n\n"
	.text
	.globl	dump_ehdr
	.type	dump_ehdr, @function
dump_ehdr:
.LFB1:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -24[rbp], rax
	cmp	QWORD PTR -24[rbp], 0
	jne	.L5
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 44
	mov	esi, 1
	lea	rax, .LC7[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L6
.L5:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 35
	mov	esi, 1
	lea	rax, .LC8[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 20
	mov	esi, 1
	lea	rax, .LC9[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 30
	mov	esi, 1
	lea	rax, .LC10[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L7
.L10:
	cmp	DWORD PTR -4[rbp], 15
	jne	.L8
	lea	rax, .LC11[rip]
	jmp	.L9
.L8:
	lea	rax, .LC12[rip]
.L9:
	mov	rdx, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR [rdx]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	movzx	edx, BYTE PTR [rcx+rdx]
	movzx	edx, dl
	mov	rdi, QWORD PTR -24[rbp]
	mov	rcx, rax
	lea	rax, .LC13[rip]
	mov	rsi, rax
	mov	eax, 0
	call	fprintf@PLT
	add	DWORD PTR -4[rbp], 1
.L7:
	cmp	DWORD PTR -4[rbp], 15
	jle	.L10
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 6
	mov	esi, 1
	lea	rax, .LC14[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L11
.L14:
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_ehtypes[rip]
	mov	rdx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 16[rax]
	movzx	eax, ax
	cmp	rdx, rax
	jne	.L12
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_ehtypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 16[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC15[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L13
.L12:
	add	DWORD PTR -8[rbp], 1
.L11:
	cmp	DWORD PTR -8[rbp], 4
	jle	.L14
.L13:
	mov	DWORD PTR -12[rbp], 0
	jmp	.L15
.L18:
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_ehmachines[rip]
	mov	rdx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 18[rax]
	movzx	eax, ax
	cmp	rdx, rax
	jne	.L16
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_ehmachines[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 18[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC16[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L17
.L16:
	add	DWORD PTR -12[rbp], 1
.L15:
	cmp	DWORD PTR -12[rbp], 7
	jle	.L18
.L17:
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	mov	edx, DWORD PTR 20[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC17[rip]
	lea	rsi, .LC18[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 52[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC19[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR 24[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC20[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR 32[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC21[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 56[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC22[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 54[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC23[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR 40[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC24[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC25[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 58[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC26[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 62[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC27[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	mov	edx, DWORD PTR 48[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC28[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	dump_ehdr, .-dump_ehdr
	.section	.rodata
.LC30:
	.string	"output/dump.c"
	.align 8
.LC31:
	.string	"Error: `f_obj` failed.  Inside `dump_phdrs`\n "
	.align 8
.LC32:
	.string	"/* Program headers (phdrs) dump. */\n"
.LC33:
	.string	"Elf64_Phdr phdrs = {\n"
.LC34:
	.string	"  {\n"
	.align 8
.LC35:
	.string	"    /* p_type      */     %u      /* %s */,\n"
	.align 8
.LC36:
	.string	"    /* p_flags     */     %u      /* "
.LC37:
	.string	" */,\n"
	.align 8
.LC38:
	.string	"    /* p_offset    */     %lu      /* bytes (in decimal) in the binary */,\n"
	.align 8
.LC39:
	.string	"    /* p_vaddr     */     %lu,\n"
	.align 8
.LC40:
	.string	"    /* p_paddr     */     %lu,\n"
	.align 8
.LC41:
	.string	"    /* p_filesz    */     %lu      /* size in (decimal) bytes */,\n"
	.align 8
.LC42:
	.string	"    /* p_memsz     */     %lu      /* size in (decimal) bytes */,\n"
	.align 8
.LC43:
	.string	"    /* p_align     */     %lu,\n"
.LC44:
	.string	"  },\n"
	.text
	.globl	dump_phdrs
	.type	dump_phdrs, @function
dump_phdrs:
.LFB2:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC30[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L20
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 45
	mov	esi, 1
	lea	rax, .LC31[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L21
.L20:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 36
	mov	esi, 1
	lea	rax, .LC32[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 21
	mov	esi, 1
	lea	rax, .LC33[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L22
.L30:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L23
.L26:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	eax, DWORD PTR [rax]
	mov	ecx, eax
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_phtypes[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L24
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_phtypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rsi
	mov	edx, DWORD PTR [rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rsi, .LC35[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L25
.L24:
	add	DWORD PTR -8[rbp], 1
.L23:
	cmp	DWORD PTR -8[rbp], 21
	jle	.L26
.L25:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	edx, DWORD PTR 4[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC36[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	eax, DWORD PTR 4[rax]
	mov	edx, eax
	mov	rax, QWORD PTR d_phflags[rip]
	and	rax, rdx
	test	rax, rax
	je	.L27
	mov	rdx, QWORD PTR d_phflags[rip+8]
	mov	rax, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L27:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	eax, DWORD PTR 4[rax]
	mov	edx, eax
	mov	rax, QWORD PTR d_phflags[rip+16]
	and	rax, rdx
	test	rax, rax
	je	.L28
	mov	rdx, QWORD PTR d_phflags[rip+24]
	mov	rax, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L28:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	eax, DWORD PTR 4[rax]
	mov	edx, eax
	mov	rax, QWORD PTR d_phflags[rip+32]
	and	rax, rdx
	test	rax, rax
	je	.L29
	mov	rdx, QWORD PTR d_phflags[rip+40]
	mov	rax, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L29:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC37[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC38[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC39[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 24[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC40[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 32[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC41[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 40[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC42[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	sal	rax, 3
	sub	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 48[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC43[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -4[rbp], 1
.L22:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 56[rax]
	movzx	eax, ax
	cmp	DWORD PTR -4[rbp], eax
	jl	.L30
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L21:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	dump_phdrs, .-dump_phdrs
	.section	.rodata
	.align 8
.LC45:
	.string	"Error: `f_obj` failed. Inside `dump_shdrs`\n"
	.align 8
.LC46:
	.string	"/* Section headers (shdrs) dump. */\n"
.LC47:
	.string	"Elf64_Shdr shdrs = {\n"
	.align 8
.LC48:
	.string	"    /* sh_name         */     %u       /* offset (in decimal) in section header string table */ ,\n"
	.align 8
.LC49:
	.string	"    /* sh_type         */     %u         /* %s */,\n"
	.align 8
.LC50:
	.string	"    /* sh_flags        */     %lu         /* "
	.align 8
.LC51:
	.string	"    /* sh_addr         */     %lu     /* Section virtual addr at execution (in decimal) */,\n"
	.align 8
.LC52:
	.string	"    /* sh_offset       */     %lu     /* bytes (in decimal) in the binary */,\n"
	.align 8
.LC53:
	.string	"    /* sh_size         */     %lu         /* in bytes (decimal) */,\n"
	.align 8
.LC54:
	.string	"    /* sh_link         */     %u,\n"
	.align 8
.LC55:
	.string	"    /* sh_info         */     %u,\n"
	.align 8
.LC56:
	.string	"    /* sh_addralign    */     %lu,\n"
	.align 8
.LC57:
	.string	"    /* sh_entsize      */     %lu         /* in bytes (decimal) */,\n"
	.text
	.globl	dump_shdrs
	.type	dump_shdrs, @function
dump_shdrs:
.LFB3:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC30[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -24[rbp], rax
	cmp	QWORD PTR -24[rbp], 0
	jne	.L32
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 43
	mov	esi, 1
	lea	rax, .LC45[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L33
.L32:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 36
	mov	esi, 1
	lea	rax, .LC46[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 21
	mov	esi, 1
	lea	rax, .LC47[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L34
.L42:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	edx, DWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC48[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L35
.L38:
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	eax, DWORD PTR 4[rax]
	mov	ecx, eax
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_shtypes[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L36
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_shtypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	edx, DWORD PTR 4[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC49[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L37
.L36:
	add	DWORD PTR -8[rbp], 1
.L35:
	cmp	DWORD PTR -8[rbp], 35
	jle	.L38
.L37:
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC50[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	DWORD PTR -12[rbp], 0
	jmp	.L39
.L41:
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rcx, QWORD PTR 8[rax]
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_shflags[rip]
	mov	rax, QWORD PTR [rdx+rax]
	and	rax, rcx
	test	rax, rax
	je	.L40
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_shflags[rip+8]
	mov	rdx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L40:
	add	DWORD PTR -12[rbp], 1
.L39:
	cmp	DWORD PTR -12[rbp], 15
	jle	.L41
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC37[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC51[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rdx, QWORD PTR 24[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC52[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rdx, QWORD PTR 32[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC53[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	edx, DWORD PTR 40[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC54[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	edx, DWORD PTR 44[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC55[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rdx, QWORD PTR 48[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC56[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR 16[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 6
	add	rax, rdx
	mov	rdx, QWORD PTR 56[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC57[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -4[rbp], 1
.L34:
	mov	rax, QWORD PTR -40[rbp]
	mov	rax, QWORD PTR [rax]
	movzx	eax, WORD PTR 60[rax]
	movzx	eax, ax
	cmp	DWORD PTR -4[rbp], eax
	jl	.L42
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	dump_shdrs, .-dump_shdrs
	.section	.rodata
	.align 8
.LC58:
	.string	"Error: `f_obj` failed.\n  Inside `dump_shstrtab`\n"
	.align 8
.LC59:
	.string	"/* Section header string table (.shstrtab) flat-dump. */\n"
.LC60:
	.string	"char* r_shstrtab = {\n  "
.LC61:
	.string	"'\\0', "
.LC62:
	.string	"'%c', "
.LC63:
	.string	"\n};\n\n"
	.align 8
.LC64:
	.string	"/* Section header string table (.shstrtab) formatted-dump. */\n"
.LC65:
	.string	"char** f_shstrtab = {\n"
.LC66:
	.string	"  \"%s\",\n"
	.text
	.globl	dump_shstrtab
	.type	dump_shstrtab, @function
dump_shstrtab:
.LFB4:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L44
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 48
	mov	esi, 1
	lea	rax, .LC58[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L45
.L44:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 57
	mov	esi, 1
	lea	rax, .LC59[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 23
	mov	esi, 1
	lea	rax, .LC60[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L46
.L49:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 24[rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L47
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 6
	mov	esi, 1
	lea	rax, .LC61[rip]
	mov	rdi, rax
	call	fwrite@PLT
	jmp	.L48
.L47:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 24[rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	movsx	edx, al
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC62[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L48:
	add	DWORD PTR -4[rbp], 1
.L46:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 32[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L49
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC63[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 62
	mov	esi, 1
	lea	rax, .LC64[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 22
	mov	esi, 1
	lea	rax, .LC65[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L50
.L51:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 40[rax]
	mov	edx, DWORD PTR -8[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC66[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	add	DWORD PTR -8[rbp], 1
.L50:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 48[rax]
	cmp	DWORD PTR -8[rbp], eax
	jl	.L51
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L45:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	dump_shstrtab, .-dump_shstrtab
	.section	.rodata
	.align 8
.LC67:
	.string	"Error: `f_obj` failed.\n  Inside `dump_strtab`\n"
	.align 8
.LC68:
	.string	"/* String table (.strtab) flat-dump. */\n"
.LC69:
	.string	"char* r_strtab = {\n  "
	.align 8
.LC70:
	.string	"/* String table (.strtab) formatted-dump. */\n"
.LC71:
	.string	"char** f_strtab = {\n"
	.text
	.globl	dump_strtab
	.type	dump_strtab, @function
dump_strtab:
.LFB5:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L53
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 46
	mov	esi, 1
	lea	rax, .LC67[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L54
.L53:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 40
	mov	esi, 1
	lea	rax, .LC68[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 21
	mov	esi, 1
	lea	rax, .LC69[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L55
.L58:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 56[rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L56
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 6
	mov	esi, 1
	lea	rax, .LC61[rip]
	mov	rdi, rax
	call	fwrite@PLT
	jmp	.L57
.L56:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 56[rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	movsx	edx, al
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC62[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L57:
	add	DWORD PTR -4[rbp], 1
.L55:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 64[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L58
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC63[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 45
	mov	esi, 1
	lea	rax, .LC70[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 20
	mov	esi, 1
	lea	rax, .LC71[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L59
.L60:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 72[rax]
	mov	edx, DWORD PTR -8[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC66[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	add	DWORD PTR -8[rbp], 1
.L59:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 80[rax]
	cmp	DWORD PTR -8[rbp], eax
	jl	.L60
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L54:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	dump_strtab, .-dump_strtab
	.section	.rodata
	.align 8
.LC72:
	.string	"Error: `f_obj` failed.\n  Inside `dump_symtab`\n"
	.align 8
.LC73:
	.string	"/* Symbol table (.symtab) dump. */\n"
.LC74:
	.string	"Elf64_Sym symtab = {\n"
	.align 8
.LC75:
	.string	"    /* looped_idx   */     %d,     /* loop counter */\n"
	.align 8
.LC76:
	.string	"    /* st_name      */     %u,     /* offset (decimal ) in .strtab */\n\n"
	.align 8
.LC77:
	.string	"    /* st_info      */ {          /* %d */\n"
	.align 8
.LC78:
	.string	"      /* type       */     %d,     /* %s */\n"
	.align 8
.LC79:
	.string	"      /* binding    */     %d,     /* %s */\n"
.LC80:
	.string	"    },\n\n"
	.align 8
.LC81:
	.string	"    /* st_other     */     %d,     /* symbol visibility, %s */\n"
	.align 8
.LC82:
	.string	"    /* st_shdx      */     %u,     /* section (idx) it is present in */\n"
	.align 8
.LC83:
	.string	"    /* st_value     */     %lu,     /* symbol value (in decimal) */\n"
	.align 8
.LC84:
	.string	"    /* st_size      */     %lu,     /* symbol size (in decimal) */\n"
	.text
	.globl	dump_symtab
	.type	dump_symtab, @function
dump_symtab:
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -24[rbp], rax
	cmp	QWORD PTR -24[rbp], 0
	jne	.L62
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 46
	mov	esi, 1
	lea	rax, .LC72[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L63
.L62:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 35
	mov	esi, 1
	lea	rax, .LC73[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 21
	mov	esi, 1
	lea	rax, .LC74[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L64
.L77:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	edx, DWORD PTR -4[rbp]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC75[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	edx, DWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC76[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 4[rax]
	movzx	edx, al
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC77[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L65
.L68:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 4[rax]
	movzx	eax, al
	and	eax, 15
	mov	rcx, rax
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_sttypes[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L66
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_sttypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	movzx	eax, BYTE PTR 4[rax]
	movzx	eax, al
	and	eax, 15
	mov	edx, eax
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC78[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L67
.L66:
	add	DWORD PTR -8[rbp], 1
.L65:
	cmp	DWORD PTR -8[rbp], 6
	jle	.L68
.L67:
	mov	DWORD PTR -12[rbp], 0
	jmp	.L69
.L72:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 4[rax]
	shr	al, 4
	movzx	edx, al
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rcx, rax
	lea	rax, d_stbinds[rip]
	mov	rax, QWORD PTR [rcx+rax]
	cmp	rdx, rax
	jne	.L70
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_stbinds[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	movzx	eax, BYTE PTR 4[rax]
	shr	al, 4
	movzx	edx, al
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC79[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L71
.L70:
	add	DWORD PTR -12[rbp], 1
.L69:
	cmp	DWORD PTR -12[rbp], 3
	jle	.L72
.L71:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 8
	mov	esi, 1
	lea	rax, .LC80[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -16[rbp], 0
	jmp	.L73
.L76:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 5[rax]
	movzx	eax, al
	and	eax, 3
	mov	rcx, rax
	mov	eax, DWORD PTR -16[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_stvisible[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L74
	mov	eax, DWORD PTR -16[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_stvisible[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	movzx	eax, BYTE PTR 5[rax]
	movzx	edx, al
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC81[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L75
.L74:
	add	DWORD PTR -16[rbp], 1
.L73:
	cmp	DWORD PTR -16[rbp], 3
	jle	.L76
.L75:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, WORD PTR 6[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC82[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC83[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 88[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC84[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -4[rbp], 1
.L64:
	mov	rax, QWORD PTR -40[rbp]
	mov	eax, DWORD PTR 96[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L77
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L63:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	dump_symtab, .-dump_symtab
	.section	.rodata
	.align 8
.LC85:
	.string	"Error: `f_obj` failed.\n  Inside `dump_dynsym`\n"
	.align 8
.LC86:
	.string	"/* Dynamic Symbol table (.dynsym) dump. */\n"
.LC87:
	.string	"Elf64_Sym dynsym = {\n"
	.text
	.globl	dump_dynsym
	.type	dump_dynsym, @function
dump_dynsym:
.LFB7:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -24[rbp], rax
	cmp	QWORD PTR -24[rbp], 0
	jne	.L79
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 46
	mov	esi, 1
	lea	rax, .LC85[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L80
.L79:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 43
	mov	esi, 1
	lea	rax, .LC86[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 21
	mov	esi, 1
	lea	rax, .LC87[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L81
.L94:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	edx, DWORD PTR -4[rbp]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC75[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	edx, DWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC76[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 4[rax]
	movzx	edx, al
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC77[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L82
.L85:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 4[rax]
	movzx	eax, al
	and	eax, 15
	mov	rcx, rax
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_sttypes[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L83
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_sttypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	movzx	eax, BYTE PTR 4[rax]
	movzx	eax, al
	and	eax, 15
	mov	edx, eax
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC78[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L84
.L83:
	add	DWORD PTR -8[rbp], 1
.L82:
	cmp	DWORD PTR -8[rbp], 6
	jle	.L85
.L84:
	mov	DWORD PTR -12[rbp], 0
	jmp	.L86
.L89:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 4[rax]
	shr	al, 4
	movzx	edx, al
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rcx, rax
	lea	rax, d_stbinds[rip]
	mov	rax, QWORD PTR [rcx+rax]
	cmp	rdx, rax
	jne	.L87
	mov	eax, DWORD PTR -12[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_stbinds[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	movzx	eax, BYTE PTR 4[rax]
	shr	al, 4
	movzx	edx, al
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC79[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L88
.L87:
	add	DWORD PTR -12[rbp], 1
.L86:
	cmp	DWORD PTR -12[rbp], 3
	jle	.L89
.L88:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 8
	mov	esi, 1
	lea	rax, .LC80[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -16[rbp], 0
	jmp	.L90
.L93:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, BYTE PTR 5[rax]
	movzx	eax, al
	and	eax, 3
	mov	rcx, rax
	mov	eax, DWORD PTR -16[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_stvisible[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L91
	mov	eax, DWORD PTR -16[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_stvisible[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	movzx	eax, BYTE PTR 5[rax]
	movzx	edx, al
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC81[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L92
.L91:
	add	DWORD PTR -16[rbp], 1
.L90:
	cmp	DWORD PTR -16[rbp], 3
	jle	.L93
.L92:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	movzx	eax, WORD PTR 6[rax]
	movzx	edx, ax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC82[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC83[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 104[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC84[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -4[rbp], 1
.L81:
	mov	rax, QWORD PTR -40[rbp]
	mov	eax, DWORD PTR 112[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L94
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L80:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	dump_dynsym, .-dump_dynsym
	.section	.rodata
	.align 8
.LC88:
	.string	"Error: `f_obj` failed.\n  Inside `dump_relocations`\n"
	.align 8
.LC89:
	.string	"/* Eager Binding Relocations Table (.rela.dyn) dump. */\n"
.LC90:
	.string	"Elf64_Rela rela_dyn = {\n"
	.align 8
.LC91:
	.string	"    /* r_offset       */     %lu       /* offset (in decimal) in the binary */,\n\n"
	.align 8
.LC92:
	.string	"    /* r_info         */ {               /* %lx,\n"
	.align 8
.LC93:
	.string	"      /* rel_type     */     %lu           /* %s */,\n"
	.align 8
.LC94:
	.string	"      /* sym_idx      */     %lu,\n"
	.align 8
.LC95:
	.string	"    /* r_addend       */     %li,\n"
.LC96:
	.string	"};\n\n"
	.align 8
.LC97:
	.string	"/* Lazy Binding Relocations Table (.rela.plt) dump. */\n"
.LC98:
	.string	"Elf64_Rela rela_plt = {\n"
	.text
	.globl	dump_relocations
	.type	dump_relocations, @function
dump_relocations:
.LFB8:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -24[rbp], rax
	cmp	QWORD PTR -24[rbp], 0
	jne	.L96
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 51
	mov	esi, 1
	lea	rax, .LC88[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L97
.L96:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 56
	mov	esi, 1
	lea	rax, .LC89[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 24
	mov	esi, 1
	lea	rax, .LC90[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L98
.L103:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC91[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC92[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L99
.L102:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rax, QWORD PTR 8[rax]
	mov	ecx, eax
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, rtypes[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L100
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, rtypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	mov	rax, QWORD PTR 8[rax]
	mov	edx, eax
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC93[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L101
.L100:
	add	DWORD PTR -8[rbp], 1
.L99:
	cmp	DWORD PTR -8[rbp], 39
	jle	.L102
.L101:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rax, QWORD PTR 8[rax]
	shr	rax, 32
	mov	rdx, rax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC94[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 8
	mov	esi, 1
	lea	rax, .LC80[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -4[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC95[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -4[rbp], 1
.L98:
	mov	rax, QWORD PTR -40[rbp]
	mov	eax, DWORD PTR 128[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L103
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC96[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 55
	mov	esi, 1
	lea	rax, .LC97[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 24
	mov	esi, 1
	lea	rax, .LC98[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -12[rbp], 0
	jmp	.L104
.L109:
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 120[rax]
	mov	eax, DWORD PTR -12[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC91[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 136[rax]
	mov	eax, DWORD PTR -12[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC92[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	DWORD PTR -16[rbp], 0
	jmp	.L105
.L108:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 136[rax]
	mov	eax, DWORD PTR -12[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rax, QWORD PTR 8[rax]
	mov	ecx, eax
	mov	eax, DWORD PTR -16[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, rtypes[rip]
	mov	rax, QWORD PTR [rdx+rax]
	cmp	rcx, rax
	jne	.L106
	mov	eax, DWORD PTR -16[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, rtypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR 136[rax]
	mov	eax, DWORD PTR -12[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rsi
	mov	rax, QWORD PTR 8[rax]
	mov	edx, eax
	mov	rax, QWORD PTR -24[rbp]
	lea	rsi, .LC93[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L107
.L106:
	add	DWORD PTR -16[rbp], 1
.L105:
	cmp	DWORD PTR -16[rbp], 39
	jle	.L108
.L107:
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 136[rax]
	mov	eax, DWORD PTR -12[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rax, QWORD PTR 8[rax]
	shr	rax, 32
	mov	rdx, rax
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC94[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 8
	mov	esi, 1
	lea	rax, .LC80[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR 136[rax]
	mov	eax, DWORD PTR -12[rbp]
	movsx	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 3
	add	rax, rcx
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	lea	rcx, .LC95[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -12[rbp], 1
.L104:
	mov	rax, QWORD PTR -40[rbp]
	mov	eax, DWORD PTR 144[rax]
	cmp	DWORD PTR -12[rbp], eax
	jl	.L109
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L97:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	dump_relocations, .-dump_relocations
	.section	.rodata
	.align 8
.LC99:
	.string	"Error: `f_obj` failed.\n  Inside `dump_dynstr`\n"
	.align 8
.LC100:
	.string	"/* Dynamic String Table (.dynstr) flat-dump. */\n"
.LC101:
	.string	"char* r_dynstr = {\n  "
	.align 8
.LC102:
	.string	"/* Dynamic String Table (.dynstr) formatted-dump. */\n"
.LC103:
	.string	"char** f_dynstr = {\n"
	.text
	.globl	dump_dynstr
	.type	dump_dynstr, @function
dump_dynstr:
.LFB9:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L111
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 46
	mov	esi, 1
	lea	rax, .LC99[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L112
.L111:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 48
	mov	esi, 1
	lea	rax, .LC100[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 21
	mov	esi, 1
	lea	rax, .LC101[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L113
.L116:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 152[rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L114
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 6
	mov	esi, 1
	lea	rax, .LC61[rip]
	mov	rdi, rax
	call	fwrite@PLT
	jmp	.L115
.L114:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 152[rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	movsx	edx, al
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC62[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
.L115:
	add	DWORD PTR -4[rbp], 1
.L113:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 160[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L116
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC63[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 53
	mov	esi, 1
	lea	rax, .LC102[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 20
	mov	esi, 1
	lea	rax, .LC103[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L117
.L118:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 168[rax]
	mov	edx, DWORD PTR -8[rbp]
	movsx	rdx, edx
	sal	rdx, 3
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC66[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	add	DWORD PTR -8[rbp], 1
.L117:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 176[rax]
	cmp	DWORD PTR -8[rbp], eax
	jl	.L118
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC29[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L112:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	dump_dynstr, .-dump_dynstr
	.section	.rodata
.LC104:
	.string	"/* Dynamic section dump. */\n"
.LC105:
	.string	"Elf64_Dyn dynamic = {\n"
	.align 8
.LC106:
	.string	"    /* d_tag */        %li    /* entry type, %s */,\n"
.LC107:
	.string	"    /* d_un  */   {\n"
	.align 8
.LC108:
	.string	"      /* d_ptr */      %lu    /* address value (in decimal) */,\n"
	.align 8
.LC109:
	.string	"      /* d_val */      %lu    /* integer value,  */,\n"
.LC110:
	.string	"    }\n"
	.text
	.globl	dump_dynamic
	.type	dump_dynamic, @function
dump_dynamic:
.LFB10:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	lea	rax, .LC6[rip]
	mov	rsi, rax
	lea	rax, .LC1[rip]
	mov	rdi, rax
	call	fopen@PLT
	mov	QWORD PTR -16[rbp], rax
	cmp	QWORD PTR -16[rbp], 0
	jne	.L120
	mov	rax, QWORD PTR stderr[rip]
	mov	rcx, rax
	mov	edx, 46
	mov	esi, 1
	lea	rax, .LC99[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	eax, -1
	jmp	.L121
.L120:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 28
	mov	esi, 1
	lea	rax, .LC104[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 22
	mov	esi, 1
	lea	rax, .LC105[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -4[rbp], 0
	jmp	.L122
.L127:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC34[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	DWORD PTR -8[rbp], 0
	jmp	.L123
.L126:
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 184[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 4
	add	rax, rdx
	mov	rax, QWORD PTR [rax]
	mov	edx, DWORD PTR -8[rbp]
	movsx	rdx, edx
	mov	rcx, rdx
	sal	rcx, 4
	lea	rdx, d_dtypes[rip]
	mov	rdx, QWORD PTR [rcx+rdx]
	cmp	rax, rdx
	jne	.L124
	mov	eax, DWORD PTR -8[rbp]
	cdqe
	sal	rax, 4
	mov	rdx, rax
	lea	rax, d_dtypes[rip+8]
	mov	rcx, QWORD PTR [rdx+rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 184[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 4
	add	rax, rdx
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rsi, .LC106[rip]
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	jmp	.L125
.L124:
	add	DWORD PTR -8[rbp], 1
.L123:
	cmp	DWORD PTR -8[rbp], 46
	jle	.L126
.L125:
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 20
	mov	esi, 1
	lea	rax, .LC107[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 184[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 4
	add	rax, rdx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC108[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 184[rax]
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	sal	rdx, 4
	add	rax, rdx
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -16[rbp]
	lea	rcx, .LC109[rip]
	mov	rsi, rcx
	mov	rdi, rax
	mov	eax, 0
	call	fprintf@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 6
	mov	esi, 1
	lea	rax, .LC110[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 5
	mov	esi, 1
	lea	rax, .LC44[rip]
	mov	rdi, rax
	call	fwrite@PLT
	add	DWORD PTR -4[rbp], 1
.L122:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 192[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L127
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, rax
	mov	edx, 4
	mov	esi, 1
	lea	rax, .LC96[rip]
	mov	rdi, rax
	call	fwrite@PLT
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	fclose@PLT
	mov	eax, 0
.L121:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	dump_dynamic, .-dump_dynamic
	.ident	"GCC: (Debian 14.2.0-19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
