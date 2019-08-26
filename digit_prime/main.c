#include <stdio.h>
#include <stdlib.h>
void factors(int a)
{
    int b,i;
    while(a!=0)
    {
        b=a%10;
        printf("digit =%d\n",b);
    for(i=1;i<=a;i++)
    {
    if(b%i==0)
        printf("%d is a factor of %d\n",i,b);
    }
    a=a/10;
    }
}
int main()
{
    int a;
    printf("Enter Any number\n");
    scanf("%d",&a);
    factors(a);
    return 0;
}
