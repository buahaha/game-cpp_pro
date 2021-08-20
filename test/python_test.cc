#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
  EXPECT_EQ(1, 1);
}