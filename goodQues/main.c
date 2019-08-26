#include <stdio.h>
#include <stdlib.h>
//smalest missing element
//this program
int main()
{
    int n,i;
    //bubble sort
    scanf("%d",&n);
    int a[10],c[10];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int n1,l=0;
    scanf("%d",&n1);
    int j,b[10];
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
    {
        j=b[i];
        for(int k=0;k<n;k++)
        {
            if(j==a[k])
            {
             c[l]=j;
             l++;
             a[k]=-9999;
            }
        }
    }
    int m=l;
    for(i=0;i<n;i++)
    {
        if(a[i]!=-9999)
        {c[l]=a[i];
        l++;
        }
    }
    for(i=0;i<l;i++)
        printf("%d",c[i]);
}
