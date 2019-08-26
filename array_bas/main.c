#include <stdio.h>
#include <math.h>
int main()
{
    int arr[101] ={0,0},a=1,j;
    for(int i=2;i<100;i++)
    {
        arr[i]=a++;
    }
    for(int i=2;i<=sqrt(100);i++)
    {
        if(arr[i]!=0)
        {

   for(j=2;j*i<=100;j++)
    {

    arr[i*j]=0;

    }
    }
    }
    for(int i=0;i<100;i++)
        {
            if(arr[i]!=0)
               printf("%d\n",i);
        }

    return 0;
}
