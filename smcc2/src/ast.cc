#include "ast.hh"

ASTNode::ASTNode(ASTType t, const std::string& val) : type(t), value(val) {}

void ASTNode::addChild(std::shared_ptr<ASTNode> child){
    children.push_back(child);
}

std::string ASTNode::toString() {
    switch (type) {
        case ASTType::Block: return "Block";
        case ASTType::ReturnStmt: return "ReturnStmt";
        case ASTType::Function: return "Function";
        case ASTType::Number: return "Number";
        case ASTType::UnaryMinus: return "UnaryPlus";
        case ASTType::UnaryPlus: return "UnaryPlus";
        case ASTType::Variable: return "Variable";
        default: return "UnkownNode";
    }
}
