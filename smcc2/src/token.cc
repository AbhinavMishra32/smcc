#include "token.hh"

Token::Token(TokenType type, const std::string &text) : _text(text), _type(type) {}

TokenType Token:: getType() {
    return _type;
}

std::string Token::getText(){
    return _text;
}

std::string Token::tokenTypeToString(TokenType type) {
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

std::string Token::toString() const {
    return "Token(" + tokenTypeToString(_type) + ", \"" + _text + "\")";
}