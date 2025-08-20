#include "ast.hh"
#include "sema.hh"
#include <cstdint>
#include <unordered_map>
#include <vector>


void ScopeStack::enterScope(){
  // push empty symtol table, we will add stuff to it when we find decl in scope
  stack.push_back(SymbolTable{});
}

void ScopeStack::leaveScope(){
  stack.pop_back();
}

void ScopeStack::declare(const std::string &name, Type *type, Symbol::Kind kind, ASTNode *ast, bool isGlobal){
  // adding value Symbol to name key in the top most unorderd_map
  stack.back()[name] = Symbol{
    .kind = kind,
      .name = name,
      .type = type,
      .ast = ast,
      .isGlobal = isGlobal
  };
}

Symbol* ScopeStack::lookup(const std::string& name) {
  for(int i = stack.size() - 1; i >= 0; i--) {
    auto it = stack[i].find(name);
    if (it != stack[i].end()) {
      return &it->second; // return value, not key (first)
    }
  }
  return nullptr; // not found
}

