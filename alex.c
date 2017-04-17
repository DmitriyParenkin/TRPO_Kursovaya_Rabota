#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void table_game(){
	printf("\t ____________________________________________________ \n");
	printf("\t|                         Menu                       |\n");
	printf("\t|____________________________________________________| \n");
	printf("\t|  |                                                 | \n");
	printf("\t|1.|Start game mode: human vs computer(singleplayer) | \n");
	printf("\t|__|_________________________________________________|\n");
	printf("\t|  |                                                 | \n");
	printf("\t|2.|Start game mode: against each other(multiplayer  | \n");
	printf("\t|__|_________________________________________________|\n");
	printf("\t|  |                                                 | \n");
	printf("\t|3.|                Exit from the game.              | \n");
	printf("\t|__|_________________________________________________|\n");
}
int main(){
	table_game();
}
