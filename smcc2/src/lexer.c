#include "defs.h"
#include "decl.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>


char* read_word(const char* input, int* index) {
    char c = input[*index];

    printf("input: %s", input);
    printf("C: %c\n", c);

    static char word[256];
    int i = 0;

    while (isalpha(c) && i < 255) {
        word[i] = c;
        (*index)++;
        c = input[*index];
        i++;
    }
    word[i] ='\0';

    printf("Reading: %s", word);
    return word;
}

Token next_token(const char* input, int* index);
Token next_token(const char* input, int* index)
{
    char* word = read_word(input, index);

    Token token = { TOKEN_EO, NULL };
    return token;
}
