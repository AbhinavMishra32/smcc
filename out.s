    .text
.LC0:
    .asciz  "%d\n"
printint:
    STP X29, X30, [SP, #-16]!
    MOV X29, SP
    SUB SP, SP, #16
    STR W0, [SP, #12]
    ADR X0, .LC0
    LDR X0, [X0]
    ADD X1, SP, #12
    MOV X2, X0
    BL printf
    LDP X29, X30, [SP], #16
    RET

    .globl main
main:
    STP X29, X30, [SP, #-16]!
    MOV X29, SP
    SUB SP, SP, #16
    MOV W8, #2
    MOV W9, #3
    MOV W10, #5
    MUL W11, W10, W9
    ADD W11, W11, W8
    MOV W8, #8
    MOV W9, #3
    MOV W0, W8
    MOV W1, W9
    BL __aeabi_idivmod
    MOV W8, W0
    SUB W11, W11, W8
    MOV W0, W11
    BL printint
    MOV W0, #0
    LDP X29, X30, [SP], #16
    RET
