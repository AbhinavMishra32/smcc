.text
.globl _start

_start:
    movq $1, %rax    # syscall: exit
    movq $42, %rdi   # status: 42
    syscall          # invoke syscall
