#include "ctest.h"
#include "game.h"
#include "game.c"


CTEST(Input_test, take_1_match)
{
	const int Num=1;
	const int Count = 100;
	const int result = Input(Num, Count);
	const int expected = 1;
        ASSERT_EQUAL(expected, result);
}

CTEST(Input_test, take_10_matches)
{
	const int Num=10;
	const int Count = 100;
	const int result = Input(Num, Count);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(Input_test, take_11_matches)
{
	const int Num=11;
	const int Count = 100;
	const int result = Input(Num, Count);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(Input_test, take_100_matches)
{
	const int Num=100;
	const int Count = 100;
	const int result = Input(Num, Count);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(Input_test, take_10_matches_counts_8)
{
	const int Num=10;
	const int Count = 8;
	const int result = Input(Num, Count);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(Input_test, take_11_matches_counts_8)
{
	const int Num=11;
	const int Count = 8;
	const int result = Input(Num, Count);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(Input_test, take_1_match_counts_1)
{
	const int Num=1;
	const int Count = 1;
	const int result = Input(Num, Count);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(Output1_test, count_100)
{
	Count = 100;
	const int result = Output1();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output1_test, count_10)
{
	Count = 10;
	const int result = Output1();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output1_test, count_5)
{
	Count = 5;
	const int result = Output1();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output1_test, count_1)
{
	Count = 1;
	const int result = Output1();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output2_test, count_100_Num_1)
{
        Num = 1;
	Count = 100;
	const int result = Output2();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output2_test, count_10_Num_1)
{
        Num = 1;
	Count = 10;
	const int result = Output2();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output2_test, count_3_Num_1)
{
        Num = 1;
	Count = 3;
	const int result = Output2();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output2_test, count_100_Num_10)
{
        Num = 10;
	Count = 100;
	const int result = Output2();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output2_test, count_10_Num_10)
{
        Num = 10;
	Count = 10;
	const int result = Output2();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Output2_test, count_3_Num_10)
{
        Num = 10;
	Count = 3;
	const int result = Output2();
	const int expected1 = 1;
	const int expected2 = 10;
	ASSERT_INTERVAL(expected1, expected2, result);
}

CTEST(Transition, player_1)
{
	Player=1;
	const int result = Transition();
	const int expected = 2;
	ASSERT_EQUAL(expected, result);
}

CTEST(Transition, player_2)
{
	Player=2;
	const int result = Transition();
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}
/*
CTEST(Victory, player_1)
{
	Player=1;
	const char* result = Victory();
	const char* expected = "You won!";
	ASSERT_STR(expected, result);
}

CTEST(Victory, player_2)
{
	const int Player=2;
	const char* result = Victory();
	const char* expected = "You lose!";
	ASSERT_STR(expected, result);
}
*/
