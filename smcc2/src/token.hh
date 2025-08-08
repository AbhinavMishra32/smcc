#pragma once
#include <string>
// #include <iostream>

enum class TokenType {
    Equals,
    Int,
    Return,
    Ident,
    Number,
    Plus,
    Minus,
    Mul,
    Div,
    LParan,
    RParan,
    LBrace,
    RBrace,
    Semicolon,
    EoF,
    Unknown
};


class Token {
private:
    TokenType _type;
    std::string _text;

public:
    Token(TokenType type, const std::string &text);

    TokenType getType();

    std::string getText();

    static std::string tokenTypeToString(TokenType type);


    std::string toString() const;
};
