#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice,player;
int checkforwin();
void displayboard();
void markboard(char mark);
int main()
{
   int i;
   char mark;
   player=1;
   do
   {
       displayboard();
       player=(player%2)?1:2;
       printf("player %d , Enter a choice:",player);
       scanf("%d",&choice);
       mark = (player==1)?'X':'O';
       markboard(mark);
       i=checkforwin();
       player++;
   }while(i==-1);
   if(i==1)
    printf("Congratulations ! player:%d wins ",--player);
   else
    printf("Draw");
    return 0;
}

int checkforwin()
{
   int returnvalue=0;

   if(square[1]==square[2]&&square[2]==square[3]) //----
{
    returnvalue= 1;
}
 else if(square[4]==square[5]&&square[5]==square[6])// ----
{
    returnvalue= 1;
}
else if(square[7]==square[8]&&square[8]==square[9]) //----
{
    returnvalue= 1;
}
else if(square[1]==square[5]&&square[5]==square[9]) //diag
{
    returnvalue= 1;
}
else if(square[3]==square[5]&&square[5]==square[7]) //diag
{
    returnvalue= 1;
}
else if(square[1]==square[4]&&square[4]==square[7])//str
{
    returnvalue= 1;
}
else if(square[2]==square[5]&&square[5]==square[8])//str
{
    returnvalue= 1;
}
else if(square[3]==square[6]&&square[6]==square[9])
{
    returnvalue= 1;
}
else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
returnvalue=0;
else
    returnvalue=-1;
return returnvalue;

}
void displayboard()
{
system("cls");
printf("Tic Tac Toe\n\n");
printf("player 1(x)      player 2 (0)\n\n");
printf("     |     |    \n");
printf(" %c   | %c   |  %c\n",square[1],square[2],square[3]);
printf("_____|_____|____\n");
printf("     |     |     \n");
printf(" %c   | %c   |  %c\n",square[4],square[5],square[6]);
printf("_____|_____|_____\n");
printf("     |     |     \n");
printf(" %c   | %c   |  %c\n",square[7],square[8],square[9]);
printf("     |     |     \n");
}
void markboard(char mark)
{
if(choice==1&&square[1]=='1')
        square[1]=mark;
else if(choice==2&&square[2]=='2')
        square[2]=mark;
else if(choice==3&&square[3]=='3')
        square[3]=mark;
else if(choice==4&&square[4]=='4')
        square[4]=mark;
else if(choice==5&&square[5]=='5')
        square[5]=mark;
else if(choice==6&&square[6]=='6')
        square[6]=mark;
else if(choice==7&&square[7]=='7')
        square[7]=mark;
else if(choice==8&&square[8]=='8')
        square[8]=mark;
else if(choice==9&&square[9]=='9')
        square[9]=mark;
else
{
    printf("Invalid Move");
        player--;
        getch();
}
}
