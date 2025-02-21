#include <gtest/gtest.h>
#include "node.h"
#include "sum.h"
//#include "value.h"

TEST(SumTest, BasicAddition) {
    INode* num1 = new Value(3);
    INode* num2 = new Value(7);
    INode* sum = new Sum(num1, num2);

    EXPECT_EQ(sum->calc(), 10);

    delete sum;
}

TEST(SumTest, HandlesNegateNumbers) {

    INode* num1 = new Value(-3);
    INode* num2 = new Value(7);
    INode* sum = new Sum(num1, num2);

    EXPECT_EQ(sum->calc(), 4);

    delete sum;
}