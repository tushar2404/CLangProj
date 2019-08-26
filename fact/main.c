#include <stdio.h>
int add(int ,int,int,int);
int main()
{
    int a,b,c,d,k;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    add(a,b,c,d);

}
int add(int a,int b,int c,int d)
{
    int sum=0,di,k,sum1;
    sum1=c+d;

    for(int i=a;i<=b;i++)
    {
        k=i;
        while(k>0)
        {
            di=k%10;
            sum+=di;
            k=k/10;
        }
        if(sum==sum1)
            printf("%d\n",i);
        sum=0;

    }
}
