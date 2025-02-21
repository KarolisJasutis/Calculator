#ifndef DIV_H
#define DIV_H

#include "node.h"

class Div : public INode{

    private:
        INode* left;
        INode* right;

    public:
        Div(INode* l, INode* r);
        ~Div();

        void print() const override;
        double calc() const override;
};


#endif