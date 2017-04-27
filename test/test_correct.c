#include "ctest.h"
#include "game.h"
#include "game.c"
#include "functions.c"


CTEST(Input, take_1_match)
{
	int num=1;
	int Count=100;
	bool result =  Input();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(Input, take_10_matches)
{
	int num=10;
	int Count=100;
	bool result =  Input();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(Input, take_11_matches)
{
	int num=11;
	int Count=100;
	bool result =  Input();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(Input, take_100_matches)
{
	int num=100;
	int Count=100;
	bool result =  Input();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(Input, take_10_matches)
{
	int num=10;
	int Count=8;
	bool result =  Input();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(Input, take_11_matches)
{
	int num=11;
	int Count=8;
	bool result =  Input();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(Input, take_1_match)
{
	int num=1;
	int Count=1;
	bool result =  Input();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

