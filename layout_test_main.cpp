#include "gtest/gtest.h"
#include "layout.hpp"
#include <iostream>

// TEST(MyTestSuitName, MyTestCaseName) {
//     int actual = 1;
//     EXPECT_GT(actual, 0);
//     EXPECT_EQ(1, actual) << "Should be equal to one";
// }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}