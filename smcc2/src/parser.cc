#include "parser.hh"
#include <iostream>

void error(const std::string& message) {
    std::cerr << "Parser error: " << message << std::endl;
    exit(1);
}

Parser::Parser(Lexer& lexer) : _lexer(lexer), _current(_lexer.nextToken()) {
}

Token Parser::getCurrent() {
    return _current;
}

void Parser::expect(TokenType type) {
  if (_current.getType() != type) {
    throw std::runtime_error("Expected token " +
                             Token::tokenTypeToString(type) + " but got " +
                             Token::tokenTypeToString(_current.getType()));
  }
  advance();
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

// TODO
// // for return <statement>
// ASTNode* Parser::parseStatement() {
//     advance();
//     if (_current.getType() == TokenType::Return) {
//         
//     }
// }

// for Ident, Number, Expressions
ASTNode* Parser::parseFactor() {
    advance();
    // std::cout << getCurrent().toString() << std::endl;

    if (_current.getType() == TokenType::Ident) {
        std::cout << "=Variable" << std::endl;
        ASTNode* node = new ASTNode(ASTType::Variable, _current.getText());
        advance();
        return node;
    }
    else if (_current.getType() == TokenType::Int) {
        std::cout << "Number" << std::endl;
        return new ASTNode(ASTType::Number, _current.getText());
    }
    // else if (_current.getType() == TokenType::LParan) {
    //     advance();
    //     auto expr = parseExpression();
    //     expect(TokenType::RParan);
    //     return expr;
    // }
    else if (_current.getType() == TokenType::Minus) {
        std::cout << "Minus" << std::endl;
        advance();
        auto operand = parseFactor();
        ASTNode* node = new ASTNode(ASTType::UnaryMinus);
        node->addChild(std::shared_ptr<ASTNode>(operand));
        return node;
    }

    error("Unexpected token in factor");
    return nullptr;
}

void Parser::printAST(ASTNode& ast) {
    advance();
    std::cout << ast.toString() <<std::endl;
}

// ASTNode* Parser::parseTerm() {
//     advance();
// }
