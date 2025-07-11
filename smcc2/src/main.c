#include "decl.h"

int main(){
    int pos = 1;
    char sentence[100] = "hello what is going on";
    Token t = next_token(sentence, &pos);

    return 0;
}