#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
  EXPECT_EQ(7*5-2, 33);
  EXPECT_STREQ("Phoenix", "Phoenix2");
}