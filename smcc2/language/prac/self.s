section .data
  fmt db "Result: %d", 10, 0

section .text
  extern printf
  global main

main:
  mov edi, 3
  mov esi, 6
  add edi, esi

  mov esi, edi
  lea rdi, [rel fmt]
  xor eax, eax
  call printf

  xor eax, eax
  ret
