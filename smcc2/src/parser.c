#include "defs.hh"
#include "decl.hh"
#include <stdio.h>
#include <stdlib.h>

void expects(Parser* parser, TokenType* expected){
    if (parser->current.type != expected){
        fprintf(stderr, "Expected token %s but got %s\n",
        token_array[*expected],
        token_array[parser->current.type]);
        exit(1);
    }
    advance(parser);
}

void advance(Parser* parser) {
    parser->current = next_token(parser->lexer);
}

ASTNode* parse_function(Parser* parser){
    expects(parser, TOKEN_RETURN);
    expects(parser, TOKEN_IDENT);
    expects(parser, )
    expects(parser, TOKEN_INT);
    expects(parser, TOKEN_SEMICOLON);
    ASTNode* node = (ASTNode*) malloc(sizeof(ASTNode));
    node->child = NULL;
    node->type = AST_FUNCTION;
    return node;
}