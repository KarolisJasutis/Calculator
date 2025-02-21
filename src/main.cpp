#include <iostream>
#include "node.h"
#include "sum.h"
#include "string"
#include "expressiontree.h"

int main() {

std::string input;
std::cout << "Enter expression: ";
std::getline(std::cin, input);
//std::cout << input <<std::endl;

input = ExpressionTree::replaceVariables(input);

try {
    ExpressionTree expr(input);
    INode* root = expr.Parser();

    std::cout << "Expression with parentheses: ";
    root->print(); 
    std::cout << " = ";

    std::cout<< root->calc() << std::endl;

    delete root;
} catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
}

    return 0;
}