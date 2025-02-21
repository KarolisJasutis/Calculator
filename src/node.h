#ifndef NODE_H
#define NODE_H
#include <iostream>

class INode {
    public:
        virtual void print() const = 0;
        virtual double calc() const = 0;
        virtual ~INode() = default;
};

class Value: public INode {
    private:
        double value;

    public:
        Value(double var);

        void print() const override;
        double calc() const override;
};


#endif