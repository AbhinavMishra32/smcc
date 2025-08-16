	.file	"test.c"
	.intel_syntax noprefix
	.text
	.globl	yolo
	.data
	.align 4
	.type	yolo, @object
	.size	yolo, 4
yolo:
	.long	12
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
	push	rbp
	mov	rbp, rsp
	sub	rsp, 32
	mov	DWORD PTR -4[rbp], 10
	mov	eax, DWORD PTR -4[rbp]
	add	eax, 100
	mov	DWORD PTR -8[rbp], eax
	mov	DWORD PTR -12[rbp], 32
	mov	DWORD PTR -16[rbp], 23
	mov	eax, DWORD PTR yolo[rip]
	add	eax, 234
	mov	DWORD PTR -20[rbp], eax
	mov	eax, DWORD PTR yolo[rip]
	mov	esi, eax
	lea	rax, .LC0[rip]
	mov	rdi, rax
	mov	eax, 0
	call	printf@PLT
	mov	eax, 0
	leave
	ret
	.size	main, .-main
	.section	.note.GNU-stack,"",@progbits
