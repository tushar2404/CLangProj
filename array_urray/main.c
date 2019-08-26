#include <stdio.h>
int main()
{
    int tem,lar,sma,a[10],loclar,locsma,i,n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    {
        printf("element[%d] =",i);
        scanf("%d",&a[i]);

    }
    lar=a[n-1];
    sma=a[0];
    loclar=n-1;
    locsma=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>lar)
        {
            lar=a[i];
            loclar=i;
        }
        if(a[i]<sma)
        {
            sma=a[i];
            locsma=i;
        }
    }
        tem=a[loclar];
        a[loclar]=a[locsma];
        a[locsma]=tem;
    for(i=0;i<n;i++)
    {
        printf("AfterInterchanging[%d]=",i);
        printf("%d\n",a[i]);

    }
}
