#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],j,temp,i,n;
    printf("Enter number of Elements\n");
    scanf("%d",&n);
    printf("Enter Elements");
    for(i=0;i<n;i++)
    {
        printf("\narray[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf("Sorted Array");
    for(j=0;j<n;j++)
    {
        printf("\narray[%d]=%d",j,a[j]);
    }
    return 0;
}
