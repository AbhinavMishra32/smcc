#ifndef DEFS_H
#define DEFS_H

typedef enum
{
    TOKEN_INT,
    TOKEN_RETURN,
    TOKEN_IDENT,
    TOKEN_NUMBER,
    TOKEN_PLUS,
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

#endif