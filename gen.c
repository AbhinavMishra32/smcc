#include "decl.h"
#include "defs.h"
#include "data.h"

// Given an AST, generate
// assembly code recursively
void generatecode(struct ASTnode *n)
{
    int reg;

    cgpreamble();
    reg = genAST(n);
    cgprintint(reg); // Print the register with the result as an int
    cgpostamble();
}
