#include <gtest/gtest.h>
#include "conio.h"
#include "stack.h"
TEST(stack,can_push_in_incomplete_stack){
	stack a;
	EXPECT_EQ(true,a.push(3));
	EXPECT_EQ(1, a.getcount());
	}
TEST(stack, non_can_push_in_complete){
	stack a;
	a.push(5);
	a.push(31);
	a.push(3);
	a.push(43);
	a.push(1);
	ASSERT_ANY_THROW(a.push(1));
}

TEST(stack, can_get_top_in_non_empty_stack){
	stack a;
	a.push(1);
	a.push(2);
	EXPECT_EQ(2,a.GetTop());
}
TEST(stack, throws_when_get_top_in_empty_stack){
	stack a;
	ASSERT_ANY_THROW(a.GetTop());
	}
TEST(stack, throws_when_pop_in_empty_stack){
	stack a;
	ASSERT_ANY_THROW(a.pop());
}
TEST(stack, can_pop_top_in_non_empty_stack){
	stack a;
	a.push(2);
	a.push(6);
	EXPECT_EQ(true, a.pop());
	EXPECT_EQ(1,a.getcount());
	EXPECT_EQ(2,a.GetTop());
}
TEST(stack, throw_when_search_min_in_empty_stack){
	stack a;
	ASSERT_ANY_THROW(a.min());
}
TEST(stack, can_search_min_in_non_empty_spisok){
	stack a;
	a.push(5);
	a.push(31);
	a.push(3);
	a.push(43);
	a.push(1);
	EXPECT_EQ(1,a.min());
	}
int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
  
}
