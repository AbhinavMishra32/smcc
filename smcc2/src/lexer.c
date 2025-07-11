#include "defs.h"
#include "decl.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <malloc.h>


char* token_array[] = {
    "TOKEN_INT",
    "TOKEN_RETURN",
    "TOKEN_IDENT",
    "TOKEN_NUMBER",
    "TOKEN_PLUS",
    "TOKEN_SEMICOLON",
    "TOKEN_LBRACE",
    "TOKEN_RBRACE",
    "TOKEN_EO"
};

char* read_word(const char* input, int* index) {
    char c = input[*index];

    char* word = malloc(256 * sizeof(char));
    int i = 0;

    while (c != ' ' && i < 255) {
        word[i] = c;
        (*index)++;
        c = input[*index];
        i++;
    }
    word[i] = '\0';

    return word;
}

Token token_list(const char* input, int* index)
{
    char c = input[*index];
    while(c != '\0'){
        char* word = read_word(input, index);
        Token token = get_token(word);
        printf("Token.type: %s\n", token_array[token.type]);
        c = input[*index];
        if (c == ' '){
            (*index)++;
        }
    }

    Token token = { TOKEN_EO, NULL };
    return token;
}

Token get_token(char* word){
    printf("word: %s ", word);
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
    else if (strcmp(word, ";") == 0){
        token.type = TOKEN_SEMICOLON;
        token.text = strdup(word);
    }
    else if (strcmp(word, "+") == 0){
        token.type = TOKEN_PLUS;
        token.text = strdup(word);
    }
    else if (strcmp(word, "{") == 0){
        token.type = TOKEN_LBRACE;
        token.text = strdup(word);
    }
    else if (strcmp(word, "}") == 0){
        token.type = TOKEN_RBRACE;
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
