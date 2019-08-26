#include <stdio.h>
#include <string.h>
void substring(char *,int,int,int);
int main()
{
   int x,y,pos;
    char str[50],str2[50];
    gets(str);
    gets(str2);
    x=strlen(str);
    y=strlen(str2);
    scanf("%d",&pos);
    substring(&str,x,y,pos);
}
void substring(char *str,int x,int y,int pos)
{
    int i;
    int z=x-pos;
    for(int j=z;j<x;j++)
    {

    }
    for(int i=0;*(str+i)!='\0',i++)
    {
        if(i==pos)
        {

        }
    }

}
