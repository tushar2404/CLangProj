#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rev(char a[],int e);
void compare(char arr[],char arr2[],int,int);
int main()
{
    int a,b;
    char str[100],str2[100];
    printf("Hello Enter Two  strings\n");
    scanf("%s",str);
    fflush(stdin);
    scanf("%s",str2);
    a=strlen(str);
    b=strlen(str2);
    compare(str,str2,a,b);
    rev(str,a);
    rev(str2,b);
    return 0;
}
void compare(char str[],char str2[],int a,int b)
{
    int d=1;
   if(a==b)
    {
        for(int i=0;i<a;i++)
        {
            if(str[i]!=str2[i])
                {

                d=1;
                break;
                }
           if(str2[i]==str[i])
           d=0;
        }
        if(d==1)
        printf("String length is equal but not equal");
      if(d==0)
        printf("String are equal");

    }

    else if(a!=b)
        printf("NOT Equal");


}
void rev(char a[],int f)
{

    printf("\nReverse string is \n:");
    for(int j=a;j<0;j--)
    printf("%c",a[j]);
}
