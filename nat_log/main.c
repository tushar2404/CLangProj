#include <stdio.h>
#include <math.h>

int main()
{
    int x,z;
    float y,t,f;
    scanf("%d",&x);
    z=x-1;
    y=(float)z/x;
    f=(float)z/x;
    for(int i=7;i>=1;i--)
    {
        t=(float)pow(f,i)/2;
        printf("%f\n",t);
        y+=t;
    }
    printf("%f\n",y);
}
