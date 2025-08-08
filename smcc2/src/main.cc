#include <iostream>
#include <fstream>
#include <sstream>
#include "lexer.hh"
#include "parser.hh"
#include "ast.hh"


std::string readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("File not found: " + filename);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    return buffer.str();
}

int main(int argc, char* argv[]){
    // std::string sourceCode = R"(int main() { return 42; })";
    // std::string sourceCode = R"(k = "(23 - 43) * 34 / 3;)";

    std::string sourceCode = readFile(argv[1]);

    Lexer lexer(sourceCode);

    if (argc > 2 && std::string(argv[2]) == "--lex") {
        while (true) {
            Token tok = lexer.nextToken();
            if (tok.getType() == TokenType::EoF)
                break;

            std::cout << tok.toString() << std::endl;
        }
    }


    Parser parser(lexer);
    
    // ASTNode* ast = parser.parseFactor();
    ASTNode* ast = parser.parseFunction();
    parser.printAST(*ast, 0);

    return 0;
}

