	.file	"struct.c"
	.intel_syntax noprefix
# GNU C17 (Debian 12.2.0-14+deb12u1) version 12.2.0 (x86_64-linux-gnu)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.2.0, MPC version 1.3.1, isl version isl-0.25-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -masm=intel -mtune=generic -march=x86-64 -O0 -fno-asynchronous-unwind-tables -fno-ident -fno-tree-ccp
	.text
	.globl	adder
	.type	adder, @function
adder:
	push	rbp	#
	mov	rbp, rsp	#,
	mov	QWORD PTR -24[rbp], rdi	# t, t
# language/prac/struct.c:9:   int r = t.first + t.second;
	mov	edx, DWORD PTR -24[rbp]	# _1, t.first
# language/prac/struct.c:9:   int r = t.first + t.second;
	mov	eax, DWORD PTR -20[rbp]	# _2, t.second
# language/prac/struct.c:9:   int r = t.first + t.second;
	add	eax, edx	# tmp86, _1
	mov	DWORD PTR -4[rbp], eax	# r, tmp86
# language/prac/struct.c:10:   return r;
	mov	eax, DWORD PTR -4[rbp]	# _5, r
# language/prac/struct.c:11: }
	pop	rbp	#
	ret	
	.size	adder, .-adder
	.section	.rodata
.LC0:
	.string	"Result!!!!: %d"
	.text
	.globl	main
	.type	main, @function
main:
	push	rbp	#
	mov	rbp, rsp	#,
	sub	rsp, 16	#,
# language/prac/struct.c:15:   tn.first = 12;
	mov	DWORD PTR -12[rbp], 12	# tn.first,
# language/prac/struct.c:16:   tn.second = 18;
	mov	DWORD PTR -8[rbp], 18	# tn.second,
# language/prac/struct.c:18:   int k = adder(tn);
	mov	rax, QWORD PTR -12[rbp]	# tmp84, tn
	mov	rdi, rax	#, tmp84
	call	adder	#
	mov	DWORD PTR -4[rbp], eax	# k, tmp85
# language/prac/struct.c:19:   printf("Result!!!!: %d", k);
	mov	eax, DWORD PTR -4[rbp]	# tmp86, k
	mov	esi, eax	#, tmp86
	lea	rax, .LC0[rip]	# tmp87,
	mov	rdi, rax	#, tmp87
	mov	eax, 0	#,
	call	printf@PLT	#
	mov	eax, 0	# _8,
# language/prac/struct.c:20: }
	leave	
	ret	
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
