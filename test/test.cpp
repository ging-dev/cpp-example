#include "ginglib.h"
#include "gtest/gtest.h"

GingLib app;

TEST (GingLib, isPrime) {
    ASSERT_TRUE(app.isPrime(2));
    ASSERT_FALSE(app.isPrime(1));
    ASSERT_FALSE(app.isPrime(6));
    ASSERT_FALSE(app.isPrime(10));
    ASSERT_TRUE(app.isPrime(11));
}

TEST (GingLib, isSquare) {
    ASSERT_TRUE(app.isSquare(4));
    ASSERT_FALSE(app.isSquare(5));
}

TEST(GingLib, OddOrEven) {
    EXPECT_EQ(0, app.OddOrEven(4));
    EXPECT_EQ(1, app.OddOrEven(3));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
