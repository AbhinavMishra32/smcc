#include "defs.h"
#include "data.h"
#include "decl.h"

static int freereg[4];
static char *reglist[4] = {"r8", "r9", "r10", "r11"};

void freeall_registers(void){
    freereg[0]= freereg[1]= freereg[2]= freereg[3] = 1;
}

static int alloc_register(void){
    for(int i = 0 ; i<4; i++){
        if (freereg[i]){
            freereg[i]= 0;
            return i;
        }
    }
}

static void free_register(int reg){
    if (freereg[reg] != 0){
        fprintf(stderr, "Error trying to free register %d\n", reg);
        exit(1);
    }
    freereg[reg]= 1;
}

void cgpreamble(){
    freeall_registers();
    fputs(
    "\t.text\n"
    ".LC0:\n"
    "\t.string\t\"%d\\n\"\n"
    "printint:\n"
    "\tpush\t{r4, r5, r6, lr}\n"
    "\tmov	r5, r0\n"
    "\tldr	r0, .L3\n"
    "\tadd	r1, sp, #12\n"
    "\tmov	r2, r5\n"
    "\tbl	printf\n"
    "\tpop	{r4, r5, r6, pc}\n"
    "\t.align	2\n"
    ".L3:\n"
    "\t.word	%d\n"
    "\t.globl	main\n"
    "\t.type	main, %function\n"
    "main:\n"
    "\tpush	{r4, lr}\n"
    "\tadd	r4, sp, #0\n",
    Outfile);
}

void cgpostamble(){
    fputs(
    "\tmov	r0, #0\n"
    "\tpop	{r4, pc}\n",
    Outfile);
}

int cgload(int value)
{
    // Get a new register
    int r = alloc_register();

    // Print out the code to initialize the register
    fprintf(Outfile, "\tmov %s, #%d\n", reglist[r], value);
    return r;
}

int cgadd(int r1, int r2)
{
    fprintf(Outfile, "\tadd %s, %s, %s\n", reglist[r2], reglist[r2], reglist[r1]);
    free_register(r1);
    return r2;
}

int cgmul(int r1, int r2)
{
    fprintf(Outfile, "\tmul %s, %s, %s\n", reglist[r2], reglist[r2], reglist[r1]);
    free_register(r1);
    return r2;
}

int cgsub(int r1, int r2)
{
    fprintf(Outfile, "\tsub %s, %s, %s\n", reglist[r1], reglist[r1], reglist[r2]);
    free_register(r2);
    return r1;
}

int cgdiv(int r1, int r2)
{
    fprintf(Outfile, "\tmov %s, %s\n", reglist[0], reglist[r1]);
    fprintf(Outfile, "\tmov %s, %s\n", reglist[1], reglist[r2]);
    fprintf(Outfile, "\tbl __aeabi_idiv\n");
    fprintf(Outfile, "\tmov %s, %s\n", reglist[r1], reglist[0]);
    free_register(r2);
    return r1;
}

void cgprintint(int r)
{
    fprintf(Outfile, "\tmov %s, r0\n", reglist[r]);
    fprintf(Outfile, "\tbl printint\n");
    free_register(r);
}
