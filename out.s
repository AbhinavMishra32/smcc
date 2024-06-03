	.text
.LC0:
	.string	"%d\n"
printint:
	push	{r4, r5, r6, lr}
	mov	r5, r0
	ldr	r0, .L3
	add	r1, sp, #12
	mov	r2, r5
	bl	printf
	pop	{r4, r5, r6, pc}
	.align	2
.L3:
	.word	%d
	.globl	main
	.type	main, %function
main:
	push	{r4, lr}
	add	r4, sp, #0
	mov r8, #2
	mov r9, #3
	mov r10, #5
	mul r10, r10, r9
	add r10, r10, r8
	mov r8, #8
	mov r9, #3
	mov r8, r8
	mov r9, r9
	bl __aeabi_idiv
	mov r8, r8
	sub r10, r10, r8
	mov r10, r0
	bl printint
	mov	r0, #0
	pop	{r4, pc}
