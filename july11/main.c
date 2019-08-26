#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void swap()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d\n%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are %d %d",a,b);

}
void sum()
{
     int a,r=0,b,c;
    printf("Enter number to calculate sum ");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        c=b%10;
        r=r+c;
        b/=10;
    }
    printf("The sum is %d",r);
}

void rev()
{
    int a,r=0,b,c;
    printf("Enter number to reverse it");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        c=b%10;
        r=r*10+c;
        b/=10;
    }
    if(r>=a)
    printf(" reverse (%d) is grater than or equal to number (%d)",r,a);
    else
        printf("Reverse (%d) is smaller than number (%d)",r,a);
    return;
}
void func()
{
    int a,b,ans=0;
  printf("Enter number of digits");
  scanf("%d",&a);
  printf("-----");
  while(a)
  {

      scanf("%d",&b);
      ans+=b*pow(10,a);
      a--;
  }
  ans=ans/10;
  printf("answer = %d",ans);
    return;
}
int main()
{
    //func();
    //rev();
    //sum();
    swap();

}
