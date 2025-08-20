#pragma once
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
  void enterScope();
  void leaveScope();
  void declare(const std::string &name, Type *type, Symbol::Kind kind, ASTNode *ast = nullptr, bool isGlobal = false);
  Symbol* lookup(const std::string &name);
};

class SAnalayzer {
  ScopeStack scopes;

public:
  void analyze(ASTNode* root);

private:
  void visit(ASTNode* node);
  void visitBlock(ASTNode* block);
  void visitFunction(ASTNode* fn);
  void visitDeclaration(ASTNode* decl);
  void visitAssign(ASTNode* assign);
  void visitReturn(ASTNode* ret);
  void visitExpr(ASTNode* expr);

  void error(ASTNode* where, const std::string &msg);
};
