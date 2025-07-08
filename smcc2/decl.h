#ifndef DECL_H
#define DECL_H

#include "defs.h"

Token next_token(const char *input, int *index);
TokenType keyword_or_ident(char *word);

#endif