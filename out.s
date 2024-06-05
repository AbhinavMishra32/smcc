	.text
.LC0:
	.string	"%d\n"
printint:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	%edi, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, %esi
	leal	.LC0, %edi
	movl	$0, %eax
	call	printf
	nop
	leave
	ret

	.globl	main
main:
	pushl	%ebp
	movl	%esp, %ebp
	movl	$2, %eax
	movl	$3, %ebx
	movl	$5, %ecx
	imull	%ebx, %ecx
	addl	%eax, %ecx
	movl	$8, %eax
	movl	$3, %ebx
	movl	%eax, %eax
	cltd
	idivl	%ebx
	movl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %edi
	call	printint
	movl	$0, %eax
	popl	%ebp
	ret
