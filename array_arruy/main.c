#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[100],b,a,i,count1=0;
    printf("Enter Last Roll Number\n");
    scanf("%d",&a);
    printf("Enter Marks Obtained By ALL Students  \n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Enter marks to find out the no. of students who have secured greater than that number\n");
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(marks[i]>=b)
    count1++;

    }
    printf("Number Of Students having greater than or Equal to %d marks is : %d\n",b,count1);
    printf("Congratulations For Your Distinction:\n");
    for(i=0;i<a;i++)
    {
        if(marks[i]>=b)
    printf("marks = %d\nRoll Number =%d\n",marks[i],i+1);

    }
    return 0;
}
