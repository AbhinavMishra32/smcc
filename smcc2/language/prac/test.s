	.file	"test.c"
	.intel_syntax noprefix
# GNU C17 (Debian 12.2.0-14+deb12u1) version 12.2.0 (x86_64-linux-gnu)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.2.0, MPC version 1.3.1, isl version isl-0.25-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -masm=intel -mtune=generic -march=x86-64 -O0 -fno-asynchronous-unwind-tables -fno-ident -fno-tree-ccp
	.text
	.section	.rodata
.LC0:
	.string	"YOOOOOO"
	.text
	.globl	main
	.type	main, @function

main:
	push	rbp	#
	mov	rbp, rsp	#,
	sub	rsp, 16	#,
# language/prac/test.c:4:   int a = 10;
	mov	DWORD PTR -4[rbp], 10	# a,
# language/prac/test.c:5:   if (a <= 10) {
	cmp	DWORD PTR -4[rbp], 10	# a,
	jg	.L2	#,
# language/prac/test.c:6:     printf("YOOOOOO");
	lea	rax, .LC0[rip]	# tmp84,
	mov	rdi, rax	#, tmp84
	mov	eax, 0	#,
	call	printf@PLT	#
.L2:
# language/prac/test.c:8:   return 0;
	mov	eax, 0	# _5,
# language/prac/test.c:9: }
	leave	
	ret	
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
