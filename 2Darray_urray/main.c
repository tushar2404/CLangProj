#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7][7] = {0};
    int i,j,row=2,col;
    arr[0][0]=arr[1][0]=arr[1][1]=1;
while(row<7)
{
 arr[row][0]=1;

for(col=0;col<=row;col++)
arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
row++;
}
 for(i=0;i<7;i++)
{
  printf("\n");
  for(j=0;j<=i;j++)
        printf("\tarr[%d][%d]= %d",i,j,arr[i][j]);
}



    return 0;
}
