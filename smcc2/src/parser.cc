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

// for Ident, Number
ASTNode* Parser::parseFactor() {
    // advance();
    // std::cout << getCurrent().toString() << std::endl;
    // std::cout << Token::tokenTypeToString(_current.getType()) << std::endl;

    if (_current.getType() == TokenType::Ident) {
        // std::cout << "Variable" << std::endl;
        ASTNode* node = new ASTNode(ASTType::Variable, _current.getText());
        advance();
        return node;
    }
    else if (_current.getType() == TokenType::Number) {
        // std::cout << "Number" << std::endl;
        std::string value = _current.getText();
        advance();
        return new ASTNode(ASTType::Number, value);
    }
    // else if (_current.getType() == TokenType::LParan) {
    //     advance();
    //     auto expr = parseExpression();
    //     expect(TokenType::RParan);
    //     return expr;
    // }

    error("Unexpected token in factor");
    return nullptr;
}

ASTNode* Parser::parseExpression() {
    auto left = parseFactor();

    while (_current.getType() == TokenType::Minus || _current.getType() == TokenType::Plus) {
        TokenType op = _current.getType();
        advance();
        auto right = parseFactor();

        ASTNode* binaryNode = new ASTNode(
            op == TokenType::Minus ? ASTType::BinaryMinus : ASTType::BinaryPlus
        );
        binaryNode->addChild(std::shared_ptr<ASTNode>(left));
        binaryNode->addChild(std::shared_ptr<ASTNode>(right));
         
        left = binaryNode;
    }

    // if just a single factor then return left
    return left;
}

void Parser::printAST(ASTNode& ast, int indent) {
    for (int i = 0; i < indent; i++) {
        std::cout << " | ";
    }

    std::cout << ast.toString() << std::endl;

    for (auto& child : ast.children) {
        printAST(*child, indent + 1);
    }
}

// ASTNode* Parser::parseTerm() {
//     advance();
// }
