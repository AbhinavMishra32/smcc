#include <string>
#include "lexer.hh"

Lexer::Lexer(const std::string &input) : _input(input), _pos(0) {}
Token Lexer::nextToken()
{
    skipWhitespace();

    char c = _input[_pos];

    if (std::isalpha(c) || c == '_')
    {
        std::string word = readWord();
        return getToken(word);
    }
    else if (std::isdigit(c))
    {
        std::string number = readNumber();
        return Token(TokenType::Number, number);
    }
    else
    {
        switch (c)
        {
        case '=':
            _pos++;
            return Token(TokenType::Equals, "=");
        case '+':
            _pos++;
            return Token(TokenType::Plus, "+");
        case '-':
            _pos++;
            return Token(TokenType::Minus, "-");
        case '*':
            _pos++;
            return Token(TokenType::Mul, "*");
        case '/':
            _pos++;
            return Token(TokenType::Div, "/");
        case '(':
            _pos++;
            return Token(TokenType::LParan, "(");
        case ')':
            _pos++;
            return Token(TokenType::RParan, ")");
        case '{':
            _pos++;
            return Token(TokenType::LBrace, "{");
        case '}':
            _pos++;
            return Token(TokenType::RBrace, "}");
        case ';':
            _pos++;
            return Token(TokenType::Semicolon, ";");
        case '\0':
            return Token(TokenType::EoF, "");
        default:
            _pos++;
            return Token(TokenType::Unknown, "");
        }
    }
}
Token Lexer::peekToken()
{
    size_t savedPos = _pos;
    Token token = nextToken();
    _pos = savedPos;
    return token;
}

void Lexer::skipWhitespace()
{
    while (_pos < _input.size() && std::isspace(_input[_pos]))
    {
        _pos++;
    }
}
std::string Lexer::readWord()
{
    std::string word;

    if (_pos > _input.size()) {
        return word;
    }

    char c = _input[_pos];

    if (std::isalpha(c) || c == '_') {
        while (_pos < _input.size() && (std::isalnum(_input[_pos]) || _input[_pos] == '_')) {
            word += _input[_pos++];
        }
    }
    else if (std::isdigit(c)) {
        while (_pos < _input.size() || (std::isdigit(_input[_pos]))) {
            word += _input[_pos++];
        }
    }

    return word;
}

std::string Lexer::readNumber()
{
    std::string number;

    if (_pos > _input.size())
    {
        return number;
    }

    char c = _input[_pos];

    if (std::isdigit(c))
    {
        while (_pos < _input.size() && std::isdigit(_input[_pos]))
        {
            number += _input[_pos++];
        }
    }

    return number;
}

Token Lexer::getToken(std::string &word)
{
    if (word == "int") return Token(TokenType::Int, word);
    else if (word == "return") return Token(TokenType::Return, word);
    return Token(TokenType::Ident, word);
}