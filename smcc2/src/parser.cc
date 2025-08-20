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
                             Token::tokenTypeToString(type) + "' but got " + 
                             "'" +
                             Token::tokenTypeToString(_current.getType()) + "[" + _current.getText() + "]" + "'");
  }
  advance();
}

void Parser::advance(){
    _current = _lexer.nextToken();
}

Token Parser::peek() {
  return _lexer.peekToken();
}

bool Parser::match(TokenType type) {
  if (_current.getType() == type) {
    // advance();
    return true;
  }
  return false;
}

ASTNode* Parser::parseBlock() {
    expect(TokenType::LBrace);

    ASTNode* blockNode = new ASTNode(ASTType::Block);
    while(_current.getType() != TokenType::RBrace) {
        auto statementNode = parseStatement();
        blockNode->addChild(std::shared_ptr<ASTNode>(statementNode));
    }
    expect(TokenType::RBrace);
    return blockNode;
}

ASTNode* Parser::parse(){
  ASTNode* programNode = new ASTNode(ASTType::Program);
  while(_current.getType() != TokenType::EoF) {
    // because just seeing int doesnt tell us if its var decl or function decl
    // auto funcReturnType = _current.getType();
    // advance();
    // auto funcName = _current.getText();
    // if (funcReturnType == TokenType::Int && _current.getType() == TokenType::Equals) {
    // }
    
    auto t1 = _lexer.peekToken().getType();
    auto t2 = _lexer.peekToken(1).getType();

    if(match(TokenType::Int) && t1 == TokenType::Ident && t2 == TokenType::LParan) {
      auto functionNode = parseFunction();
      programNode->addChild(std::shared_ptr<ASTNode>(functionNode));
      continue;
    }

    auto statementNode = parseStatement();
    programNode->addChild(std::shared_ptr<ASTNode>(statementNode));
  }

  return programNode;
}

ASTNode* Parser::parseFunction() {
    if (_current.getType() == TokenType::Int) {
        advance();

        if (_current.getType() == TokenType::Ident) {
            std::string functionName = _current.getText();
            advance();

        expect(TokenType::LParan);
        // TODO: add function arguments
        expect(TokenType::RParan);

        if (_current.getType() == TokenType::LBrace) {
            auto block = parseBlock();

            ASTNode* functionNode = new ASTNode(ASTType::Function, functionName);
            functionNode->addChild(std::shared_ptr<ASTNode>(block));
            return functionNode;
            }
        }
    }
    error("Unexpected token in function [" + _current.getText() + "]");
    return nullptr;
}

// // for return <statement>
ASTNode* Parser::parseStatement() {
    if (_current.getType() == TokenType::Return) {
        advance();
        auto expr = parseExpression();
        expect(TokenType::Semicolon);
        ASTNode* returnNode = new ASTNode(ASTType::ReturnStmt);
        returnNode->addChild(std::shared_ptr<ASTNode>(expr));
        return returnNode;
    }
    else if (_current.getType() == TokenType::Int) {
        advance();
        std::string varName = _current.getText();
        expect(TokenType::Ident);
        ASTNode* declaredVar = new ASTNode(ASTType::Declaration, varName);
        declaredVar->varType = VariableType::Int;

        if (_current.getType() == TokenType::Equals) {
            advance();
            ASTNode* initExpr = parseExpression();
            declaredVar->addChild(std::shared_ptr<ASTNode>(initExpr));
        }
        expect(TokenType::Semicolon);
        return declaredVar;
    }
    else if (_current.getType() == TokenType::Ident) {
        auto result = parseAssignment();
        expect(TokenType::Semicolon);
        return result;
    }

    error("Unexpected token in statement [" + _current.getText() + "]");
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
            // Not an assignment, just return the identifier
            return new ASTNode(ASTType::Identifier, varName);
        }
    }

    error("parseAssignment called without identifier");
    return nullptr;

}

// for Ident, Number
ASTNode* Parser::parseFactor() {
    if (_current.getType() == TokenType::Ident && _lexer.peekToken().getType() == TokenType::LParan) {
        std::string funcName = _current.getText();
        advance(); // consume identifier
        expect(TokenType::LParan); 

        ASTNode* callNode = new ASTNode(ASTType::FuncCall, funcName);
        // Parse argument list (possibly empty)
        if (_current.getType() != TokenType::RParan) {
            while (true) {
                callNode->addChild(std::shared_ptr<ASTNode>(parseExpression()));
                if (_current.getType() == TokenType::Comma) {
                    advance();
                    continue;
                }
                break;
            }
        }
        expect(TokenType::RParan);
        return callNode;
    }
    // Number literal
    else if (_current.getType() == TokenType::Number) {
        std::string value = _current.getText();
        advance();
        return new ASTNode(ASTType::Number, value);
    }
    // Identifier
    else if (_current.getType() == TokenType::Ident) {
        std::string value = _current.getText();
        advance();
        return new ASTNode(ASTType::Identifier, value);
    }
    // Parenthesized expression
    else if (_current.getType() == TokenType::LParan) {
        advance();
        auto expr = parseExpression();
        expect(TokenType::RParan);
        return expr;
    }

    error("Unexpected token in factor [" + _current.getText() + "]");
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

    std::cout << ast.toString() << "(" << ast.value;
    if (ast.varType.has_value()) {
        std::cout << ", " << ast.variableTypeToString(ast.varType.value());
    }
    std::cout << ")" << std::endl;

    for (auto& child : ast.children) {
        printAST(*child, indent + 1);
    }
}
