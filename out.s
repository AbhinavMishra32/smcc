.section .rodata
.LC0:
    .string "%d\n"

.text
.globl printint
printint:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp
    movl %edi, -4(%rbp)
    movl -4(%rbp), %eax
    movl %eax, %esi
    leaq .LC0(%rip), %rdi
    movl $0, %eax
    call printf
    nop
    leave
    ret

.globl main
main:
    pushq %rbp
    movq %rsp, %rbp

    # Test with a known value
    movq $42, %rdi  # Load 42 into rdi (argument for printint)
    call printint   # Call printint to print 42

    # Exit
    movl $0, %eax
    popq %rbp
    ret
