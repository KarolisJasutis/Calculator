#include "div.h"

Div::Div(INode* l, INode* r) : left(l), right(r) {}

Div::~Div() {
    delete left;
    delete right;
}

void Div::print() const{
    std::cout << "(";
    left->print();
    std::cout << " / ";
    right->print();
    std::cout << ")";
}

double Div::calc() const{
    return left->calc() / right-> calc();
}