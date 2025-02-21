#ifndef EXPRESSION_PARSER_H
#define EXPRESSION_PARSER_H

#include "node.h"
#include <string>

class ExpressionTree {

    public:
        explicit ExpressionTree(const std::string& input);
        INode* Parser();

    private:
        std::string input;
        size_t pos;

        INode* MulDiv();
        INode* NumPar();
        char peek() const;
        char advance();
        double Number();
};



#endif