#include "ast.hh"

ASTNode::ASTNode(ASTType t, const std::string& val = "") : type(t), value(val) {}

void ASTNode::addChild(std::shared_ptr<ASTNode> child){
    children.push_back(child);
}