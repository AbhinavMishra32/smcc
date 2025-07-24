#pragma once
#include <string>
#include <vector>
#include <memory>

enum class ASTType {
    Function,
    ReturnStmt,
    Block,
    UnaryMinus,
    UnaryPlus,
    Number,
    Variable
};

struct ASTNode {
public:
    ASTType type;
    std::string value;
    std::vector<std::shared_ptr<ASTNode>> children;

    ASTNode(ASTType t, const std::string& val = "");
    void addChild(std::shared_ptr<ASTNode> child);
};
