#include <iostream>
#include "node.h"
#include "sum.h"

int main() {
    INode* num1 = new Value(2);
    INode* num2 = new Value(3);
    INode* sum = new Sum(num1, num2);

    sum->print();
    std::cout << std::endl;
    std::cout << "rez: " << sum->calc() << std::endl; 


    //Value val(5.0);
//
    //std::cout << "Printing value: ";
    //val.print();
    //std::cout << std::endl;
//
    //std::cout << "Calculated val: " << val.calc() << std::endl;
    return 0;
}