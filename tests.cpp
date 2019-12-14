#include "gtest/gtest.h"
#include "lib.h"

TEST(findRoots, expectedTwoRoots) {

    int result=0;
    int massik[3] = {1,2,3};

    EXPECT_EQ(Sum_Mass(massik, 3), 6);

    int massikk[5] = {1,2,3,0,5};
    EXPECT_EQ(Sum_Mass(massikk, 5), 11);

    int massikkk[6] = {1,2,3,0,5,9};
    EXPECT_EQ(Sum_Mass(massikkk, 6), 20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
