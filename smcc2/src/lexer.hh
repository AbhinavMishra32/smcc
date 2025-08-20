#pragma once
#include <string>
#include "token.hh"

class Lexer {
public:
    Lexer(const std::string& input);
    Token nextToken();
    Token peekToken(int count = 0);

private:
    std::string _input;
    size_t _pos;

    void skipWhitespace();
    std::string readWord();
    std::string readNumber();
    Token getToken(std::string& word);
};
