#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],a1[10],b[20],i,i1,i2,n1,n2,n;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("num[%d]=",i);
    scanf("%d",&a[i]);
    }
    printf("Enter no. of elements in second array");
    scanf("%d",&n2);
    printf("Enter a second array  ");
    for(i1=0;i1<n2;i1++)
    {
    printf("num2[%d]=",i1);
    scanf("%d",&a1[i1]);
    }
     n=n1+n2;
    for(i2=0;i2<n1;i2++)
        {
        b[i2]=a[i2];
        }
        for(i=0;i2<n,i<n2;i2++)
            {
            b[i2]=a1[i];
            i++;
            }
        for(i=0;i<n;i++)
            printf(" new array[%d]=%d\n",i,b[i]);
    return 0;

}
