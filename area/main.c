#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s,area;
    float x1,y1,x2,y2,x3,y3;
    scanf("%f\n%f\n%f\n%f\n%f\n%f",&x1,&y1,&x2,&y2,&x2,&x3,&y3);
a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
     b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    printf("*(*******)))%f\n%f\n%f\n%f\n%f\n%f\n",x2-x1,y2-y2,x3-x2,y3-y2,x1-x3,y1-y3);
    printf("%f\n%f\n%f\n",a,b,c);

      s=(a+b+c)/2;
      printf("\n%f\n",s);
      area=sqrt((s*(s-a)*(s-b)*(s-c)));
      printf("%f",area);

}
