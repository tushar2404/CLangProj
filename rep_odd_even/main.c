#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a[10],b[10];
    printf("Enter Elements!\n");
    for(i=0;i<10;i++)
    {
        printf("\narray[%d] =",i);
         if(i%2==0)
         {
             scanf("%d",&a[i]);
         }
         else
            scanf("%d",&b[i]);

    }


    for(i=0;i<10;i++)
    {

        if(i%2==0)
           {printf("%d\n",b[i+1]);
           }
        else if(i%2!=0)
            {printf("%d\n",a[i+1]);

            }
    }


    return 0;
}
