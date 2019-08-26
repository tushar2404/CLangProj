#include <stdio.h>
#include <stdlib.h>
// Maximum Product and tO print Position of Max Elements
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    int max=a[0],pos=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i;
        }
    }
    int max1=a[!pos],pos1;
    for(i=0;i<n;i++)
    {
        if((max1<a[i])&&(i!=pos))
        {
            max1=a[i];
            pos1=i;
        }
    }
    printf("Product is %d\n",max*max1);
    for(i=0;i<n;i++)
    {
        if(max==a[i])
            printf("Position of Maximum  %d\n",i);
        else if(max1==a[i])
            printf("position of maximum %d\n",i);

    }
    return 0;
}
