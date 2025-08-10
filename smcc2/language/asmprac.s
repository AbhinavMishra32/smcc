global main
extern puts

section .data
; msg: db "Hello, World!", 0
msg: db 72, 101, 108, 108, 111

section .text
main:
    ; Print the message
    mov rdi, msg
    call puts
    mov eax, 0
    ret