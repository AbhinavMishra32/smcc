#include "defs.h"
#include "data.h"
#include "decl.h"

// List of AST operators
static char *ASTop[] = {"+", "-", "*", "/"};

int interpretAST(struct ASTnode *n)
{
    int leftval, rightval;

    if (n->left)
        leftval = interpretAST(n->left);
    if (n->right)
        rightval = interpretAST(n->right);

    if (n->op == A_INTLIT)
        printf("int %d\n", n->intvalue);
    else
        printf("%d %s %d\n", leftval, ASTop[n->op], rightval);

    switch (n->op)
    {
    case A_ADD:
        return (leftval + rightval);
    case A_SUBTRACT:
        return (leftval - rightval);
    case A_MULTIPLY:
        return (leftval * rightval);
    case A_DIVIDE:
        return (leftval / rightval);
    case A_INTLIT:
        return (n->intvalue);
    default:
        fprintf(stderr, "Unkown AST operator %d\n", n->op);
        exit(1);
    }
}

int genAST(struct ASTnode *n)
{
    int leftreg, rightreg;

    if (n->left)
        leftreg = genAST(n->left);
    if (n->right)
        rightreg = genAST(n->right);

    switch (n->op)
    {
    case A_ADD:
        return (cgadd(leftreg, rightreg));
    case A_SUBTRACT:
        return (cgsub(leftreg, rightreg));
    case A_MULTIPLY:
        return (cgmul(leftreg, rightreg));
    case A_DIVIDE:
        return (cgdiv(leftreg, rightreg));
    case A_INTLIT:
        return (cgload(n->intvalue));

    default:
        fprintf(stderr, "Unknown AST operator %d\n", n->op);
        exit(1);
    }
}