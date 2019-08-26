#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randno,a=10,i,ar[a];
    for(i=0;i<a;i++)
    {
        randno =rand();
        ar[i]=randno;
    }
    printf("Random values are\n");
    for(i=0;i<a;i++)
    {
        printf("%d\t",ar[i]);
    }
    return 0;
}
