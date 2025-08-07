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
    throw std::runtime_error("Expected token '" +
                             Token::tokenTypeToString(type) + "[" + _current.getText() + "]" + "' but got " + 
                             "'" +
                             Token::tokenTypeToString(_current.getType()) + "[" + _current.getText() + "]" + "'");
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

// ASTNode* Parser::parseFunction() {
//     if (_current.getType() == TokenType:)
// }

// // for return <statement>
ASTNode* Parser::parseStatement() {
    if (_current.getType() == TokenType::Return) {
        advance();
        auto expr = parseExpression();
        ASTNode* returnNode = new ASTNode(ASTType::ReturnStmt);
        returnNode->addChild(std::shared_ptr<ASTNode>(expr));
        return returnNode;
    }
    else if (_current.getType() == TokenType::Ident) {
        auto result = parseAssignment();
        expect(TokenType::Semicolon);
        return result;
    }

    error("Unkown statement type");
    return nullptr;
}

ASTNode* Parser::parseAssignment(){
    if (_current.getType() == TokenType::Ident) {
        std::string varName = _current.getText();
        advance();
        if (_current.getType() == TokenType::Equals) {
            advance();
            auto right = parseExpression();
            ASTNode* leftNode = new ASTNode(ASTType::Identifier, varName);

            ASTNode* assignNode = new ASTNode(ASTType::Assign, "=");
            assignNode->addChild(std::shared_ptr<ASTNode>(leftNode));
            assignNode->addChild(std::shared_ptr<ASTNode>(right));
            return assignNode;
        } else {
            return new ASTNode(ASTType::Identifier, varName);
        }

    }

    return parseExpression();

}

// for Ident, Number
ASTNode* Parser::parseFactor() {
    // advance();
    // std::cout << getCurrent().toString() << std::endl;
    // std::cout << Token::tokenTypeToString(_current.getType()) << std::endl;

    if (_current.getType() == TokenType::Number) {
        // std::cout << "Number" << std::endl;
        std::string value = _current.getText();
        advance();
        return new ASTNode(ASTType::Number, value);
    }
    else if (_current.getType() == TokenType::LParan) {
        advance();
        auto expr = parseExpression();
        expect(TokenType::RParan);
        return expr;
    }

    error("Unexpected token in factor");
    return nullptr;
}

ASTNode* Parser::parseTerm() {
    auto left = parseFactor();

    while (_current.getType() == TokenType::Mul || _current.getType() == TokenType::Div) {
        TokenType op = _current.getType();
        advance();
        auto right = parseFactor();
        ASTNode* binaryNode = new ASTNode(
            op == TokenType::Mul ? ASTType::BinaryMul : ASTType::BinaryDiv, op == TokenType::Mul ? "*" : "/"
        );
        binaryNode->addChild(std::shared_ptr<ASTNode>(left));
        binaryNode->addChild(std::shared_ptr<ASTNode>(right));

        left = binaryNode;
    }

    // if not * or / in right of it then return just single node
    return left;
}
 
ASTNode* Parser::parseExpression() {
    auto left = parseTerm();

    while (_current.getType() == TokenType::Minus || _current.getType() == TokenType::Plus) {
        TokenType op = _current.getType();
        advance();
        auto right = parseTerm();

        ASTNode* binaryNode = new ASTNode(
            op == TokenType::Minus ? ASTType::BinaryMinus : ASTType::BinaryPlus, op == TokenType::Minus ? "-" : "+"
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
        std::cout << "│   ";
    }
    
    if (indent > 0) {
        std::cout << "└─ ";
    }

    std::cout << ast.toString() << "(" << ast.value << ")" << std::endl;

    for (auto& child : ast.children) {
        printAST(*child, indent + 1);
    }
}