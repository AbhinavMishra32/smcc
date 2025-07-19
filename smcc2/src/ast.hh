#include <string>
#include <vector>

enum class ASTType {
    Function,
    ReturnStmt,
    Block,
    BinaryOp,
    Number,
    Variable
};

struct ASTNode {
    ASTType type;
    std::string value;
    std::vector<ASTNode*> children;
};