#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "game.h"
//#include "game.c"

int main()
{
    printf("\n\t\t\tWelcome to the game 100 matches!!!\n");
    printf("To start the game, press any key.\n");
    //_getch();
    getchar();
    system("cls");
    Menu();
    return 0;
}
