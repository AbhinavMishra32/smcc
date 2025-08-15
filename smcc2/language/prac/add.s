section .bss
    outbuf resb 3           ; reserver 2 digits + newline

section .data
    num1 db 2
    num2 db 5
    newline db 10

section .text
    global _start


_start:
    ; Load num1 and num2 into registers (zero-extend bytes to full register)
    movzx rax, byte [num1]
    movzx rbx, byte [num2]

    ; Add them
    add rax, rbx

    ; Convert sum to ASCII by adding 48
    add rax, 48

    ; Store the ASCII character in outbuf
    mov [outbuf], al

    ; Write syscall to print outbuf
    mov rax, 1
    mov rdi, 1
    mov rsi, outbuf
    mov rdx, 1
    syscall

    mov rax, 1
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    syscall

    ; Exit syscall
    mov rax, 60
    xor rdi, rdi
    syscall