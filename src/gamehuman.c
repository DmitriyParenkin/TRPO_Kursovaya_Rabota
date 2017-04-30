#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include "onegame.h" 

int Count, Num, Player, Correct;

int Input (int Num, int Count) {
       if (Num >= 1 && Num <= 10 && Num <= Count)
            Correct = 1;
       else
            Correct = 0;
return Correct;
}

int Transition() {
    if (Player == 1) 
        Player = 2;
    else 
        Player = 1;
    return Player;
    }

void Victory() {
    if (Player == 2)
       printf("Won Player1!");
    else printf("Won Player2!");	
  }


void PlayHuman() {
  Player=1;
  Count=100;
  do {  
     if (Player == 1) {
     do {
       printf("Move Player1. There are %d matches on the table.\n", Count);
       printf("How many matches do you take?\n");
       scanf("%d",&Num);
       Input(Num,Count);
       if (Correct == 0) printf("Wrong! Please try again!\n");
     } 
     while (!Correct);
   }
     else 
     {
     do {		
       printf("Move Player2. There are %d matches on the table.\n", Count);
       printf("How many matches do you take?\n");
       scanf("%d",&Num);
       Input(Num,Count);
       if (Correct == 0) printf("Wrong! Please try again!\n");
     } 
     while (!Correct);   
    }
    Count = Count - Num;
    Transition();
    }
    while (Count > 0);
    Victory();
}

void table_game(){
	printf("\t ____________________________________________________ \n");
        printf("\t|                                                    | \n");
	printf("\t|                        Menu                        |\n");
	printf("\t|____________________________________________________| \n");
	printf("\t|  |                                                 | \n");
	printf("\t|1.|      Start game mode: player1 vs player2.       | \n");
	printf("\t|__|_________________________________________________|\n");
	printf("\t|  |                                                 | \n");
	printf("\t|2.|       Start game mode: human vs computer.       | \n");
	printf("\t|__|_________________________________________________|\n");
	printf("\t|  |                                                 | \n");
	printf("\t|3.|                  Instruction.                   | \n");
	printf("\t|__|_________________________________________________|\n");
        printf("\t|  |                                                 | \n");
	printf("\t|4.|               Exit from the game.               | \n");
	printf("\t|__|_________________________________________________|\n");
}