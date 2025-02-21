#include "expressiontree.h"
#include "sum.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include <cctype>  
#include <iostream>
#include <sstream>

ExpressionTree::ExpressionTree(const std::string& input) : input(input), pos(0) {}

std::string ExpressionTree::replaceVariables(const std::string& input){
    char variables[26];
    double values[26];
    int varCount =0;
    std::stringstream ss;

    for (char ch : input) {
        if (std::isalpha(ch)) {
            bool found = false;
            for (int i = 0; i < varCount; i++) {
                if (variables[i] == ch) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Enter value for " << ch << ": ";
                std::cin >> values[varCount];
                variables[varCount] = ch;
                varCount++;
            }
        }
    }
    for (char ch : input) {
        if (std::isalpha(ch)) {
            for (int i = 0; i < varCount; i++) {
                if (variables[i] == ch) {
                    ss << values[i];
                    break;
                }
            }
        } else {
            ss << ch;
        }
    }
    
    return ss.str();
}

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
        advance();

        return expr;
    }
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