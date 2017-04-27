#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int Input() {
int Num, Count;
bool Correct;
scanf(" %d", &Num);
        if((Num>=1) && (Num<=10) && (Num<=Count))
            Correct=true;
        else
            Correct=false;
return Correct;
}

int Output1() {
  int Num,Count;
      Num=rand()%10+1;
      if (Num>Count)
        Num=Count;
return Num;
}

int Transition(){
  int Player;
    if (Player==1) 
        Player=2;
    else 
        Player=1;
    return Player;
}

void Victory(){
  if (Player==1)
    printf("You won!");
  else printf("You lose!");
}

int Output2() {
    int Num,Count;
    Num=11-Num;
   if (Num>Count)
     Num=Count;
   return Num;
}

