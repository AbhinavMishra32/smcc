section .bss
    buf resb 1

section .data
    newline db 10

section .text
    global _start

_start:
    ; read 1 byte from stdin (fd = 0)
    mov rax, 0          ; sys_read
    mov rdi, 0          ; stdin fd
    mov rsi, buf        ; buffer to read ito
    mov rdx, 1          ; read 1 byte
    syscall

    ; write 1 byte to stdout (fd = 1)
    mov rax, 1
    mov rdi, 1
    mov rsi, buf
    mov rdx, 1
    syscall

    mov rax, 1
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    syscall

    ; exit cleanly
    mov rax, 60
    xor rdi, rdi
    syscall