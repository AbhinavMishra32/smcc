section .data
    a_vec: dd 1,2,3,4      ; array a
    b_vec: dd 10,20,30,40  ; array b
    c_vec: dd 0,0,0,0      ; result array
    fmt:   db "c[%d] = %d", 10, 0

section .text
    extern printf
    global main

main:
    ; Load a_vec and b_vec into XMM registers
    movdqa xmm0, [a_vec]   ; xmm0 = a[0..3]
    movdqa xmm1, [b_vec]   ; xmm1 = b[0..3]

    ; Add the vectors
    paddd xmm0, xmm1        ; xmm0 = a + b (all 4 ints at once)

    ; Store back the result
    movdqa [c_vec], xmm0

    ; Print results (loop through 4 elements)
    mov ecx, 0              ; counter i
print_loop:
    mov eax, [c_vec + rcx*4] ; load c[i]
    mov esi, eax             ; 2nd printf arg
    mov edi, fmt             ; 1st printf arg
    xor eax, eax             ; number of vector regs used
    call printf

    inc ecx
    cmp ecx, 4
    jl print_loop

    xor eax, eax
    ret
