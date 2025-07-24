#pragma once
#include "token.hh"
#include "lexer.hh"
#include "ast.hh"
#include <iostream>
#include <cstdlib>

class Parser {

public:
    Parser(Lexer& lexer);


    ASTNode* parse();
    ASTNode* parseFunction();
    ASTNode* parseBlock();
    ASTNode* parseStatement();
    ASTNode* parseExpression();
    ASTNode* parseFactor();
    ASTNode* parseTerm();

private:
    Lexer& _lexer;
    Token _current;

    void advance();
    bool match(TokenType type);
    void expect(TokenType type);


};

void error(const std::string& message);
