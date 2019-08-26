#include <stdio.h>
int main()
{
    int flag=1;
    long long int k,j,i,a[1000],b[1000],d;


       scanf("%lld",&d);
       for(k=0;k<d;k++)
       {
           scanf("%lld\n%lld",&a[k],&b[k]);
       }
       k=0;
 do{


    for(i=a[k];i<=b[k];i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
              flag=0;
              break;
            }

        }
        if(flag==1)
            printf("%lld\n",i);


    }
                           d--;
                           k++;
}while(d);


}
