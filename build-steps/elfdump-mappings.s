	.file	"mappings.c"
	.intel_syntax noprefix
	.text
	.globl	d_ehtypes
	.section	.rodata
.LC0:
	.string	"ET_NONE"
.LC1:
	.string	"ET_REL"
.LC2:
	.string	"ET_EXEC"
.LC3:
	.string	"ET_DYN"
.LC4:
	.string	"ET_CORE"
.LC5:
	.string	"ET_NUM"
	.section	.data.rel.local,"aw"
	.align 32
	.type	d_ehtypes, @object
	.size	d_ehtypes, 96
d_ehtypes:
	.quad	0
	.quad	.LC0
	.quad	1
	.quad	.LC1
	.quad	2
	.quad	.LC2
	.quad	3
	.quad	.LC3
	.quad	4
	.quad	.LC4
	.quad	5
	.quad	.LC5
	.globl	d_ehmachines
	.section	.rodata
.LC6:
	.string	"EM_NONE"
.LC7:
	.string	"EM_386"
.LC8:
	.string	"EM_860"
.LC9:
	.string	"EM_960"
.LC10:
	.string	"EM_ARM"
.LC11:
	.string	"EM_X86_64"
.LC12:
	.string	"EM_AARCH64"
.LC13:
	.string	"EM_RISCV"
	.section	.data.rel.local
	.align 32
	.type	d_ehmachines, @object
	.size	d_ehmachines, 128
d_ehmachines:
	.quad	0
	.quad	.LC6
	.quad	3
	.quad	.LC7
	.quad	7
	.quad	.LC8
	.quad	19
	.quad	.LC9
	.quad	40
	.quad	.LC10
	.quad	62
	.quad	.LC11
	.quad	183
	.quad	.LC12
	.quad	243
	.quad	.LC13
	.globl	d_phtypes
	.section	.rodata
.LC14:
	.string	"PT_NULL"
.LC15:
	.string	"PT_LOAD"
.LC16:
	.string	"PT_DYNAMIC"
.LC17:
	.string	"PT_INTERP"
.LC18:
	.string	"PT_NOTE"
.LC19:
	.string	"PT_SHLIB"
.LC20:
	.string	"PT_PHDR"
.LC21:
	.string	"PT_TLS"
.LC22:
	.string	"PT_NUM"
.LC23:
	.string	"PT_LOOS"
.LC24:
	.string	"PT_GNU_EH_FRAME"
.LC25:
	.string	"PT_GNU_STACK"
.LC26:
	.string	"PT_GNU_RELRO"
.LC27:
	.string	"PT_GNU_PROPERTY"
.LC28:
	.string	"PT_GNU_SFRAME"
.LC29:
	.string	"PT_LOSUNW"
.LC30:
	.string	"PT_SUNWBSS"
.LC31:
	.string	"PT_SUNWSTACK"
.LC32:
	.string	"PT_HISUNW"
.LC33:
	.string	"PT_HIOS"
.LC34:
	.string	"PT_LOPROC"
.LC35:
	.string	"PT_HIPROC"
	.section	.data.rel.local
	.align 32
	.type	d_phtypes, @object
	.size	d_phtypes, 352
d_phtypes:
	.quad	0
	.quad	.LC14
	.quad	1
	.quad	.LC15
	.quad	2
	.quad	.LC16
	.quad	3
	.quad	.LC17
	.quad	4
	.quad	.LC18
	.quad	5
	.quad	.LC19
	.quad	6
	.quad	.LC20
	.quad	7
	.quad	.LC21
	.quad	8
	.quad	.LC22
	.quad	1610612736
	.quad	.LC23
	.quad	1685382480
	.quad	.LC24
	.quad	1685382481
	.quad	.LC25
	.quad	1685382482
	.quad	.LC26
	.quad	1685382483
	.quad	.LC27
	.quad	1685382484
	.quad	.LC28
	.quad	1879048186
	.quad	.LC29
	.quad	1879048186
	.quad	.LC30
	.quad	1879048187
	.quad	.LC31
	.quad	1879048191
	.quad	.LC32
	.quad	1879048191
	.quad	.LC33
	.quad	1879048192
	.quad	.LC34
	.quad	2147483647
	.quad	.LC35
	.globl	d_phflags
	.section	.rodata
.LC36:
	.string	"PF_X "
.LC37:
	.string	"PF_W "
