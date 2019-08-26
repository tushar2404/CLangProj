#include <stdio.h>
#include <stdlib.h>
/*struct Details{
char a[200];
int rollno;
 float marks;
}p[10];



int main()
{
    int a,i;
    float mar;
    printf("Enter no. of students\n");
    scanf("%d",&a);
printf("Enter details of a student\n");
for(i=0;i<a;i++)
{
    scanf("%s\n%d\n%f",&p[i].a,&p[i].rollno,&p[i].marks);
}
printf("Enter passing marks");
scanf("%f",&mar);

printf("Failed students are");
for(i=0;i<a;i++)
{
    if(p[i].marks<mar)
        printf("%s\n",p[i].a);
}

}
*/
int main()
{
    int max=-9087799,i,a,*p,max1=-89897789;
    printf("Enter no. of students");
    scanf("%d",&a);
    p=(int *)malloc(a*sizeof(int));
    for(i=0;i<a;i++)
    {
       scanf("%d",&p[i]);
    }
    for(i=0;i<a;i++)
    {

      if(max<p[i])
      {
          max=p[i];
      }
    }
    for(i=0;i<a;i++)
    {
        if((max1<p[i])&&(p[i]!=max))
            max1=p[i];
    }
    printf("maximum=%d\nsecond maximum=%d",max,max1);
}
