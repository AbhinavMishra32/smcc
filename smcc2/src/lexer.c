#include "defs.h"
#include "decl.h"
#include <stdio.h>
#include <ctype.h>

Token next_token(const char *input, int *index)
{
    char c = input[*index];
    printf("This is c: %c", c);


    if (isalpha(c)){

    }

    Token token = {TOKEN_EO, NULL};
    return token;
}

char* word(char *input, int *index){
    if ()
}

// TokenType keyword_or_ident(char *word) {
//     if
// }