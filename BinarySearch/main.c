#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[10],b,fi,beg,end,found=0,mid;
    printf("Enter number of Elements\n");
    scanf("%d",&b);
    printf("Enter Values(Please Enter in Ascending Order):\n");
    for(i=0;i<b;i++)
    {

        printf("Element[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter Value To find Location :\n");
    scanf("%d",&fi);
    beg=0,end=b-1;
    while(beg<=end)
    {
     mid=(beg+end)/2;
    if(a[mid]==fi)
    {
        printf("\n%d is Present at Location %d",fi,mid);
        found=1;
        break;
    }
    else if (a[mid]>fi)
        end=mid-1;
    else
        beg=mid+1;
    }
    if(beg>end&&found==0)
        printf("\n%d Does not Exit in a array",fi);
    return 0;
}
