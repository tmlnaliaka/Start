#include <gtest/gtest.h>
#include "Age Voting.cpp"
#include "Right Age voting.cpp"

TEST(AgeVotingTest, TestValidAge) {
    EXPECT_TRUE(isValidAge(18));
    EXPECT_TRUE(isValidAge(25));
}

TEST(AgeVotingTest, TestInvalidAge) {
    EXPECT_FALSE(isValidAge(17));
    EXPECT_FALSE(isValidAge(150));
}

TEST(RightAgeVotingTest, TestVotingEligibility) {
    EXPECT_TRUE(isEligibleToVote(18));
    EXPECT_TRUE(isEligibleToVote(21));
}

TEST(RightAgeVotingTest, TestVotingIneligibility) {
    EXPECT_FALSE(isEligibleToVote(16));
    EXPECT_FALSE(isEligibleToVote(17));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}