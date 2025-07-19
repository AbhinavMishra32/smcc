#ifndef DEFS_H
#define DEFS_H

typedef enum
{
    TOKEN_INT,
    TOKEN_RETURN,
    TOKEN_IDENT,
    TOKEN_NUMBER,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_SEMICOLON,
    TOKEN_LBRACE,
    TOKEN_RBRACE,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_EO
} TokenType;

char* token_array[] = {
    "TOKEN_INT",
    "TOKEN_RETURN",
    "TOKEN_IDENT",
    "TOKEN_NUMBER",
    "TOKEN_PLUS",
    "TOKEN_MINUS",
    "TOKEN_SEMICOLON",
    "TOKEN_LBRACE",
    "TOKEN_RBRACE",
    "TOKEN_EO"
};

typedef struct {
    const char* input;
    int pos;
    int line;
} Lexer;

// typedef struct {
//     Lexer* lexer;
//     Token current;
// } Parser;

typedef enum {
    AST_FUNCTION,
    AST_RETURN,
    AST_BINARY_OP,
    AST_INT_LITERAL
} ASTNodeType;

typedef struct ASTNode {
    ASTNodeType type;
    ASTNodeType child;
} ASTNode;

#endif