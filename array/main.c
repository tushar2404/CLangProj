#include <stdio.h>
float result(int,int,int,float*);
int main()
{
    int i,j,k;
    float avg=0;
    scanf("%d%d%d",&i,&j,&k);
    float res=result(i,j,k,&avg);
    printf("%f %f",res,avg);
}
float result(int a ,int b,int c,float*avg)
{
    float res;
    *avg=(a+b+c)/3.0;
    res=(a+b+c)/500.0;
    res*=100;
    return res;

}
