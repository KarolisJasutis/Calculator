#include <gtest/gtest.h>
#include "node.h"
#include "sub.h"
//#include "value.h"

TEST(SubTest, BasicSubtraction) {
    INode* num1 = new Value(10);
    INode* num2 = new Value(7);
    INode* sub = new Sub(num1, num2);

    EXPECT_EQ(sub->calc(), 3);

    delete sub;
}

TEST(subTest, HandlesNegateNumbers) {

    INode* num1 = new Value(-1);
    INode* num2 = new Value(-5);
    INode* sub = new Sub(num1, num2);

    EXPECT_EQ(sub->calc(), 4);

    delete sub;
}