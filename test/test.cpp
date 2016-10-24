#include <gtest/gtest.h>
#include"polinbrom.h"

TEST(Addition, correct_with_zero)
{
	EXPECT_TRUE(polindrom_or_not(0));
}

TEST(Addition, correct_with_one_element)
{
	nambers* first;
	first=new nambers;
	first->date=5;
	first->next=0;
	EXPECT_TRUE(polindrom_or_not(first));
}

TEST(Addition, correct_with_five_element)
{
	nambers* first, *box;
	first=new nambers;
	box=first;
	for(int i=0; i<5; i++)
	{
		box->date=5;
		if(i!=4)
		{
			box->next=new nambers;
			box=box->next;
		}
		box->next=0;
	}
	EXPECT_TRUE(polindrom_or_not(first));
}

TEST(Addition, ancorrect_with_five_element)
{
	nambers* first, *box;
	first=new nambers;
	box=first;
	for(int i=0; i<5; i++)
	{
		box->date=i;
		if(i!=4)
		{
			box->next=new nambers;
			box=box->next;
		}
		box->next=0;
	}
	EXPECT_FALSE(polindrom_or_not(first));
}

TEST(Addition, correct_with_four_element)
{
	nambers* first, *box;
	first=new nambers;
	box=first;
	for(int i=0; i<4; i++)
	{
		box->date=1;
		if(i!=3)
		{
			box->next=new nambers;
			box=box->next;
		}
		box->next=0;
	}
	EXPECT_TRUE(polindrom_or_not(first));
}

TEST(Addition, ancorrect_with_four_element)
{
	nambers* first, *box;
	first=new nambers;
	box=first;
	for(int i=0; i<4; i++)
	{
		box->date=i;
		if(i!=3)
		{
			box->next=new nambers;
			box=box->next;
		}
		box->next=0;
	}
	EXPECT_FALSE(polindrom_or_not(first));
}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}