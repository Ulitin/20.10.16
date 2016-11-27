#include <gtest/gtest.h>
#include "stack.h"

TEST(Addition, correct_with_zero) {
    stack a;
    ASSERT_ANY_THROW(a.min());
}

TEST(Addition, found_min_in_two_el_1) {
    stack a;
    a.push(25);
    a.push(0);
    EXPECT_EQ(0 , a.min());
}

TEST(Addition, found_min_in_two_el_2) {
    stack a;
    a.push(25);
    a.push(150);
    EXPECT_EQ(25 , a.min());
}

TEST(Addition, found_min_in_three_el_1) {
    stack a;
    a.push(25);
    a.push(150);
    a.push(-10);
    EXPECT_EQ(-10 , a.min());
}

TEST(Addition, found_min_in_three_el_2) {
    stack a;
    a.push(25);
    a.push(-25);
    a.push(-10);
    EXPECT_EQ(-25 , a.min());
}

TEST(Addition, found_min_in_three_el_3) {
    stack a;
    a.push(-15);
    a.push(150);
    a.push(-10);
    EXPECT_EQ(-15 , a.min());
}

TEST(Addition, test_on_top_and_pop) {
    stack a;
    a.push(-15);
    a.push(150);
    EXPECT_EQ(150 , a.top());
    a.pop();
    EXPECT_EQ(-15 , a.top());
    a.pop();
    EXPECT_FALSE(a.pop());
    ASSERT_ANY_THROW(a.top());
}

int main(int ac, char* av[]) {
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}

