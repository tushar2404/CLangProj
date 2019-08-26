#include <stdio.h>
#include <stdlib.h>
int fiboc();
int main()
{
    int n,c,i=0;
    printf("Enter number\n");
    scanf("%d",&n);
   for(c=1;c<=n;c++)
   {
    printf("%d",fiboc(i));
    i++;
   }

    return 0;
}
int fiboc(int a)
{
   if(a==0||a==1)
   return a;
   else
    return (fiboc(a-1)+fiboc(a-2));

}
