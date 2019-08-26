#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char *g[10];
    int h[10];
    int stra;
    int start[10],end[10],l=0,val[10]={0,0},val1=0;
    char *ss[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
   {
       g[i]=(char *)malloc(50);
       scanf("%s",g[i]);
   }
  for(int i=0;i<n;i++)
  scanf("%d",&h[i]);
  scanf("%d",&stra);
  for(int i=0;i<stra;i++)
  {
      ss[i]=(char *)malloc(50);
      scanf("%d %d %s",&start[i],&end[i],ss[i]);
  }
 for(int i=0;i<stra;i++)
 {
    char *tmp=ss[i];
      int count=0;
      val1=0;
      for(int j=start[i];j<=end[i];j++)
      {
          tmp=ss[i];
          count=0;
          while(tmp = strstr(tmp,g[j]))
            {
              count++;
              tmp++;
             }
             val1+=count*h[j];

      }
val[l]=val1;
l++;

}
int max=val[0];
int min=val[0];
for(int i=0;i<l;i++)
{
    if(max<val[i])
    {
        max=val[i];

    }
    if(min>val[i])
        min=val[i];
}
printf("%d %d",min,max);
  }


//int i=0;
//for(i=0;i<l;i=i+1)
//printf("%d\t",val[i]);


//}
/*for(int i=0;i<l;i++)
printf("%d\t",val[i]);*/
/*Print
for(int i=0;i<n;i++)
   printf("%s %d\n",g[i],strlen(g[i]));
for(int i=0;i<n;i++)
   printf("%d\n",h[i]);
   for(int i=0;i<stra;i++)
   printf("%s %d start=%d end=%d\n",ss[i],strlen(ss[i]),start[i],end[i]);
   */
