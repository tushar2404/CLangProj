#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100],arr1[100],j=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
       {

          arr1[j]=0;

        j++;
       }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            arr1[j]=1;
        j++;

        }
    }
    for(int i=0;i<n;i++)
        printf("%d",arr1[i]);
}
