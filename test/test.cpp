#include <gtest/gtest.h>




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

