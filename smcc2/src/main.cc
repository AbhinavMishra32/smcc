#include <iostream>
#include "lexer.hh"

int main(){
    std::string sourceCode = R"(int main() { return 42; })";

    Lexer lexer(sourceCode);

    while (true) {
        Token tok = lexer.nextToken();
        if (tok.getType() == TokenType::EoF) break;

        std::cout << tok.toString() << std::endl;
    }

    return 0;
}