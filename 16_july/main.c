#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100]={0},arr1[100]={0},n,j,k=0;
    printf("Enter no. of numbers\n");
    scanf("%d",&n);
    printf("\nEnter no's between 1 and 10");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);



    }
    int temp;
   /* for(int i=0;i<10;i++)
    {
        if(arr[i]!=0)
        printf("\n %d is occuring %d times\n",i,arr[i]);
    }*/

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

}
