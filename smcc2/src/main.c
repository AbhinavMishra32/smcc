#include "decl.h"

int main(){
    int pos = 0;
    char sentence[] = "int return 1235 asdfasdf  ++- --   { }  jasdf";
                    // 01234567891011

    Lexer* lexer = {sentence, 0, 0};

    Token next_token = next_token()
    while(current_token.type != TOKEN_EO){
        current_token = peek_token(&lexer);
    }


    return 0;
}