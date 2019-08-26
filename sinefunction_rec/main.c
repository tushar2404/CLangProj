#include <stdio.h>
#include <math.h>
float calc(float);
float fact(float);
int main()
{
    float x,sin;
    printf("Hello \n Enter value of x in degrees");

    scanf("%f",&x);
      x=x*3.14159/180;
    sin=x+calc(x);
    printf("Answer is -----------------\n\t%f",sin);
    return 0;
}
float calc(float x)
{
    float a=0.0,b,j=1;
    for(int i=3;i<=20;i+=2)
    {
    b=pow(-1,j)*pow(x,i);
    b=b/fact(i);
    a+=b;
    j++;
    }
    return a;
}
float fact(float a)
{
    float i,facto=1;
    for(i=1;i<=a;i++)
    {
     facto*=i;
    }

    return facto;

}
