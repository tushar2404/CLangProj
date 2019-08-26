#include <stdio.h>//V.Important Program  (Fibonoci series pattern )
#include <math.h>
int fibbo(int );
int main()
{
    int a,i=0;
    scanf("%d",&a);
    for(int j=0;j<=a;j++)
    {
     printf("\n");
    for(i=0;i<=j;i++)
    printf("%d ",fibbo(i));
    }
}
int fibbo(int a)
{
    if(a==1||a==0)
        return a;
    else
        return(fibbo(a-1)+fibbo(a-2));
}

