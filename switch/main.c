#include <stdio.h>
#include <stdlib.h>
int factorial(int);
void prime(int);
void EvenOdd(int);
int main()
{
    int a=0,b,c;
    printf("Enter any OPTION NO. you want to Execute and 4 to Exit \n 1.Factorial \n2. Prime or Not\n3. Odd or Even\n4.Exit\n");


    while(a<4)
    {
        printf("num=");
        scanf("%d",&c);
    switch(c)
              {
    case 1:
    {
        b=factorial(c);
      printf("%d",b);
        break;
    }
    case 2:
    {
    prime(c);
        break;
    }
    case 3:
    {
    EvenOdd(c);
    break;
    }

         }
printf("Enter Your Choice :");
scanf("%d",&a);
if(a>=4)
    break;

    }
    return 0;

}
void EvenOdd(int a)
{
       if(a%2==0)
        printf("Even");
        else
        printf("Odd");

}
void prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {printf("Not a Prime Number");
        break;
        }

    }
    printf("Prime Number");
}
int factorial(int a)
{
    int fac;
    if(a==1)
        return 1;
    else
       fac= a*factorial(a-1);
        return (fac);
}