.LC38:
	.string	"PF_R "
	.section	.data.rel.local
	.align 32
	.type	d_phflags, @object
	.size	d_phflags, 48
d_phflags:
	.quad	1
	.quad	.LC36
	.quad	2
	.quad	.LC37
	.quad	4
	.quad	.LC38
	.globl	d_shtypes
	.section	.rodata
.LC39:
	.string	"SHT_NULL"
.LC40:
	.string	"SHT_PROGBITS"
.LC41:
	.string	"SHT_SYMTAB"
.LC42:
	.string	"SHT_STRTAB"
.LC43:
	.string	"SHT_RELA"
.LC44:
	.string	"SHT_HASH"
.LC45:
	.string	"SHT_DYNAMIC"
.LC46:
	.string	"SHT_NOTE"
.LC47:
	.string	"SHT_NOBITS"
.LC48:
	.string	"SHT_REL"
.LC49:
	.string	"SHT_SHLIB"
.LC50:
	.string	"SHT_DYNSYM"
.LC51:
	.string	"SHT_INIT_ARRAY"
.LC52:
	.string	"SHT_FINI_ARRAY"
.LC53:
	.string	"SHT_PREINIT_ARRAY"
.LC54:
	.string	"SHT_GROUP"
.LC55:
	.string	"SHT_SYMTAB_SHNDX"
.LC56:
	.string	"SHT_RELR"
.LC57:
	.string	"SHT_LOOS"
.LC58:
	.string	"SHT_GNU_ATTRIBUTES"
.LC59:
	.string	"SHT_GNU_HASH"
.LC60:
	.string	"SHT_GNU_LIBLIST"
.LC61:
	.string	"SHT_CHECKSUM"
.LC62:
	.string	"SHT_LOSUNW"
.LC63:
	.string	"SHT_SUNW_move"
.LC64:
	.string	"SHT_SUNW_COMDAT"
.LC65:
	.string	"SHT_SUNW_syminfo"
.LC66:
	.string	"SHT_GNU_verdef"
.LC67:
	.string	"SHT_GNU_verneed"
.LC68:
	.string	"SHT_GNU_versym"
.LC69:
	.string	"SHT_HISUNW"
.LC70:
	.string	"SHT_HIOS"
.LC71:
	.string	"SHT_LOPROC"
.LC72:
	.string	"SHT_HIPROC"
.LC73:
	.string	"SHT_LOUSER"
.LC74:
	.string	"SHT_HIUSER"
	.section	.data.rel.local
	.align 32
	.type	d_shtypes, @object
	.size	d_shtypes, 576
d_shtypes:
	.quad	0
	.quad	.LC39
	.quad	1
	.quad	.LC40
	.quad	2
	.quad	.LC41
	.quad	3
	.quad	.LC42
	.quad	4
	.quad	.LC43
	.quad	5
	.quad	.LC44
	.quad	6
	.quad	.LC45
	.quad	7
	.quad	.LC46
	.quad	8
	.quad	.LC47
	.quad	9
	.quad	.LC48
	.quad	10
	.quad	.LC49
	.quad	11
	.quad	.LC50
	.quad	14
	.quad	.LC51
	.quad	15
	.quad	.LC52
	.quad	16
	.quad	.LC53
	.quad	17
	.quad	.LC54
	.quad	18
	.quad	.LC55
	.quad	19
	.quad	.LC56
	.quad	1610612736
	.quad	.LC57
	.quad	1879048181
	.quad	.LC58
	.quad	1879048182
	.quad	.LC59
	.quad	1879048183
	.quad	.LC60
	.quad	1879048184
	.quad	.LC61
	.quad	1879048186
	.quad	.LC62
	.quad	1879048186
	.quad	.LC63
	.quad	1879048187
	.quad	.LC64
	.quad	1879048188
	.quad	.LC65
	.quad	1879048189
	.quad	.LC66
	.quad	1879048190
	.quad	.LC67
	.quad	1879048191
	.quad	.LC68
	.quad	1879048191
	.quad	.LC69
	.quad	1879048191
	.quad	.LC70
	.quad	1879048192
	.quad	.LC71
	.quad	2147483647
	.quad	.LC72
	.quad	2147483648
	.quad	.LC73
	.quad	2415919103
	.quad	.LC74
	.globl	d_shflags
	.section	.rodata
.LC75:
	.string	"SHF_WRITE "
.LC76:
	.string	"SHF_ALLOC "
.LC77:
	.string	"SHF_EXECINSTR "
