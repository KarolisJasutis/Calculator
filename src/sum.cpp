#include "sum.h"

Sum::Sum(INode* l, INode* r) : left(l), right(r) {}

Sum::~Sum() {
    delete left;
    delete right;
}

void Sum::print() const{
    std::cout << "(";
    left->print();
    std::cout << " + ";
    right->print();
    std::cout << ")";
}

double Sum::calc() const{
    return left->calc() + right-> calc();
}