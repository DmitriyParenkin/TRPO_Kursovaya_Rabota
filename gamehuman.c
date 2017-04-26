#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Count, Num,Player;
bool Correct;
int PlayHuman() {
Player=1;
do {  
if (Player == 1) {
do {
       printf("Move Player1. There are %d matches on the table.\n", Count);
       printf("How many matches do you take?\n");
       scanf("%d",&Num);
       if (Num >= 1 && Num <= 10 && Num <= Count)
            Correct = true;
       else {
            printf("Wrong! Please try again!\n");
            Correct = false;
        } 
    } while (!Correct);
    }
    else {
    do {		
       printf("Move Player2. There are %d matches on the table.\n", Count);
       printf("How many matches do you take?\n");
       scanf("%d",&Num);
       if (Num >= 1 && Num <= 10 && Num <= Count)
            Correct = true;
       else {
            printf("Wrong! Please try again!\n");
            Correct = false;
        }	
    } while (!Correct);   
    }
    Count = Count - Num;
    if (Player == 1) 
        Player = 2;
    else 
        Player = 1;
    }
    while (Count > 0);
  if (Player == 2)
    printf("Won Player1!");
  else printf("Won Player2!");	
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