.LC78:
	.string	"SHF_MERGE "
.LC79:
	.string	"SHF_STRINGS "
.LC80:
	.string	"SHF_INFO_LINK "
.LC81:
	.string	"SHF_LINK_ORDER "
.LC82:
	.string	"SHF_OS_NONCONFORMING "
.LC83:
	.string	"SHF_GROUP "
.LC84:
	.string	"SHF_TLS "
.LC85:
	.string	"SHF_COMPRESSED "
.LC86:
	.string	"SHF_MASKOS "
.LC87:
	.string	"SHF_MASKPROC "
.LC88:
	.string	"SHF_GNU_RETAIN "
.LC89:
	.string	"SHF_ORDERED "
.LC90:
	.string	"SHF_EXCLUDE "
	.section	.data.rel.local
	.align 32
	.type	d_shflags, @object
	.size	d_shflags, 256
d_shflags:
	.quad	1
	.quad	.LC75
	.quad	2
	.quad	.LC76
	.quad	4
	.quad	.LC77
	.quad	16
	.quad	.LC78
	.quad	32
	.quad	.LC79
	.quad	64
	.quad	.LC80
	.quad	128
	.quad	.LC81
	.quad	256
	.quad	.LC82
	.quad	512
	.quad	.LC83
	.quad	1024
	.quad	.LC84
	.quad	2048
	.quad	.LC85
	.quad	267386880
	.quad	.LC86
	.quad	4026531840
	.quad	.LC87
	.quad	2097152
	.quad	.LC88
	.quad	1073741824
	.quad	.LC89
	.quad	2147483648
	.quad	.LC90
	.globl	d_sttypes
	.section	.rodata
.LC91:
	.string	"STT_NOTYPE"
.LC92:
	.string	"STT_OBJECT"
.LC93:
	.string	"STT_FUNC"
.LC94:
	.string	"STT_SECTION"
.LC95:
	.string	"STT_FILE"
.LC96:
	.string	"STT_COMMON"
.LC97:
	.string	"STT_TLS"
	.section	.data.rel.local
	.align 32
	.type	d_sttypes, @object
	.size	d_sttypes, 112
d_sttypes:
	.quad	0
	.quad	.LC91
	.quad	1
	.quad	.LC92
	.quad	2
	.quad	.LC93
	.quad	3
	.quad	.LC94
	.quad	4
	.quad	.LC95
	.quad	5
	.quad	.LC96
	.quad	6
	.quad	.LC97
	.globl	d_stbinds
	.section	.rodata
.LC98:
	.string	"STB_LOCAL"
.LC99:
	.string	"STB_GLOBAL"
.LC100:
	.string	"STB_WEAK"
.LC101:
	.string	"STB_GNU_UNIQUE"
	.section	.data.rel.local
	.align 32
	.type	d_stbinds, @object
	.size	d_stbinds, 64
d_stbinds:
	.quad	0
	.quad	.LC98
	.quad	1
	.quad	.LC99
	.quad	2
	.quad	.LC100
	.quad	10
	.quad	.LC101
	.globl	d_stvisible
	.section	.rodata
.LC102:
	.string	"STV_DEFAULT"
.LC103:
	.string	"STV_INTERNAL"
.LC104:
	.string	"STV_HIDDEN"
.LC105:
	.string	"STV_PROTECTED"
	.section	.data.rel.local
	.align 32
	.type	d_stvisible, @object
	.size	d_stvisible, 64
d_stvisible:
	.quad	0
	.quad	.LC102
	.quad	1
	.quad	.LC103
	.quad	2
	.quad	.LC104
	.quad	3
	.quad	.LC105
	.globl	rtypes
	.section	.rodata
.LC106:
	.string	"R_X86_64_NONE"
.LC107:
	.string	"R_X86_64_64"
.LC108:
	.string	"R_X86_64_PC32"
.LC109:
	.string	"R_X86_64_GOT32"
.LC110:
	.string	"R_X86_64_PLT32"
.LC111:
	.string	"R_X86_64_COPY"
.LC112:
	.string	"R_X86_64_GLOB_DAT"
.LC113:
	.string	"R_X86_64_JUMP_SLOT"
.LC114:
	.string	"R_X86_64_RELATIVE"
.LC115:
	.string	"R_X86_64_GOTPCREL"
.LC116:
	.string	"R_X86_64_32"
.LC117:
	.string	"R_X86_64_32S"
