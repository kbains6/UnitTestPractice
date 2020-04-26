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


/* END OF NUMBER TEST */

