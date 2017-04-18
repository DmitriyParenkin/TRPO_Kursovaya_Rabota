#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Instruction() {
printf("\nThe rules of the game: \n");
printf("-the game is played between 2 players in front of which a pile of 100 matches;\n");
printf("-players take turns taking from the pile a certain number of matches;\n");
printf("-the number of matches taken per turn must be more than 1 and less than 11;\n");
printf("-the one who makes the penultimate move in the game wins;\n");
printf("-the one who takes the last match from the pile loses;\n");
printf("\n\t\t\tGood game for you!!!\n\n");
}

int main();

int Count,Num,Player;
bool Correct;
int PlayerComputerEasy(){
      Player=1;
  Count=100;
  do{
  
    if (Player==1){
    do{
        printf("Your move. There are %d matches on the table.\n",Count);
        printf("How many matches do you take?\n");
        scanf(" %d", &Num);
        if(Num>=1&&Num<=10&&Num<=Count)
            Correct=true;
        else
        {
            printf("Wrong! Please try again!\n");
            Correct=false;
        } 
    }
    while (!Correct);
   }
    else
    {
    do{
       Num=rand()%10+1;
      if (Num>Count)
        Num=Count;
      printf("My move. I took %d matches.\n",Num);}
        while (!Correct);   
    }
    Count-=Num;
    if (Player==1) 
        Player=2;
    else 
        Player=1;
    }
  while (Count>0);
  if (Player==1)
    printf("You won!");
  else printf("You lose!");
}

int PlayerComputerHard(){
      Player=1;
  Count=100;
  do{
  
    if (Player==1){
    do{
        printf("Your move. There are %d matches on the table.\n",Count);
        printf("How many matches do you take?\n");
        scanf(" %d", &Num);
        if(Num>=1&&Num<=10&&Num<=Count)
            Correct=true;
        else
        {
            printf("Wrong! Please try again!\n");
            Correct=false;
        } 
    }
    while (!Correct);
   }
    else
    {
    do{
        Num=11-Num;
      if (Num>Count)
        Num=Count;
      printf("My move. I took %d matches.\n",Num);}
        while (!Correct);   
    }
    Count-=Num;
    if (Player==1) 
        Player=2;
    else 
        Player=1;
    }
  while (Count>0);
  if (Player==1)
    printf("You won!");
  else printf("You lose!");
}


int menu() {
    int xv=0,c;
    while(xv != 4){ 
             
printf("Пожалуйста, выберите нужную вам цифру\n 1: Игра человек-человек;\n 2: Игра человек-компьютер;\n 3: Правила игры;\n 4: Выход\n"); 
scanf(" %d",&xv); 

switch(xv){ 
case 1: 
PlayerComputerEasy();
printf("\nЕсли хотите продолжить игру, нажмите 1, если хотите выйти, нажмите 0\n");
scanf("%d",&xv);
if (xv==0){
                //nothing to do 
printf("До встречи, возвращайся - ещё поиграем!!! \n"); 
Sleep(500);
xv=4;
break;}
if (xv==1){
                menu();}
case 2:  
printf("Please choose complexity\n 1: Easy;\n 2: Hard;\n 3: Come back\n");
scanf(" %d",&xv);
if (xv==1){
                PlayerComputerEasy();
                printf("\nЕсли хотите продолжить игру, нажмите 1, если хотите выйти, нажмите 0\n");
                scanf("%d",&xv);
                if (xv==0){
                          //nothing to do 
                          printf("До встречи, возвращайся - ещё поиграем!!! \n"); 
                          Sleep(500);
                          xv=4;
                          }
                          break;
                if (xv==1){
                          return menu();}
                          }
if (xv==2){
                PlayerComputerHard();
                printf("\nЕсли хотите продолжить игру, нажмите 1, если хотите выйти, нажмите 0\n");
                scanf("%d",&xv);
                if (xv==0){
                          //nothing to do 
                          printf("До встречи, возвращайся - ещё поиграем!!! \n"); 
                          Sleep(500);
                          xv=4;
                          }
                          break;
                if (xv==1){
                         return menu();}
                }
if (xv==3){
                return menu();
                }
break;
case 3:
     Instruction();
     printf("После того, как ознакомитесь со всеми правилами игры, нажмите любую клавишу.\n");
     _getch();
     return menu();
case 4: 
//nothing to do 
printf("До встречи, возвращайся - ещё поиграем!!! \n"); 
Sleep(500); 
break; 
default: 
printf("\nУказан недопустимый номер \n\n"); 
break; } 
}
}

main()
{
      int c;
        setlocale(0, "");
printf("\n\t\t\tWelcome to the game 100 matches!!!\n");
printf("Для запуска игры нажмите любую клавишу.\n");
_getch();
menu();
return 0;
}
