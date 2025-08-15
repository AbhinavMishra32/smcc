## c to x86:
### for x86 and not arm (on apple silicon macs), in ssmc2
```
docker run --rm -it \
  --platform=linux/amd64 \
  -v "$(pwd)":/src \
  -w /src \
  debian:latest bash

```

#### also some general docker commands:
- for listing all running containers:
`docker container list`

- for listing all contianers (running or not)
`docker container list --all`

- starting a docker container with the name fetched from the list command
`docker start -ai <container_name>`

#### compiling c code to intel syntax assembly (gas syntax, not nasm)
`gcc -S -O0 -masm=intel -fno-asynchronous-unwind-tables -fno-ident -fno-tree-ccp -fverbose-asm language/test.c -o language/test.s`

(-fverbose-asm is really helpful)


### General learnings through this compiler journey:
- To see extern printf being listed in the symbol table without actually having defined (linked through linker): run this:
`objdump -t /path/to/elf.o`

output:
```
root@7d781bcd23df:/src# objdump -t language/prac/self.o

language/prac/self.o:     file format elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*  0000000000000000 language/prac/self.s
0000000000000000 l    d  .data  0000000000000000 .data
0000000000000000 l    d  .text  0000000000000000 .text
0000000000000000 l       .data  0000000000000000 fmt
0000000000000000         *UND*  0000000000000000 printf
0000000000000000 g       .text  0000000000000000 main
```

also can use readelf:
`readelf -s /path/to/elf.o`

output:
```
root@7d781bcd23df:/src# readelf -s language/prac/self.o

Symbol table '.symtab' contains 7 entries:
   Num:    Value          Size Type    Bind   Vis      Ndx Name
     0: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT  UND
     1: 0000000000000000     0 FILE    LOCAL  DEFAULT  ABS language/prac/self.s
     2: 0000000000000000     0 SECTION LOCAL  DEFAULT    1 .data
     3: 0000000000000000     0 SECTION LOCAL  DEFAULT    2 .text
     4: 0000000000000000     0 NOTYPE  LOCAL  DEFAULT    1 fmt
     5: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT  UND printf
     6: 0000000000000000     0 NOTYPE  GLOBAL DEFAULT    2 main
```
