/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/* PALINDROME TESTS */
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aaabaabaaabbcbbaaabaabaaa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_casing_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABBA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_mixed_casing_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("hello");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_FALSE(actual);
}

/* END OF PALINDROME TESTS */

/* NUMBER TEST */

TEST(PracticeTest, order_is_correct_ranking)
{
    Practice obj;
    int a = 3;
    int b = 2;
    int c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_LE(c,a); 
    ASSERT_LE(b,a); 
    ASSERT_LE(c,b);  
}

TEST(PracticeTest, order_is_correct_number)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 3;
    obj.sortDescending(a,b,c);
    EXPECT_EQ(3,a); 
    EXPECT_EQ(2,b); 
    EXPECT_EQ(1,c);  
}

TEST(PracticeTest, order_is_correct_with_negative)
{
    Practice obj;
    int a = 3;
    int b = -2;
    int c = 1;
    obj.sortDescending(a,b,c);
    EXPECT_EQ(3,a); 
    EXPECT_EQ(1,b); 
    EXPECT_EQ(-2,c);  
}

/* END OF NUMBER TEST */

