#include <stdio.h>
#include <stdlib.h>
int fact(int);
int sum(int);
int rever(int);
int pal(int);
int main()
{
    int c,n,a,b,d,e,f;
    printf("Enter number to calculate factorial\n");
    scanf("%d",&n);
    c=fact(n);
    printf("factorial is = %d",c);
    printf("\nEnter number to calculate sum\n");
    scanf("%d",&a);
    b=sum(a);
    printf("Sum is = %d ",b);
    printf("Enter number to reverse it");
    scanf("%d",&d);
    e=rever(d);
    printf("%d",e);
    printf("\n Enter a number to check that it is palindrome or not");
    scanf("%d",&f);
    pal(f);

    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int sum(int a)
{
    if(a==1||a==0)
        return a;
    else
        return(a+sum(a-1));
}
int sum1=0,rem;
int rever(int num)
{
   if(num){
      rem=num%10;
      sum1=sum1*10+rem;
      rever(num/10);
   }
   else
      return sum1;

}
