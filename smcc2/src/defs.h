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
    TOKEN_EO
} TokenType;

typedef struct
{
    TokenType type;
    char *text;
} Token;

typedef struct {
    const char* input;
    int pos;
    int line;
} Lexer;

typedef struct {
    Lexer* lexer;
    Token current;
} Parser;

#endif