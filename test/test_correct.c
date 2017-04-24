#include "ctest.h"
#include "game.h"
#include "game.c"


CTEST(PlayerComputerEasy, take_1_match)
{
	int num=1;
	bool result = PlayerComputerEasy();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerEasy, take_10_matches)
{
	int num=10;
	bool result = PlayerComputerEasy();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerEasy, take_11_matches)
{
	int num=11;	
	bool result = PlayerComputerEasy();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerEasy, take_110_matches)
{
	int num=110;
	bool result = PlayerComputerEasy();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerHard(), take_1_match)
{
	int num=1;	
	bool result = PlayerComputerHard();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerHard(), take_10_matches)
{
	int num=10;
	bool result = PlayerComputerHard();
	bool expected = true;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerHard(), take_11_matches)
{
	int num=11;
	bool result = PlayerComputerHard();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(PlayerComputerHard(), take_110_matches)
{
	int num=110;
	bool result = PlayerComputerHard();
	bool expected = false;
	ASSERT_DBL_NEAR(expected, result);
}

