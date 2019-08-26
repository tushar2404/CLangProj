#include <stdio.h>
int main()
{
    int a[5]={11,34,56,78,90};
    int *ptr,i;
    ptr=a;
    *ptr=20;
    printf("%d\n",*(ptr-2));
    *(ptr+2)=7;

    3[a]=9;
    *(ptr-2)=90;

    for(i=0;i<5;i++)
        printf("%d ",i[a]);
    ptr=&a[2];
    printf("\n %d",a[2]==*(ptr));

}
