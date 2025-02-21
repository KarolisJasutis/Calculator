#include <gtest/gtest.h>
#include "node.h"
#include "mult.h"
//#include "value.h"

TEST(MultTest, BasicMultiplication) {
    INode* num1 = new Value(3);
    INode* num2 = new Value(7);
    INode* mult = new Mult(num1, num2);

    EXPECT_EQ(mult->calc(), 21);

    delete mult;
}

TEST(MultTest, HandlesZero) {

    INode* num1 = new Value(0);
    INode* num2 = new Value(7);
    INode* mult = new Mult(num1, num2);

    EXPECT_EQ(mult->calc(), 0);

    delete mult;
}