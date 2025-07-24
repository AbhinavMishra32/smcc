#include "parser.hh"

void error(const std::string& message) {
    std::cerr << "Parser error: " << message << std::endl;
    exit(1);
}

Parser::Parser(Lexer& lexer) : _lexer(lexer), _current(_lexer.nextToken()) {
}

void Parser::expect(TokenType type) {
    if (_current.getType() != type) {
        throw std::runtime_error("Expected token " + Token::tokenTypeToString(type) + " but got " + Token::tokenTypeToString(_current.getType()));
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
    if (_current.getType() == TokenType::Ident) {
        return new ASTNode(ASTType::Variable, _current.getText());
    }
    else if (_current.getType() == TokenType::LParan) {
        advance();
        ASTNode* expr = parseExpression();
        expect(TokenType::RParan);
        return expr;
    }
    else if (_current.getType() == TokenType::Minus) {
        advance();
        ASTNode* operand = parseFactor();
        auto node = new ASTNode(ASTType::UnaryMinus);
        node->addChild(std::shared_ptr<ASTNode>(operand));
        return node;
    }

    error("Unexpected token in factor");
    return nullptr;
}

// ASTNode* Parser::parseTerm() {
//     advance();
// }
