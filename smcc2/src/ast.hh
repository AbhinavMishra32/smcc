#pragma once
#include <string>
#include <vector>
#include <memory>
#include <optional>

enum class ASTType {
    Assign,
    Function,
    ReturnStmt,
    Block,
    UnaryMinus,
    UnaryPlus,
    BinaryMinus,
    BinaryPlus,
    BinaryMul,
    BinaryDiv,
    Number,
    Identifier,
    Declaration
};

enum class VariableType {
    Int,
    Bool,
    String
};

struct ASTNode {
public:
    ASTType type;
    std::string value;
    std::vector<std::shared_ptr<ASTNode>> children;
    // only for declared variables (int, bool, string)
    std::optional<VariableType> varType;

    ASTNode(ASTType t, const std::string& val = "");
    void addChild(std::shared_ptr<ASTNode> child);
    std::string toString();
    std::string variableTypeToString(VariableType t);
};
