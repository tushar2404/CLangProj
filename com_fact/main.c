#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s="123456789098765";
    int arr[10000],n,i=0;
   while(num>0)
   {
       n=s%10;
       arr[i]=n;
       s/=10;
       i++;
   }
   for(int j=0;j<i;j++)
    printf("%d",arr[j]);
}
