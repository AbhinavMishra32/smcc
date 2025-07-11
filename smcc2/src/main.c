#include "decl.h"

int main(){
    int pos = 0;
    char sentence[] = "int return 1235 asdfasdf { }";
    Token t = token_list(sentence, &pos);

    return 0;
}