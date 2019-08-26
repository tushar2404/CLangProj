#include<stdio.h>
int addn(int *,int *);
int main()
{
    int c,*a,*b;
    scanf("%d\n%d",&a,&b);
    c=addn(&a,&b);
    printf("ADD=%d\n",c);
    printf("%d %d",a,b);

}
int addn(int *x,int *y)
{
    int c;
    c=*x+*y;
     --(*x);
     --(*y);
    return c;
}
