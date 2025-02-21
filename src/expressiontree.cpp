#include "expressiontree.h"
#include "sum.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include <cctype>  
#include <stdexcept>

ExpressionTree::ExpressionTree(const std::string& input) : input(input), pos(0) {}

INode* ExpressionTree::Parser() {
    INode* node = MulDiv();

    while (pos < input.length()) {
        char op = peek();
        if (op == '+' || op == '-') {
            advance();
            INode* right = MulDiv();
            if(op == '+') {
                node = new Sum(node, right);
            } else {
                node = new Sub(node, right);
            }
        } else {
            break;
        }
    }
    return node;
}

INode* ExpressionTree::MulDiv() {
    INode* node = NumPar();

    while (pos < input.length()) {
        char op = peek();
        if (op == '*' || op == '/'){
            advance();
            INode* right = NumPar();
            if ( op == '*') {
                node = new Mult(node, right);
            } else {
            node = new Div(node, right);
            }
        } else {
            break;
        }
    }
    return node;
}

INode * ExpressionTree::NumPar() {
    char current = peek();
    
    if (std::isdigit(current)) {
        return new Value(Number());
    } else if (current == '(') {
        advance();
        INode* expr = Parser();
        if (peek() == ')') {
            advance();
        } else {
            throw std::runtime_error("Mismatched parentheses");
        }
        return expr;
    }

    throw std::runtime_error("Unexpected character in factor");
}

char ExpressionTree::peek() const {
    return input[pos];
}

char ExpressionTree::advance() {
    return input[pos++];
}

double ExpressionTree::Number() {
    size_t start = pos;
    while (pos < input.length() && std::isdigit(input[pos])) {
        advance();
    }
    return std:: stod(input.substr(start, pos - start));
}