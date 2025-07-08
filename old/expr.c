#include "defs.h"
#include "data.h"
#include "decl.h"

char *tokstr1[] = {"+", "-", "*", "/", "intlit"};

static struct ASTnode *primary(void)
{
    struct ASTnode *n;

    switch (Token.token)
    {
    case T_INTLIT:
        n = mkastleaf(A_INTLIT, Token.intvalue);
        scan(&Token);
        return (n);
    default:
        fprintf(stderr, "syntax error on line %d\n", Line);
        exit(1);
    }
}

int arithop(int tok)
{
    switch (tok)
    {
    case T_PLUS:
        return (A_ADD);
    case T_MINUS:
        return (A_SUBTRACT);
    case T_STAR:
        return (A_MULTIPLY);
    case T_SLASH:
        return (A_DIVIDE);
    default:
        fprintf(stderr, "unkown token in arithop() on line %d\n got token: %s", Line, tokstr1[tok]);
        exit(1);
    }
}
static int OpPrec[] = {0, 10, 10, 20, 20, 0};
//                    EOF  +   -   *   /  INTLIT

static int op_precedence(int tokentype)
{
    int prec = OpPrec[tokentype];
    if (prec == 0)
    {
        fprintf(stderr, "syntax error on line %d, token %s\n", Line, tokstr1[tokentype]);
        exit(1);
    }
    return (prec);
}

struct ASTnode *binexpr(int ptp)
{
    struct ASTnode *n, *left, *right;
    int tokentype;

    left = primary();

    tokentype = Token.token;
    if (tokentype == T_EOF)
        return (left);

    while (op_precedence(tokentype) > ptp)
    {
        scan(&Token);

        right = binexpr(OpPrec[tokentype]);
        left = mkastnode(arithop(tokentype), left, right, 0);
        tokentype = Token.token;
        if (tokentype == T_EOF)
            return (left);
    }
    return (left);
}