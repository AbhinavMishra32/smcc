#include <string>
#include "lexer.hh"

Lexer::Lexer(const std::string &input) : _input(input), _pos(0), _line(1), _col(1) {}

char Lexer::advance() {
  if (_pos >= _input.size()) return '\0';
  char c = _input[_pos++];
  if (c == '\n') {
    _line++;
    _col = 1;
  } else {
    _col++;
  }
  return c;
}

Token Lexer::nextToken()
{
    skipWhitespace();

    if (_pos >= _input.size()) {
      return Token(TokenType::EoF, "", _line, _col);
    }
    int tokenStartLine = _line;
    int tokenStartCol = _col;
    char c = _input[_pos];

    if (std::isalpha(c) || c == '_') {
        std::string word = readWord();
        return getToken(word, tokenStartLine, tokenStartCol);
    }
    else if (std::isdigit(c)) {
        std::string number = readNumber();
        return Token(TokenType::Number, number, tokenStartLine, tokenStartCol);
    }
    else {
        switch (c) {
        case '=':
            advance();
            return Token(TokenType::Equals, "=", tokenStartLine, tokenStartCol);
        case '+':
            advance();
            return Token(TokenType::Plus, "+", tokenStartLine, tokenStartCol);
        case '-':
            advance();
            return Token(TokenType::Minus, "-", tokenStartLine, tokenStartCol);
        case '*':
            advance();
            return Token(TokenType::Mul, "*", tokenStartLine, tokenStartCol);
        case '/':
            advance();
            return Token(TokenType::Div, "/", tokenStartLine, tokenStartCol);
        case '(':
            advance();
            return Token(TokenType::LParan, "(", tokenStartLine, tokenStartCol);
        case ')':
            advance();
            return Token(TokenType::RParan, ")", tokenStartLine, tokenStartCol);
        case '{':
            advance();
            return Token(TokenType::LBrace, "{", tokenStartLine, tokenStartCol);
        case '}':
            advance();
            return Token(TokenType::RBrace, "}", tokenStartLine, tokenStartCol);
        case ';':
            advance();
            return Token(TokenType::Semicolon, ";", tokenStartLine, tokenStartCol);
        case ',':
            advance();
            return Token(TokenType::Comma, ",", tokenStartLine, tokenStartCol);
        case '\0':
            advance();
            return Token(TokenType::EoF, "", tokenStartLine, tokenStartCol);
        default:
            advance();
            return Token(TokenType::Unknown, std::string(1, c), tokenStartLine, tokenStartCol);
        }
    }
}

Token Lexer::peekToken(int count) {
  size_t savedPos = _pos;
  int savedLine = _line;
  int savedCol = _col;

  Token token = nextToken();
  for(int i = 0; i < count; i++) {
    token = nextToken();
  }
  _pos = savedPos;
  _line = savedLine;
  _col = savedCol;

  return token;
}

void Lexer::skipWhitespace() {
  while (_pos < _input.size() && std::isspace(_input[_pos])) {
    advance();
  }
}
std::string Lexer::readWord() {
  std::string word;
  while (_pos < _input.size() && (std::isalnum(_input[_pos]) || _input[_pos] == '_')) {
    word += advance();
  }
  return word;
}

std::string Lexer::readNumber() {
  std::string number;
  while (_pos < _input.size() && std::isdigit(_input[_pos])) {
    number += advance();
  }
  return number;
}

Token Lexer::getToken(std::string &word, int startLine, int startCol)
{
    if (word == "int") return Token(TokenType::Int, word, startLine, startCol);
    else if (word == "return") return Token(TokenType::Return, word, startLine, startCol);
    return Token(TokenType::Ident, word, startLine, startCol);
}
