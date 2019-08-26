#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct date
    {

        int dat;
        int time;
        char day[20];
    };
    struct date date1[10];
    date1[0]=( struct date){56,9,"Monday"};
    date1[1]=( struct date){56,9,"Tonday"};
    printf("%s",date1[1].day);
    return 0;
}
