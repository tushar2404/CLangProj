
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{int a_count, a[100], k,  queries_count, queries[100];
int i;
scanf("%d %d %d\n",&a_count,&k,&queries_count);
for(i=0;i<a_count;i++)
{
    scanf("%d",&a[i]);
}
for (i = 0; i < queries_count; i++) {
  scanf("%d", &queries[i]);
}
int temp=a[0],b[queries_count],c;

do{

temp=a[0];
for(i=0;i<a_count-1;i++)
{

    a[i] = a[i+1];
}
a[a_count-1]=temp;


k--;

}
while(k!=0);
for(i=0;i<queries_count;i++)
{
  c = *(queries + i) ;
  b[i] = a[c];
}

for(i=0;i<queries_count;i++)
{
    printf("%d\n",b[i]);
}

for(i=0;i<a_count;i++)
    printf("%d",a[i]);

}
