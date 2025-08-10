global main
extern puts

section .data
msg: db "Hello, World!", 0

section .text
main:
    ; Print the message
    mov rdi, msg
    call puts
    mov eax, 0
    ret