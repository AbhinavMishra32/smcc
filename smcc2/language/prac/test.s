	.file	"test.c"
	.intel_syntax noprefix
# GNU C17 (Debian 12.2.0-14+deb12u1) version 12.2.0 (x86_64-linux-gnu)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.2.0, MPC version 1.3.1, isl version isl-0.25-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -masm=intel -mtune=generic -march=x86-64 -O2 -fasynchronous-unwind-tables
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC3:
	.string	"%d"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	sub	rsp, 4008	#,
	.cfi_def_cfa_offset 4016
# language/prac/test.c:3: int main(){
	movdqa	xmm1, XMMWORD PTR .LC0[rip]	# vect_vec_iv_.4,
	movdqa	xmm3, XMMWORD PTR .LC1[rip]	# tmp96,
	movdqa	xmm2, XMMWORD PTR .LC2[rip]	# tmp97,
	mov	rax, rsp	# ivtmp.11,
	lea	rdx, 4000[rsp]	# _3,
	.p2align 4,,10
	.p2align 3
.L2:
	movdqa	xmm0, xmm1	# vect_vec_iv_.4, vect_vec_iv_.4
	add	rax, 16	# ivtmp.11,
	paddd	xmm1, xmm3	# vect_vec_iv_.4, tmp96
# language/prac/test.c:9:     arr2[i] = arr[i] + 10;
	paddd	xmm0, xmm2	# vect__1.5, tmp97
# language/prac/test.c:9:     arr2[i] = arr[i] + 10;
	movaps	XMMWORD PTR -16[rax], xmm0	# MEM <vector(4) int> [(int *)_9], vect__1.5
	cmp	rdx, rax	# _3, ivtmp.11
	jne	.L2	#,
# language/prac/test.c:12:   printf("%d", arr2[500]);
	mov	esi, DWORD PTR 2000[rsp]	#, arr2[500]
	lea	rdi, .LC3[rip]	# tmp94,
	xor	eax, eax	#
	call	printf@PLT	#
# language/prac/test.c:15: }
	xor	eax, eax	#
	add	rsp, 4008	#,
	.cfi_def_cfa_offset 8
	ret	
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.long	0
	.long	1
	.long	2
	.long	3
	.align 16
.LC1:
	.long	4
	.long	4
	.long	4
	.long	4
	.align 16
.LC2:
	.long	10
	.long	10
	.long	10
	.long	10
	.ident	"GCC: (Debian 12.2.0-14+deb12u1) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
