#include "defs.h"
#include "data.h"
#include "decl.h"

static int freereg[4];
static char *reglist[4] = {"%eax", "%ebx", "%ecx", "%edx"};

void freeall_registers(void)
{
    freereg[0] = freereg[1] = freereg[2] = freereg[3] = 1;
}

static int alloc_register(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (freereg[i])
        {
            freereg[i] = 0;
            return i;
        }
    }
    fprintf(stderr, "Out of registers\n");
    exit(1);
}

static void free_register(int reg)
{
    if (freereg[reg] != 0)
    {
        fprintf(stderr, "Error trying to free register %d\n", reg);
        exit(1);
    }
    freereg[reg] = 1;
}

void cgpreamble()
{
    freeall_registers();
    fputs(
        "\t.text\n"
        ".LC0:\n"
        "\t.string\t\"%d\\n\"\n"
        "printint:\n"
        "\tpushl\t%ebp\n"
        "\tmovl\t%esp, %ebp\n"
        "\tsubl\t$16, %esp\n"
        "\tmovl\t%edi, -4(%ebp)\n"
        "\tmovl\t-4(%ebp), %eax\n"
        "\tmovl\t%eax, %esi\n"
        "\tleal	.LC0, %edi\n"
        "\tmovl	$0, %eax\n"
        "\tcall	printf\n"
        "\tnop\n"
        "\tleave\n"
        "\tret\n"
        "\n"
        "\t.globl\tmain\n"
        "main:\n"
        "\tpushl\t%ebp\n"
        "\tmovl\t%esp, %ebp\n",
        Outfile);
}

void cgpostamble()
{
    fputs(
        "\tmovl	$0, %eax\n"
        "\tpopl\t%ebp\n"
        "\tret\n",
        Outfile);
}

int cgload(int value)
{
    // Get a new register
    int r = alloc_register();

    // Print out the code to initialize the register
    fprintf(Outfile, "\tmovl\t$%d, %s\n", value, reglist[r]);
    return r;
}

int cgadd(int r1, int r2)
{
    fprintf(Outfile, "\taddl\t%s, %s\n", reglist[r1], reglist[r2]);
    free_register(r1);
    return r2;
}

int cgmul(int r1, int r2)
{
    fprintf(Outfile, "\timull\t%s, %s\n", reglist[r1], reglist[r2]);
    free_register(r1);
    return r2;
}

int cgsub(int r1, int r2)
{
    fprintf(Outfile, "\tsubl\t%s, %s\n", reglist[r2], reglist[r1]);
    free_register(r2);
    return r1;
}

int cgdiv(int r1, int r2)
{
    fprintf(Outfile, "\tmovl\t%s, %%eax\n", reglist[r1]);
    fprintf(Outfile, "\tcltd\n"); // Sign-extend %eax into %edx
    fprintf(Outfile, "\tidivl\t%s\n", reglist[r2]);
    fprintf(Outfile, "\tmovl\t%%eax, %s\n", reglist[r1]);
    free_register(r2);
    return r1;
}

void cgprintint(int r)
{
    fprintf(Outfile, "\tmovl\t%s, %%edi\n", reglist[r]);
    fprintf(Outfile, "\tcall\tprintint\n");
    free_register(r);
}
