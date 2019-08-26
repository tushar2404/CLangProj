#include <stdio.h>
#include <stdlib.h>
void pop(int *,int *);
void push(int *,int *);
int n=0;

int main()
{
int top=-1;
char ans='n',ans1='i';
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    fflush(stdin);
    int a[n];
    do{
    printf("What do you want?Del(d) or insert(i)\n");
    scanf("%c",&ans1);
    fflush(stdin);
    if(ans1=='i')
     push(a,&top);
     else
     pop(a,&top);
    printf("Want to insert or Delete Another Element ?(y or n)\n");
    fflush(stdin);
    scanf("%c",&ans);
    fflush(stdin);
    }while(ans=='y');

    return 0;
}
void push(int a[],int*top)
{
    int item;
    if(*top+1==n)
    {
        printf("Sorry,Array is full\n");
        return;
    }
    else
    {
        *top=*top+1;
     scanf("%d",&item);
     a[*top]=item;
     for(int i=0;i<=*top;i++)
     printf("arr=%d\n",a[i]);
    }
    printf("Addition of an Element Done\n");
}
void pop(int a[],int* top)
{
    int item;

    if(*top==-1)
    {
        printf("Sorry,Array is empty\n");
        return;
    }
    else
    {
        *top=*top-1;
        if(*top==-1)
            printf("No Element to be printed");
      for(int i=0;i<=*top;i++)
     printf("arr=%d\n",a[i]);
    }
    printf("Deletion Done");
}
