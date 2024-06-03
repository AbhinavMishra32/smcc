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
    fprintf(Outfile, "\taddq\t%s, %s\n")
}