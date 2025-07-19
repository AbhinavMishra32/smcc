#include "parser.hh"


Parser::Parser(Lexer& lexer) : _lexer(lexer), _current(_lexer.nextToken()) {
}

void Parser::expect(TokenType type) {
    if (_current.getType() != type) {
        throw std::runtime_error("Expected token " + Token::tokenTypeToString(type) + " but got " + Token::tokenTypeToString(_current.getType()));
    }
}

void Parser::advance(){
    _current = _lexer.nextToken();
}
 
bool Parser::match(TokenType type) {
    if (_current.getType() == type) {
        advance();
        return true;
    }
    return false;
}