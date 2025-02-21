#ifndef SUB_H
#define SUB_H

#include "node.h"

class Sub : public INode{

    private:
        INode* left;
        INode* right;

    public:
        Sub(INode* l, INode* r);
        ~Sub();

        void print() const override;
        double calc() const override;
};


#endif