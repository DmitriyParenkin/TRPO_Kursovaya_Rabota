#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int Count=100;
int Num,Player;
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