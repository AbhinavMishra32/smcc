#pragma once
#include "token.hh"
#include "lexer.hh"
#include <iostream>

class Parser {

public:
    Parser(Lexer& lexer);


    ASTNode* parse();
    ASTNode* parseFunction();
    ASTNode* parseBlock();
    ASTNode* parseStatement();
    ASTNode* parseExpression();

private:
    Lexer& _lexer;
    Token _current;

    void advance();
    bool match(TokenType type);
    void expect(TokenType type);


};