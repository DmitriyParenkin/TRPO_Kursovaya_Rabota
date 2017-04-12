#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void instriction(){
     printf("\nПравила игры: \n");
printf("-игра проводится между двумя игроками, перед которыми куча из 100 спичек;\n");
printf("-игроки по очереди берут из кучи определённое количество камней;\n");
printf("-количество спичек, взятых за ход, должно быть больше 1 и меньше 11;\n");
printf("-тот, кто делает предпоследний ход в игре, выигрывает;\n");
printf("-тот, кто берёт последний камень из кучи, проигрывает;\n");
printf("\n\t\t\tПриятной игры!!!\n\n");
}

int Count,Num,Player;
bool Correct;
int PlayerComputer(){
      Player=1;
  Count=100;
  do{
  
    if (Player==1){
    do{
        printf("Ваш ход. На столе %d спичек.\n",Count);
        printf("Сколько спичек Вы берете?\n");
        scanf(" %d", &Num);
        if(Num>=1&&Num<=10&&Num<=Count)
            Correct=true;
        else
        {
            printf("Неверно! Повторите ввод!\n");
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
      printf("Мой ход. Я взял %d спичек.\n",Num);}
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
    printf("Вы победили!");
  else printf("Вы проиграли!");
}

int main()
{
	  setlocale(0, "");
printf("\n\t\t\tДобро пожаловать в игру 100 спичек!!!\n");

system("PAUSE");
return 0;
}
