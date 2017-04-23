#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "game.c"

int main()
{
printf("\n\t\t\tWelcome to the game 100 matches!!!\n");
printf("To start the game, press any key.\n");
_getch();
system("cls");
menu();
return 0;
}
