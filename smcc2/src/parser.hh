#pragma once
#include "token.hh"
#include "lexer.hh"
#include "ast.hh"

class Parser {

public:
    Parser(Lexer& lexer);

    Token getCurrent();
    ASTNode* parse();
    ASTNode* parseFunction();
    ASTNode* parseBlock();
    ASTNode* parseStatement();
    ASTNode* parseFactor();
    ASTNode* parseExpression();
    ASTNode* parseTerm();
    void printAST(ASTNode& ast);

private:
    Lexer& _lexer;
    Token _current;

    void advance();
    bool match(TokenType type);
    void expect(TokenType type);

};

void error(const std::string& message);
