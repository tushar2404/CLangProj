#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int hig,shig,num1,num2,b,a[10];
    printf("Enter number of elements");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    hig=a[0];
    num1=0;

    for(int i=1;i<b;i++)
    {
           if(a[i]>hig)
           {
               hig=a[i];
               num1=i;
           }
    }
    shig=a[b-num1-1];
    for(int i=0;i<b;i++)
    {
        if(i!=num1)
        {
            if(shig<a[i])
            {
                shig=a[i];
                num2=i;
            }
        }
    }
    printf("Highest Value is %d and number is %d\n",hig,num1+1);
    printf("Highest Value is %d and number is %d",shig,num2+1);
}
