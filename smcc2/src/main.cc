#include <iostream>
#include "lexer.hh"
#include "parser.hh"
#include "ast.hh"

int main(){
    // std::string sourceCode = R"(int main() { return 42; })";
    std::string sourceCode = R"(23 - 43)";

    Lexer lexer(sourceCode);

   //  while (true) {
   //      Token tok = lexer.nextToken();
   //      if (tok.getType() == TokenType::EoF) break;
   //
   //      std::cout << tok.toString() << std::endl;
   // }

    Parser parser(lexer);
    
    ASTNode* ast = parser.parseFactor();
    parser.printAST(*ast);

    return 0;
}