.LC118:
	.string	"R_X86_64_16"
.LC119:
	.string	"R_X86_64_PC16"
.LC120:
	.string	"R_X86_64_8"
.LC121:
	.string	"R_X86_64_PC8"
.LC122:
	.string	"R_X86_64_DTPMOD64"
.LC123:
	.string	"R_X86_64_DTPOFF64"
.LC124:
	.string	"R_X86_64_TPOFF64"
.LC125:
	.string	"R_X86_64_TLSGD"
.LC126:
	.string	"R_X86_64_TLSLD"
.LC127:
	.string	"R_X86_64_DTPOFF32"
.LC128:
	.string	"R_X86_64_GOTTPOFF"
.LC129:
	.string	"R_X86_64_TPOFF32"
.LC130:
	.string	"R_X86_64_PC64"
.LC131:
	.string	"R_X86_64_GOTOFF64"
.LC132:
	.string	"R_X86_64_GOTPC32"
.LC133:
	.string	"R_X86_64_GOT64"
.LC134:
	.string	"R_X86_64_GOTPCREL64"
.LC135:
	.string	"R_X86_64_GOTPC64"
.LC136:
	.string	"R_X86_64_GOTPLT64"
.LC137:
	.string	"R_X86_64_PLTOFF64"
.LC138:
	.string	"R_X86_64_SIZE32"
.LC139:
	.string	"R_X86_64_SIZE64"
.LC140:
	.string	"R_X86_64_GOTPC32_TLSDESC"
.LC141:
	.string	"R_X86_64_TLSDESC_CALL"
.LC142:
	.string	"R_X86_64_TLSDESC"
.LC143:
	.string	"R_X86_64_IRELATIVE"
.LC144:
	.string	"R_X86_64_RELATIVE64"
.LC145:
	.string	"R_X86_64_GOTPCRELX"
.LC146:
	.string	"R_X86_64_REX_GOTPCRELX"
.LC147:
	.string	"R_X86_64_NUM"
	.section	.data.rel.local
	.align 32
	.type	rtypes, @object
	.size	rtypes, 672
rtypes:
	.quad	0
	.quad	.LC106
	.quad	1
	.quad	.LC107
	.quad	2
	.quad	.LC108
	.quad	3
	.quad	.LC109
	.quad	4
	.quad	.LC110
	.quad	5
	.quad	.LC111
	.quad	6
	.quad	.LC112
	.quad	7
	.quad	.LC113
	.quad	8
	.quad	.LC114
	.quad	9
	.quad	.LC115
	.quad	10
	.quad	.LC116
	.quad	11
	.quad	.LC117
	.quad	12
	.quad	.LC118
	.quad	13
	.quad	.LC119
	.quad	14
	.quad	.LC120
	.quad	15
	.quad	.LC121
	.quad	16
	.quad	.LC122
	.quad	17
	.quad	.LC123
	.quad	18
	.quad	.LC124
	.quad	19
	.quad	.LC125
	.quad	20
	.quad	.LC126
	.quad	21
	.quad	.LC127
	.quad	22
	.quad	.LC128
	.quad	23
	.quad	.LC129
	.quad	24
	.quad	.LC130
	.quad	25
	.quad	.LC131
	.quad	26
	.quad	.LC132
	.quad	27
	.quad	.LC133
	.quad	28
	.quad	.LC134
	.quad	29
	.quad	.LC135
	.quad	30
	.quad	.LC136
	.quad	31
	.quad	.LC137
	.quad	32
	.quad	.LC138
	.quad	33
	.quad	.LC139
	.quad	34
	.quad	.LC140
	.quad	35
	.quad	.LC141
	.quad	36
	.quad	.LC142
	.quad	37
	.quad	.LC143
	.quad	38
	.quad	.LC144
	.quad	41
	.quad	.LC145
	.quad	42
	.quad	.LC146
	.quad	43
	.quad	.LC147
	.globl	d_dtypes
	.section	.rodata
.LC148:
	.string	"DT_NULL"
.LC149:
	.string	"DT_NEEDED"
.LC150:
	.string	"DT_PLTRELSZ"
.LC151:
	.string	"DT_PLTGOT"
.LC152:
	.string	"DT_HASH"
.LC153:
	.string	"DT_STRTAB"
.LC154:
	.string	"DT_SYMTAB"
.LC155:
	.string	"DT_RELA"
.LC156:
	.string	"DT_RELASZ"
