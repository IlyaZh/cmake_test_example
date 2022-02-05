#include <gtest/gtest.h>
#include "../class.h"
#include <optional>

TEST(ClassTest, BasicAssetions) {
    Class c;
    EXPECT_EQ(c.multiplyTwo(5), 10);
    EXPECT_EQ(c.divide(10,2), 5);
    EXPECT_EQ(c.divide(10,0), std::nullopt);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}