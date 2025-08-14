	.file	"test.c"
	.intel_syntax noprefix
# GNU C17 (Debian 12.2.0-14+deb12u1) version 12.2.0 (x86_64-linux-gnu)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.2.0, MPC version 1.3.1, isl version isl-0.25-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -masm=intel -mtune=generic -march=x86-64 -O0 -fno-asynchronous-unwind-tables -fno-ident -fno-tree-ccp
	.text
	.globl	monkey
	.type	monkey, @function
monkey:
	push	rbp	#
	mov	rbp, rsp	#,
	mov	DWORD PTR -20[rbp], edi	# m, m
# language/test.c:4:     int rrrrrrr = m / (m + 224);
	mov	eax, DWORD PTR -20[rbp]	# tmp85, m
	lea	ecx, 224[rax]	# _1,
# language/test.c:4:     int rrrrrrr = m / (m + 224);
	mov	eax, DWORD PTR -20[rbp]	# tmp88, m
	cdq
	idiv	ecx	# _1
	mov	DWORD PTR -4[rbp], eax	# rrrrrrr, tmp86
# language/test.c:5:     return rrrrrrr;
	mov	eax, DWORD PTR -4[rbp]	# _4, rrrrrrr
# language/test.c:6: }
	pop	rbp	#
	ret	
	.size	monkey, .-monkey
	.section	.rodata
.LC0:
	.string	"%u"
	.text
	.globl	main
	.type	main, @function
main:
	push	rbp	#
	mov	rbp, rsp	#,
	sub	rsp, 16	#,
# language/test.c:9:     int x = 4234;
	mov	DWORD PTR -4[rbp], 4234	# x,
# language/test.c:10:     int s = 23234231;
	mov	DWORD PTR -8[rbp], 23234231	# s,
# language/test.c:11:     int k = x + s;
	mov	edx, DWORD PTR -4[rbp]	# tmp87, x
	mov	eax, DWORD PTR -8[rbp]	# tmp88, s
	add	eax, edx	# _1, tmp87
# language/test.c:11:     int k = x + s;
	mov	DWORD PTR -12[rbp], eax	# k, _1
# language/test.c:12:     k = monkey(k);
	mov	eax, DWORD PTR -12[rbp]	# k.0_2, k
	mov	edi, eax	#, k.0_2
	call	monkey	#
# language/test.c:12:     k = monkey(k);
	mov	DWORD PTR -12[rbp], eax	# k, _3
# language/test.c:13:     printf("%u", &k);
	lea	rax, -12[rbp]	# tmp89,
	mov	rsi, rax	#, tmp89
	lea	rax, .LC0[rip]	# tmp90,
	mov	rdi, rax	#, tmp90
	mov	eax, 0	#,
	call	printf@PLT	#
# language/test.c:14:     return 0;
	mov	eax, 0	# _11,
# language/test.c:15: }
	leave	
	ret	
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
