#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void power(int,int,int *);
int main()
{
    int a,b,*p=0;
    scanf("%d\n%d",&a,&b);
    power(a,b,&p);
    printf("%d",p);
    return 0;
}
void power(int a,int b,int *p)
{
    *p=pow(a,b);
    printf("%d",*p);
    return 0;
}
