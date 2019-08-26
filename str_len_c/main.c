#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char *ptr=NULL;
   int a;
   printf("Enter Maxim.. no of characters you will enter");
   scanf("%d",&a);
   ptr =(char *)malloc(a*sizeof(char));

       scanf(" ");
       gets(ptr);
       printf("Inputted text %s",ptr);

   free(ptr);
    ptr=NULL;
}
