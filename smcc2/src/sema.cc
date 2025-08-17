#include "ast.hh"
#include <cstdint>
#include <unordered_map>
#include <vector>

struct Type {
  enum Kind { Void, Bool, I32, I64, Func } kind;
  uint32_t size, align;

  struct {
    std::vector<Type *> params;
    Type *result;
    bool vararg;
  } fn;
};

struct Decl {
  enum Kind { Var, Func, Const } kind;
  std::string name;
  Type *type; // for function its function type; for Var its variable type
  ASTNode *ast;

  // research about mutable
  // bool isMutable;
  bool isGlobal;
};

struct Scope {
  Scope *parent = nullptr;
  std::unordered_map<std::string, std::vector<Decl *>>
      buckets; // allow overloading: vector
};

struct SemInfo {
  Type *type = nullptr;
  Decl *binding = nullptr;
  bool isLValue = false;
};
