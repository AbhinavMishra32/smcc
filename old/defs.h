#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static int scanint(int c);
static int chrpos(char *s, int c);

struct token
{
    int token;
    int intvalue;
};

enum
{
    T_EOF,
    T_PLUS,
    T_MINUS,
    T_STAR,
    T_SLASH,
    T_INTLIT
};
// T_INTIT will store value of any integer

enum
{
    A_ADD,
    A_SUBTRACT,
    A_MULTIPLY,
    A_DIVIDE,
    A_INTLIT
};
struct ASTnode
{
    int op;
    struct ASTnode *left;
    struct ASTnode *right;
    int intvalue;
};