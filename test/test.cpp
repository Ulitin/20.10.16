#include <gtest/gtest.h>
#include "queue.h"

TEST(Addition, correct_with_zero)
{
	int *a;
	a = 0;
	ASSERT_ANY_THROW(fun(0, a, 0));
}

TEST(Addition, correct_w_3)
{
	int size = 5;
	int *a;
	a = new int [size];
	for(int i = 0; i < size; i++){
		a[i]= i * 3;
	}
	double *b;
	b = fun(3, a, size);
	ASSERT_TRUE(b[0]==3);
	ASSERT_TRUE(b[1]==6);
	ASSERT_TRUE(b[2]==9);
}

TEST(Addition, correct_w_max)
{
	int size = 4;
	int *a;
	a = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
	double *b;
	b = fun(size, a, size);
	ASSERT_TRUE(b[0] == 1,5);
}

TEST(Addition, correct_w_min)
{
	int size = 3;
	int *a;
	a = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
	double *b;
	b = fun(1, a, size);
	for (int i = 0; i < size; i++) {
		ASSERT_TRUE(b[i] == i);
	}
}

TEST(Addition, correct_w_very_big)
{
	int *a;
	a = new int;
	a[0] = 0;
	ASSERT_ANY_THROW(fun(10, a, 1));
}

TEST(Addition, correct_with_zero)
{
	int *a;
	a = 0;
	ASSERT_ANY_THROW(fun(0, a, 0));
}

TEST(Addition, correct_w_3)
{
	int size = 5;
	int *a;
	a = new int [size];
	for(int i = 0; i < size; i++){
		a[i]= i * 3;
	}
	double *b;
	b = fun(3, a, size);
	ASSERT_TRUE(b[0]==3);
	ASSERT_TRUE(b[1]==6);
	ASSERT_TRUE(b[2]==9);
}

TEST(Addition, correct_w_max)
{
	int size = 4;
	int *a;
	a = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
	double *b;
	b = fun(size, a, size);
	ASSERT_TRUE(b[0] == 1,5);
}

TEST(Addition, correct_w_min)
{
	int size = 3;
	int *a;
	a = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = i;
	}
	double *b;
	b = fun(1, a, size);
	for (int i = 0; i < size; i++) {
		ASSERT_TRUE(b[i] == i);
	}
}

TEST(Addition, correct_w_very_big)
{
	int *a;
	a = new int;
	a[0] = 0;
	ASSERT_ANY_THROW(fun(10, a, 1));
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}