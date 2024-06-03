#include "defs.h"
#include "data.h"
#include "decl.h"

static char *reglist[4] = {"%r8", "%r9", "%r10", "%r11"};

int cgload(int value)
{
    // Get a new register
    int r = alloc_register();

    // Print out the code to initialize the register
    fprintf(Outfile, "\tmovq\t$%d, %s\n", value, reglist[r]);
    return r;
}

int cgadd(int r1, int r2)
{
    fprintf(Outfile, "\taddq\t%s, %s\n", reglist[r1], reglist[r2]);
    free_register(r1);
    return r2;
}

int cgmul(int r1, int r2)
{
    fprintf(Outfile, "\timulq\t%s, %s\n", reglist[r1], reglist[r2]);
    free_register(r1);
    return r2;
}

int cgsub(int r1, int r2)
{
    fprintf(Outfile, "\tsubq\t%s, %s\n", reglist[r2], reglist[r1]);
    free_register(r2);
    return r1;
}

int cgdiv(int r1, int r2)
{
    fprintf(Outfile, "\tmovq\t%s, %%rax\n", reglist[r1]);
    fprintf(Outfile, "\tcqo\n");
    fprintf(Outfile, "\tidivq\t%s\n", reglist[r2]);
    fprintf(Outfile, "\tmovq\t%%rax, %s\n", reglist[r1]);
    free_register(r2);
    return r1;
}

void cgprintint(int r)
{
    fprintf(Outfile, "\tmovq\t%s, %%rdi\n", reglist[r]);
    fprintf(Outfile, "\tcall\tprintint\n");
    free_register(r);
}