#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void instriction(){
     printf("\n������� ����: \n");
printf("-���� ���������� ����� ����� ��������, ����� �������� ���� �� 100 ������;\n");
printf("-������ �� ������� ����� �� ���� ����������� ���������� ������;\n");
printf("-���������� ������, ������ �� ���, ������ ���� ������ 1 � ������ 11;\n");
printf("-���, ��� ������ ������������� ��� � ����, ����������;\n");
printf("-���, ��� ���� ��������� ������ �� ����, �����������;\n");
printf("\n\t\t\t�������� ����!!!\n\n");
}

int Count,Num,Player;
bool Correct;
int PlayerComputer(){
      Player=1;
  Count=100;
  do{
  
    if (Player==1){
    do{
        printf("��� ���. �� ����� %d ������.\n",Count);
        printf("������� ������ �� ������?\n");
        scanf(" %d", &Num);
        if(Num>=1&&Num<=10&&Num<=Count)
            Correct=true;
        else
        {
            printf("�������! ��������� ����!\n");
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
      printf("��� ���. � ���� %d ������.\n",Num);}
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
    printf("�� ��������!");
  else printf("�� ���������!");
}

int main()
{
	  setlocale(0, "");
printf("\n\t\t\t����� ���������� � ���� 100 ������!!!\n");

system("PAUSE");
return 0;
}
