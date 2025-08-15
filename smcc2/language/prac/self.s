section .data
  fmt db "This is the result bruv: %d", 10, 0

section .text
  extern printf
  global main

main:
  mov esi, 4234234
  add esi, 52423

  lea rdi, [rel fmt]
  xor eax, eax
  call printf

  xor eax, eax
  ret