.LC157:
	.string	"DT_RELAENT"
.LC158:
	.string	"DT_STRSZ"
.LC159:
	.string	"DT_SYMENT"
.LC160:
	.string	"DT_INIT"
.LC161:
	.string	"DT_FINI"
.LC162:
	.string	"DT_SONAME"
.LC163:
	.string	"DT_RPATH"
.LC164:
	.string	"DT_SYMBOLIC"
.LC165:
	.string	"DT_REL"
.LC166:
	.string	"DT_RELSZ"
.LC167:
	.string	"DT_RELENT"
.LC168:
	.string	"DT_PLTREL"
.LC169:
	.string	"DT_DEBUG"
.LC170:
	.string	"DT_TEXTREL"
.LC171:
	.string	"DT_JMPREL"
.LC172:
	.string	"DT_BIND_NOW"
.LC173:
	.string	"DT_INIT_ARRAY"
.LC174:
	.string	"DT_FINI_ARRAY"
.LC175:
	.string	"DT_INIT_ARRAYSZ"
.LC176:
	.string	"DT_FINI_ARRAYSZ"
.LC177:
	.string	"DT_RUNPATH"
.LC178:
	.string	"DT_FLAGS"
.LC179:
	.string	"DT_ENCODING"
.LC180:
	.string	"DT_PREINIT_ARRAY"
.LC181:
	.string	"DT_PREINIT_ARRAYSZ"
.LC182:
	.string	"DT_SYMTAB_SHNDX"
.LC183:
	.string	"DT_RELRSZ"
.LC184:
	.string	"DT_RELR"
.LC185:
	.string	"DT_RELRENT"
.LC186:
	.string	"DT_VERSYM"
.LC187:
	.string	"DT_RELACOUNT"
.LC188:
	.string	"DT_RELCOUNT"
.LC189:
	.string	"DT_FLAGS_1"
.LC190:
	.string	"DT_VERDEF"
.LC191:
	.string	"DT_VERDEFNUM"
.LC192:
	.string	"DT_VERNEED"
.LC193:
	.string	"DT_VERNEEDNUM"
.LC194:
	.string	"DT_GNU_HASH"
	.section	.data.rel.local
	.align 32
	.type	d_dtypes, @object
	.size	d_dtypes, 752
d_dtypes:
	.quad	0
	.quad	.LC148
	.quad	1
	.quad	.LC149
	.quad	2
	.quad	.LC150
	.quad	3
	.quad	.LC151
	.quad	4
	.quad	.LC152
	.quad	5
	.quad	.LC153
	.quad	6
	.quad	.LC154
	.quad	7
	.quad	.LC155
	.quad	8
	.quad	.LC156
	.quad	9
	.quad	.LC157
	.quad	10
	.quad	.LC158
	.quad	11
	.quad	.LC159
	.quad	12
	.quad	.LC160
	.quad	13
	.quad	.LC161
	.quad	14
	.quad	.LC162
	.quad	15
	.quad	.LC163
	.quad	16
	.quad	.LC164
	.quad	17
	.quad	.LC165
	.quad	18
	.quad	.LC166
	.quad	19
	.quad	.LC167
	.quad	20
	.quad	.LC168
	.quad	21
	.quad	.LC169
	.quad	22
	.quad	.LC170
	.quad	23
	.quad	.LC171
	.quad	24
	.quad	.LC172
	.quad	25
	.quad	.LC173
	.quad	26
	.quad	.LC174
	.quad	27
	.quad	.LC175
	.quad	28
	.quad	.LC176
	.quad	29
	.quad	.LC177
	.quad	30
	.quad	.LC178
	.quad	32
	.quad	.LC179
	.quad	32
	.quad	.LC180
	.quad	33
	.quad	.LC181
	.quad	34
	.quad	.LC182
	.quad	35
	.quad	.LC183
	.quad	36
	.quad	.LC184
	.quad	37
	.quad	.LC185
	.quad	1879048176
	.quad	.LC186
	.quad	1879048185
	.quad	.LC187
	.quad	1879048186
	.quad	.LC188
	.quad	1879048187
	.quad	.LC189
	.quad	1879048188
	.quad	.LC190
	.quad	1879048189
	.quad	.LC191
	.quad	1879048190
	.quad	.LC192
	.quad	1879048191
	.quad	.LC193
	.quad	1879047925
	.quad	.LC194
	.ident	"GCC: (Debian 14.2.0-19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
