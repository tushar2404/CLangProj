#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num,a;
  scanf("%d",&num);
  while(num!=0)
  {
      a=num%10;
      if(a%2==0)
        printf("%d:bad number",a);
      else
        printf("%d:good number",a);
      num=num/10;
  }

}
