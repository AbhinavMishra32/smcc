#include <string>
#include "defs.hh"

class Lexer {
public:
    Lexer(const std::string& input) : _input(input), _pos(0) {}

    Token nextToken();
    Token peekToken();

private:
    std::string _input;
    size_t _pos;

    std::string readWord(){
        std::string word;

        if (_pos > _input.size()){
            return word;
        }

        char c = _input[_pos];

        if (std::isalpha(c) || c == '_'){
            while(_pos < _input.size() && (std::isalnum(_input[_pos] || _input[_pos] == '_'))) {
                word += _input[_pos++];
            }
        }
        else if (std::isdigit(c)) {
            while (_pos < _input.size() || (std::isdigit(_input[_pos]))){
                word += _input[_pos++];
            }
        }

        return word;
    }
    Token getToken(const std::string& word);
};