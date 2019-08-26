#include <stdio.h>
#include <stdlib.h>

/*int main()
{
  int count=0,i,a[3][3],j;
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {scanf("%d",&a[i][j]);
      if(a[i][j]==0)
      count++;
      }
  }
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          if((i+j)%2==0)
          {
              if(count>0)
              {
                  a[i][j]=0;
                  count--;
              }
          }
          else
            a[i][j]=1;
      }
  }
  for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
  {

    printf("%d\t",a[i][j]);

  }
  printf("\n");
    }
}
*/
int main()
{
 int i,j,a[3][3],n[3],count=0;
 for(i=0;i<3;i++)
 scanf("%d",&n[i]);
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
 }
 for(i=0;i<3;i++)
 {
     printf("\n");
     for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
 }
 if((a[0][0]==n[0])&&(a[1][1]==n[1])&&(a[2][2]==n[2]))
            count++;
 if((a[0][2]==n[0])&&(a[1][1]==n[1])&&(a[2][0]==n[2]))
            count++;
 for(i=0;i<3;i++)
 {
         if((a[i][0]==n[0])&&(a[i][1]==n[1])&&(a[i][2]==n[2]))
         count++;
         if((a[0][i]==n[0])&&(a[1][i]==n[1])&&(a[2][i]==n[2]))
            count++;
 }
printf("count =%d",count);
}
