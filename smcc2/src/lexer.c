#include "defs.h"
#include "decl.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <malloc.h>


char* read_word(const char* input, int* index) {
    char c = input[*index];

    char* word = malloc(256 * sizeof(char));
    int i = 0;

    while (isalpha(c) && i < 255) {
        word[i] = c;
        (*index)++;
        c = input[*index];
        i++;
    }
    word[i] = '\0';

    return word;
}

Token next_token(const char* input, int* index);
Token next_token(const char* input, int* index)
{
    char c = input[*index];
    while(c != '\0'){
        char* word = read_word(input, index);
        printf("Word: %s\n", word);
        c = input[*index];
        if (c == ' ' || c == '\n'){
            (*index)++;
        }
    }

    Token token = { TOKEN_EO, NULL };
    return token;
}
