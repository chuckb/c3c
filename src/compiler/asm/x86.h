

typedef enum
{
	X86_CC,
	X86_DF,
	X86_RAX,
	X86_RBX,
	X86_RCX,
	X86_RDX,
	X86_RSP,
	X86_RSI,
	X86_RDI,
	X86_R8,
	X86_R9,
	X86_R10,
	X86_R11,
	X86_R12,
	X86_R13,
	X86_R14,
	X86_R15,
	X86_XMM0,
	X86_XMM1,
	X86_XMM2,
	X86_XMM3,
	X86_XMM4,
	X86_XMM5,
	X86_XMM6,
	X86_XMM7,
	X86_XMM8,
	X86_XMM9,
	X86_XMM10,
	X86_XMM11,
	X86_XMM12,
	X86_XMM13,
	X86_XMM14,
	X86_XMM15,
	X86_K0,
	X86_K1,
	X86_K2,
	X86_K3,
	X86_K4,
	X86_K5,
	X86_K6,
	X86_K7,
	X86_ST0,
	X86_ST1,
	X86_ST2,
	X86_ST3,
	X86_ST4,
	X86_ST5,
	X86_ST6,
	X86_ST7,
	X86_MM0,
	X86_MM1,
	X86_MM2,
	X86_MM3,
	X86_MM4,
	X86_MM5,
	X86_MM6,
	X86_MM7,
	X86_TMM0,
	X86_TMM1,
	X86_TMM2,
	X86_TMM3,
	X86_TMM4,
	X86_TMM5,
	X86_TMM6,
	X86_TMM7,
} X86Clobbers;



static const char *X86ClobberNames[] = {
		[X86_CC] = "cc",
		[X86_RAX] = "rax",
		[X86_RBX] = "rbx",
		[X86_RCX] = "rcx",
		[X86_RDX] = "rdx",
		[X86_RSP] = "rsp",
		[X86_RSI] = "rsi",
		[X86_RDI] = "rdi",
		[X86_R8] = "r8",
		[X86_R9] = "r9",
		[X86_R10] = "r10",
		[X86_R11] = "r11",
		[X86_R12] = "r12",
		[X86_R13] = "r13",
		[X86_R14] = "r14",
		[X86_R15] = "r15",
		[X86_XMM0]  = "xmm0",
		[X86_XMM1]  = "xmm1",
		[X86_XMM2]  = "xmm2",
		[X86_XMM3]  = "xmm3",
		[X86_XMM4]  = "xmm4",
		[X86_XMM5]  = "xmm5",
		[X86_XMM6]  = "xmm6",
		[X86_XMM7]  = "xmm7",
		[X86_XMM8]  = "xmm8",
		[X86_XMM9]  = "xmm9",
		[X86_XMM10] = "xmm10",
		[X86_XMM11] = "xmm11",
		[X86_XMM12] = "xmm12",
		[X86_XMM13] = "xmm13",
		[X86_XMM14] = "xmm14",
		[X86_XMM15] = "xmm15",
		[X86_K0] = "k0",
		[X86_K1] = "k1",
		[X86_K2] = "k2",
		[X86_K3] = "k3",
		[X86_K4] = "k4",
		[X86_K5] = "k5",
		[X86_K6] = "k6",
		[X86_K7] = "k7",
		[X86_ST0] = "st0",
		[X86_ST1] = "st1",
		[X86_ST2] = "st2",
		[X86_ST3] = "st3",
		[X86_ST4] = "st4",
		[X86_ST5] = "st5",
		[X86_ST6] = "st6",
		[X86_ST7] = "st7",
		[X86_MM0] = "mm0",
		[X86_MM1] = "mm1",
		[X86_MM2] = "mm2",
		[X86_MM3] = "mm3",
		[X86_MM4] = "mm4",
		[X86_MM5] = "mm5",
		[X86_MM6] = "mm6",
		[X86_MM7] = "mm7",
		[X86_TMM0] = "tmm0",
		[X86_TMM1] = "tmm1",
		[X86_TMM2] = "tmm2",
		[X86_TMM3] = "tmm3",
		[X86_TMM4] = "tmm4",
		[X86_TMM5] = "tmm5",
		[X86_TMM6] = "tmm6",
		[X86_TMM7] = "tmm7",
};

static const char *x64_quad_regs[] = { "$rax", "$rbx", "$rcx", "$rdx", "$rsp",
									   "$rbp", "$rsi", "$rdi", "$r8", "$r9",
									   "$r10", "$r11", "$r12", "$r13", "$r14", "$r15" };
static const char *x86_long_regs[] = { "$eax", "$ebx", "$ecx", "$edx", "$esp",
									   "$ebp", "$esi", "$edi", "$r8d", "$r9d",
									   "$r10d", "$r11d", "$r12d", "$r13d", "$r14d", "$r15d" };
static const char *x86_word_regs[] = { "$ax", "$bx", "$cx", "$dx", "$sp",
									   "$bp", "$si", "$di", "$r8w", "$r9w",
									   "$r10w", "$r11w", "$r12w", "$r13w", "$r14w", "$r15w" };
static const char *x86_low_byte_regs[] = { "$al", "$bl", "$cl", "$dl",
										   "$spl", "$bpl", "$sil", "$dil", "$r8b", "$r9b",
										   "$r10b", "$r11b", "$r12b", "$r13b", "$r14b", "$r15b" };
static const char *x86_high_byte_regs[] = { "$ah", "$bh", "$ch", "$dh" };

static const char *x86_float_regs[] = { "$st0", "$st1", "$st2", "$st3", "$st4", "$st5", "$st6", "$st7" };

static const char *x86_xmm_regs[] = { "$xmm0", "$xmm1", "$xmm2", "$xmm3", "$xmm4", "$xmm5", "$xmm6", "$xmm7",
									  "$xmm8", "$xmm9", "$xmm10", "$xmm11", "$xmm12", "$xmm13", "$xmm14", "$xmm15" };

static const char *x86_ymm_regs[] = { "$ymm0", "$ymm1", "$ymm2", "$ymm3", "$ymm4", "$ymm5", "$ymm6", "$ymm7",
									  "$ymm8", "$ymm9", "$ymm10", "$ymm11", "$ymm12", "$ymm13", "$ymm14", "$ymm15" };

static const char *x86_zmm_regs[] = { "$zmm0", "$zmm1", "$zmm2", "$zmm3", "$zmm4", "$zmm5", "$zmm6", "$zmm7",
									  "$zmm8", "$zmm9", "$zmm10", "$zmm11", "$zmm12", "$zmm13", "$zmm14", "$zmm15" };
