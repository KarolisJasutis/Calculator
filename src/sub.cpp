#include "sub.h"

Sub::Sub(INode* l, INode* r) : left(l), right(r) {}

Sub::~Sub() {
    delete left;
    delete right;
}

void Sub::print() const{
    std::cout << "(";
    left->print();
    std::cout << " - ";
    right->print();
    std::cout << ")";
}

double Sub::calc() const{
    return left->calc() - right-> calc();
}