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
    TokenType getType() {
        return _type;
    }

    std::string getText(){
        return _text;
    }

    std::string tokenTypeToString(TokenType type) const {
        switch (type) {
            case TokenType::Int: return "Int";
            case TokenType::Return: return "Return";
            case TokenType::Ident: return "Ident";
            case TokenType::Number: return "Number";
            case TokenType::Plus: return "Plus";
            case TokenType::Minus: return "Minus";
            case TokenType::LParan: return "LParan";
            case TokenType::RParan: return "RParan";
            case TokenType::LBrace: return "LBrace";
            case TokenType::RBrace: return "RBrace";
            case TokenType::Semicolon: return "Semicolon";
            case TokenType::EoF: return "EoF";
            case TokenType::Unknown: return "Unknown";
            default: return "Unknown";
        }
    }

    Token(TokenType type, const std::string& text) : _text(text), _type(type) {}

    std::string toString() const {
        return "Token(" + tokenTypeToString(_type) + ", \"" + _text + "\")";
    }
};