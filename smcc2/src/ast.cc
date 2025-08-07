#include "ast.hh"

ASTNode::ASTNode(ASTType t, const std::string& val) : type(t), value(val) {}

void ASTNode::addChild(std::shared_ptr<ASTNode> child){
    children.push_back(child);
}

std::string ASTNode::toString() {
    switch (type) {
        case ASTType::Assign: return "Assign";
        case ASTType::Block: return "Block";
        case ASTType::ReturnStmt: return "ReturnStmt";
        case ASTType::Function: return "Function";
        case ASTType::Number: return "Number";
        case ASTType::BinaryMul: return "BinaryMultiply";
        case ASTType::BinaryDiv: return "BinaryDiv";
        case ASTType::UnaryMinus: return "UnaryPlus";
        case ASTType::UnaryPlus: return "UnaryPlus";
        case ASTType::BinaryMinus: return "BinaryMinus";
        case ASTType::BinaryPlus: return "BinaryPlus";
        case ASTType::Identifier: return "Identifier";
        default: return "UnkownNode";
    }
}
