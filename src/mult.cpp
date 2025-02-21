#include "mult.h"

Mult::Mult(INode* l, INode* r) : left(l), right(r) {}

Mult::~Mult() {
    delete left;
    delete right;
}

void Mult::print() const{
    std::cout << "(";
    left->print();
    std::cout << " * ";
    right->print();
    std::cout << ")";
}

double Mult::calc() const{
    return left->calc() * right-> calc();
}