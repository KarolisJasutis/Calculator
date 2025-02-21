#ifndef MULT_H
#define MULT_H

#include "node.h"

class Mult : public INode{

    private:
        INode* left;
        INode* right;

    public:
        Mult(INode* l, INode* r);
        ~Mult();

        void print() const override;
        double calc() const override;
};


#endif