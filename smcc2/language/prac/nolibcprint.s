section .data
msg: db "Hello", 10
len: equ $ - msg

section .text
global _start

_start:
    ; syscall: write(int fd, const void *buf, size_t count)
    mov rax, 1          ; syscall number 1 = sys_write
    mov rdi, 1          ; fd = 1 (stdout)
    mov rsi, msg        ; pointer to message
    mov rdx, len        ; message length
    syscall

    ; syscall: exit(int status)
    mov rax, 60         ; syscall number 60 = sys_exit
    xor rdi, rdi        ; exit status 0
    syscall
