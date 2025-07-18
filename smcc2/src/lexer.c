#include "defs.hh"
#include "decl.hh"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TOKENS 1024
#define MAX_WORD_SIZE 256


char* read_word(const char* input, int* index) {
    char c = input[*index];

    char* word = malloc(MAX_WORD_SIZE * sizeof(char)); // this is in heap
    int i = 0;

    if (isalpha(c)){
        // isalnum for having numbers also in variable names
        while (c != '\0' && (isalnum(c) || c == '_')) {
            word[i] = c;
            (*index)++;
            c = input[*index];
            i++;
        }
    }
    else if (isdigit(c)){
        // only keep going until there is number only
        while(isdigit(c)){
            word[i] = c;
            (*index)++;
            c = input[*index];
            i++;
        }
    }

    word[i] = '\0';

    return word;
}

void print_token(Token token){
        printf("Token.type: %s, Token.text: %s\n", token_array[token.type], token.text);
}

Token next_token(Lexer* lexer){
    Token _token = { TOKEN_EO, NULL };

    char c = lexer->input[lexer->pos];
    int *pos = &lexer->pos;

    while (isspace(c)) {
        (*pos)++;
        c = lexer->input[*pos];
    }


    if (isalpha(c) || isdigit(c) || c == '_'){
        char *word = read_word(lexer->input, pos);
        // if blank word then dont process
        if (strlen(word) > 0) {
            _token = get_token(word);
        }
        free(word);
    }
    else {
        switch (c){
        case '+':
            _token = (Token){TOKEN_PLUS, strdup("+")};
            break;
        case '-':
            _token = (Token){TOKEN_MINUS, strdup("-")};
            break;
        case '{':
            _token = (Token){TOKEN_LBRACE, strdup("{")};
            break;
        case '}':
            _token = (Token){TOKEN_RBRACE, strdup("}")};
            break;
        case ';':
            _token = (Token){TOKEN_SEMICOLON, strdup(";")};
            break;
        default:
            break;
        }
        (*pos)++;
    }

    return _token;
}

Token peek_token(Lexer* lexer){
    Token _token = { TOKEN_EO, NULL };

    int pos = lexer->pos;
    char c = lexer->input[pos];

    while (isspace(c)) {
        (pos)++;
        c = lexer->input[pos];
    }


    if (isalpha(c) || isdigit(c) || c == '_')
    {
        char *word = read_word(lexer->input, &pos);
        // if blank word then dont process
        if (strlen(word) > 0)
        {
            _token = get_token(word);
        }
        free(word);
    }
    else
    {
        switch (c)
        {
        case '+':
            _token = (Token){TOKEN_PLUS, strdup("+")};
            break;
        case '-':
            _token = (Token){TOKEN_MINUS, strdup("-")};
            break;
        case '{':
            _token = (Token){TOKEN_LBRACE, strdup("{")};
            break;
        case '}':
            _token = (Token){TOKEN_RBRACE, strdup("}")};
            break;
        case ';':
            _token = (Token){TOKEN_SEMICOLON, strdup(";")};
            break;
        default:
            break;
        }
        pos++;
    }
    return _token;
}

Token get_token(char* word){
    
    Token token;
    token.text = NULL;

    if (strcmp(word, "int") == 0){
        token.type = TOKEN_INT;
        token.text = strdup(word);
    }
    else if (strcmp(word, "return") == 0){
        token.type = TOKEN_RETURN;
        token.text = strdup(word);
    }
    else if (isdigit(word[0])){
        token.type = TOKEN_NUMBER;
        token.text = strdup(word);
    }
    else if (isalpha(word[0]) || word[0] == '_'){
        token.type = TOKEN_IDENT;
        token.text = strdup(word);
    }
    else {
        token.type = TOKEN_EO;
        token.text = NULL;
    }

    return token;
}