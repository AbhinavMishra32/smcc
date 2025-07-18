#pragma once
#include <string>
#include <iostream>

enum class TokenType {
    Int,
    Return,
    Ident,
    Number,
    Plus,
    Minus,
    LBrace,
    RBrace,
    Semicolon,
    EoF
};

class Token {
private:
    TokenType _type;
    std::string _text;

public:
    std::string tokenTypeToString(TokenType type) const {
        switch (type) {
            case TokenType::Int: return "Int";
            case TokenType::Return: return "Return";
            case TokenType::Ident: return "Ident";
            case TokenType::Number: return "Number";
            case TokenType::Plus: return "Plus";
            case TokenType::Minus: return "Minus";
            case TokenType::LBrace: return "LBrace";
            case TokenType::RBrace: return "RBrace";
            case TokenType::Semicolon: return "Semicolon";
            case TokenType::EoF: return "EoF";
            default: return "Unknown";
        }
    }

    Token(TokenType type, const std::string& text) : _text(text), _type(type) {}

    std::string toString() const {
        return "Token(" + tokenTypeToString(_type) + ", \"" + _text + "\")";
    }
};