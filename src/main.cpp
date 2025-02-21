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

    std::cout<<"rez: " << root->calc() << std::endl;

    delete root;
} catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
}



    //INode* num1 = new Value(2);
    //INode* num2 = new Value(3);
    //INode* sum = new Sum(num1, num2);
//
    //sum->print();
    //std::cout << std::endl;
    //std::cout << "rez: " << sum->calc() << std::endl; 


    //Value val(5.0);
//
    //std::cout << "Printing value: ";
    //val.print();
    //std::cout << std::endl;
//
    //std::cout << "Calculated val: " << val.calc() << std::endl;
    return 0;
}