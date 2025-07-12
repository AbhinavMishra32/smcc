#ifndef DECL_H
#define DECL_H

#include "defs.h"

Token* token_list(const char *input, int *index);
TokenType keyword_or_ident(char *word);
Token get_token(char* word);

#endif