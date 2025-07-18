#ifndef DECL_H
#define DECL_H

#include "defs.h"

Token get_token(char* word);
void print_tokens(Token* token_list);
Token peek_token(Lexer* lexer);
Token next_token(Lexer* lexer);

#endif