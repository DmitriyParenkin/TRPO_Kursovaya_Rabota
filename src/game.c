#include "game.h"
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Count,Num,Player,Correct;


int Input(int Num, int Count) {

        if((Num>=1) && (Num<=10) && (Num<=Count))
            Correct=1;
        else
            Correct=0;
return Correct;
}

int Output1(Num,Count) {
  
  Num=rand()%10+1;
  int N=Num;
if (Num>Count)
        Num=Count;
else
      Num=N;
return Num;
}

int Transition(Player){
   
    if (Player==1) 
        Player=2;
    else 
        Player=1;
    return Player;
}

void Victory(Player){

  if (Player==1)
    printf("You won!");
  else printf("You lose!");
}

int Output2(Num,Count) {
  
    Num=11-Num;
   if (Num>Count)
     Num=Count;
   return Num;
}


void Instruction() {
printf("\nThe rules of the game: \n");
printf("-the game is played between 2 players in front of which a pile of 100 matches;\n");
printf("-players take turns taking from the pile a certain number of matches;\n");
printf("-the number of matches taken per turn must be more than 1 and less than 11;\n");
printf("-the one who makes the penultimate move in the game wins;\n");
printf("-the one who takes the last match from the pile loses;\n");
printf("\n\t\t\tGood game for you!!!\n\n");
}

void PlayerComputerEasy(){
  Player=1;
  Count=100;
  do{
  
    if (Player==1){
    do{
        printf("Your move. There are %d matches on the table.\n",Count);
        printf("How many matches do you take?\n");
        scanf(" %d", &Num);
        Input(Num,Count);
	if (Correct==0) printf("Wrong! Please try again!\n");
    }
    while (Correct!=1);
   }
    else
    {
    do{
        Output1(Num,Count);
        system("cls");
        printf("My move. I took %d matches.\n",Num);}
        while (Correct!=1);   
    }
    Count-=Num;
    Transition(Player);
    }
  while (Count>0);
  Victory(Player);
}

void PlayerComputerHard(){
  Player=1;
  Count=100;
  do{
  
    if (Player==1){
    do{
        printf("Your move. There are %d matches on the table.\n",Count);
        printf("How many matches do you take?\n");
        scanf(" %d", &Num);
        Input(Num,Count);
	if (Correct==0)  printf("Wrong! Please try again!\n");
      }
    while (Correct!=1);
   }
    else
    {
    do{
        Output2(Num,Count);
        system("cls");
        printf("My move. I took %d matches.\n",Num);
        }
        while (Correct!=1);   
    }
    Count-=Num;
    Transition(Player);
    }
  while (Count>0);
  Victory(Player);
}


void Menu() {
    int xv=0;
    while(xv != 4){ 
             
printf("Please select your desired number\n 1: The game is a player-player;\n 2: The game is a player-computer;\n 3: The rules of the game;\n 4: Exit\n"); 
scanf(" %d",&xv);
system("cls");

switch(xv){ 
case 1: 
PlayerComputerEasy();
printf("\nIf you want to continue the game, press %d else if you want to exit press %d\n",1,0);
scanf("%d",&xv);
system("cls");
if (xv==0){
                //nothing to do 
printf("Before meeting\n Come back - still play!!! \n"); 
Sleep(500);
xv=4;
break;}
if (xv==1){
                return Menu();}
case 2:  
printf("Please choose complexity\n 1: Easy;\n 2: Hard;\n 3: Come back\n");
scanf(" %d",&xv);
system("cls");
if (xv==1){
                PlayerComputerEasy();
                printf("\nIf you want to continue the game, press %d else if you want to exit press %d\n",1,0);
                scanf("%d",&xv);
                system("cls");
                if (xv==0){
                          //nothing to do 
                          printf("Before meeting\n Come back - still play!!! \n"); 
                          Sleep(500);
                          xv=4;
                          }
                          break;
                if (xv==1){
                          return Menu();}
                          }
if (xv==2){
                PlayerComputerHard();
                printf("\nIf you want to continue the game, press %d else if you want to exit press %d\n",1,0);
                scanf("%d",&xv);
                system("cls");
                if (xv==0){
                          //nothing to do 
                          printf("Before meeting\n Come back - still play!!! \n"); 
                          Sleep(500);
                          xv=4;
                          }
                          break;
                if (xv==1){
                         return Menu();}
                }
if (xv==3){
                return Menu();
                }
break;
case 3:
     Instruction();
     printf("After you become familiar with all the rules of the game, press any key...\n");
     _getch();
     system("cls");
     return Menu();
case 4: 
//nothing to do 
printf("Before meeting\n Come back - still play!!! \n"); 
Sleep(500); 
break; 
default: 
printf("\nThe specified number is invalid \n\n"); 
break; } 
}
}
