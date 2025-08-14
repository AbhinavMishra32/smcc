## c to x86:
### for x86 and not arm (on apple silicon macs), in ssmc2
docker run --rm -it \
  --platform=linux/amd64 \
  -v "$(pwd)":/src \
  -w /src \
  debian:latest bash

gcc -S -O0 -masm=intel -fno-asynchronous-unwind-tables -fno-ident -fno-tree-ccp -fverbose-asm language/test.c -o language/test.s

(-fverbose-asm is really helpful)