#include "defs.h"
#include "decl.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


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

    char* word = malloc(256 * sizeof(char)); // this is in heap
    int i = 0;

    if (isalpha(c)){
        // isalnum for having numbers also in variable names
        while ((isalnum(c) || c == '_')) {
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

void print_tokens(Token* token_list){
    int i = 0;
    Token t = token_list[0];

    while (t.type != TOKEN_EO && t.text != NULL) {
        printf("Token.type: %s, Token.text: %s\n", token_array[t.type], t.text);
        i++;
        t = token_list[i];
    }
}

Token* token_list(const char* input, int* index)
{
    Token* tok_list = (Token*)malloc(sizeof(Token) * 10);
    char c = input[*index];

    int i = 0;

    while(c != '\0'){
        char* word = read_word(input, index);
        Token token = get_token(word);
        tok_list[i] = token;
        i++;
        printf("Type: %s || Word: '%s' || (%d)\n", token_array[token.type], word, *index);
        c = input[*index];
        if (isspace(c)){
            (*index)++;
            c = input[*index];
        }
        if (c == '+') {
            Token token = {TOKEN_PLUS, strdup("+")};
            printf("Type: %s || Word: '%s' || (%d)\n", token_array[token.type], word, *index);
            (*index)++;
            tok_list[i] = token;
        }
        else if (c == '{'){
            Token token = {TOKEN_LBRACE, strdup("{")};
            printf("Type: %s || Word: '%s' || (%d)\n", token_array[token.type], word, *index);
            (*index)++;
            tok_list[i] = token;
        }
        else if (c == '}'){
            Token token = {TOKEN_RBRACE, strdup("}")};
            printf("Type: %s || Word: '%s' || (%d)\n", token_array[token.type], word, *index);
            (*index)++;
            tok_list[i] = token;
        }
        else {
            (*index)++;
        }
    }
    return tok_list;
}

Token get_token(char* word){
    
    // printf("word: %s ", word);
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