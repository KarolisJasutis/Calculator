#include <gtest/gtest.h>
#include "node.h"
#include "expressiontree.h"
//#include "value.h"

TEST(ExprTest, BasicExpression) {
    ExpressionTree expr("2+5*5+2+5/5");
    INode* root = expr.Parser();
    EXPECT_EQ(root->calc(), 30);

    delete root;
}
