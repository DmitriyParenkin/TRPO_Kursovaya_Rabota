#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void instriction(){
     printf("\nThe rules of the game: \n");
printf("-the game is played between 2 players in front of which a pile of 100 matches;\n");
printf("-players take turns taking from the pile a certain number of matches;\n");
printf("-the number of matches taken per turn must be more than 1 and less than 11;\n");
printf("-the one who makes the penultimate move in the game wins;\n");
printf("-the one who takes the last match from the pile loses;\n");
printf("\n\t\t\tGood game for you!!!\n\n");
}

int Count,Num,Player;
bool Correct;
int PlayerComputer(){
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

int main()
{
printf("\n\t\t\tWelcome to the game 100 matches!!!\n");
system("PAUSE");
return 0;
}
