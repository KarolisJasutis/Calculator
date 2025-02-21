#include "node.h"

Value::Value(double val) : value(val) {}

void Value::print() const {
    std::cout << value;
}

double Value::calc() const {
    return value;
}