#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Range of an Array");
    int n,i,b[10],c[10],coueven;
    scanf("%d",&n);
    int ar[n];
    printf("Enter Array Elements");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            b[coueven]=ar[i];
            coueven++;
        }
    }
    for(i=0;i<coueven;i++)
       printf("%d",b[i]);

}
