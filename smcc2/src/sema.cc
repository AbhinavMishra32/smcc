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

struct Symbol {
  enum Kind { Decl, Var, Func, Const, Void, Bool, i32 } kind;
  std::string name;
  Type *type; // for function its function type; for Var its variable type
  ASTNode *ast;
  bool isGlobal;
};

using SymbolTable = std::unordered_map<std::string,Symbol>;

class ScopeStack {
  std::vector<SymbolTable> stack;

  public:
  void enterScope(){
    // push empty symtol table, we will add stuff to it when we find decl in scope
    stack.push_back(SymbolTable{});
  }
  void leaveScope(){
    stack.pop_back();
  }
  void declare(const std::string &name, Type *type, Symbol::Kind kind, ASTNode *ast = nullptr, bool isGlobal = false){
    // adding value Symbol to name key in the top most unorderd_map
    stack.back()[name] = Symbol{
      .kind = kind,
        .name = name,
        .type = type,
        .ast = ast,
        .isGlobal = isGlobal
    };
  }
  Symbol* lookup(const std::string& name) {
    for(int i = stack.size() - 1; i >= 0; i--) {
      auto it = stack[i].find(name);
      if (it != stack[i].end()) {
        return &it->second; // return value, not key (first)
      }
    }
    return nullptr; // not found
  }
};



