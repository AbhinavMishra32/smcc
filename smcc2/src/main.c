#include "decl.hh"
#include <stdlib.h>

int main(){
    char sentence[] = "int return 1235 asdfasdf  ++- --   { }  jasdf";

    Lexer lexer = {sentence, 0, 0};
    Token token;

    while((token = next_token(&lexer)).type != TOKEN_EO) {
        print_token(token);

        free(token.text);
    }

    return 0;
}