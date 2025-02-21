#include <gtest/gtest.h>
#include "node.h"
#include "div.h"
//#include "value.h"

TEST(DivTest, BasicDivition) {
    INode* num1 = new Value(10);
    INode* num2 = new Value(2);
    INode* div = new Div(num1, num2);

    EXPECT_EQ(div->calc(), 5);

    delete div;
}

TEST(DivTest, HandlesZero) {

    INode* num1 = new Value(0);
    INode* num2 = new Value(7);
    INode* div = new Div(num1, num2);

    EXPECT_EQ(div->calc(), 0);

    delete div;
}
