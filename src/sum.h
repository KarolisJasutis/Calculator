#ifndef SUM_H
#define SUM_H

#include "node.h"

class Sum : public INode{

    private:
        INode* left;
        INode* right;

    public:
        Sum(INode* l, INode* r);
        ~Sum();

        void print() const override;
        double calc() const override;
};


#endif