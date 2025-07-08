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

Token next_token(const char *input, int *index);
TokenType get_token(const char *input);

Token next_token(const char *input, int *index)
{
    int input_size = sizeof(input) / sizeof(input[0]);
    for (int i = index; i < input_size; i++)
    {
    }
}

TokenType get_token(const char *input)
{
    TokenType token_type;
    switch (*input)
    {
    case '{':
        token_type = TOKEN_SEMICOLON;
        break;
    case '}':
        token_type = TOKEN_SEMICOLON;
        break;
        case 
            
    }
}