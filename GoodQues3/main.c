#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main()
{
    int c,n,i,j,k=0,count=0,b[30];
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=a[i];
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(c<a[j])
              count++;
        }
        b[k]=count;
        k++;

    }
    for(i=0;i<n;i++)
        printf("%d\n",b[i]);
    return 0;
}
*/
/*int main()
{
    int c,n,i,j,k=0,count=0,b[30];
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {printf("%d",a[i]);
        count++;
        }
    }
    for(i=count;i<n;i++)
        printf("%d",0);
}
*/

/*int main()
{
    int temp,n,i,j,count=0,b[30];
    long long int k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
        while(i<n)
        {
            k=k*10+a[i];
            i++;
        }
        printf("%lld",k);
   for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }*/
//}

/*int main()
{
	int mat[3][3], i, j;
	float determinant = 0;

	printf("Enter elements of matrix row wise:\n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
           scanf("%d", &mat[i][j]);
	for(i = 0; i < 3; i++)
    determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));

	printf("\n\ndeterminant: %f\n", determinant);

	printf("\nInverse of matrix is: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
		{printf("%.2f\t",((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant);
		}
		printf("\n");

}
}
*/
/*int main()
{
    int i=0,j=0,n,flag=0,flag1=0;
    int arr[3][3]={(0,0),(0,0)};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0;i<n;i++)
    {

            if(arr[i][i]!=0)
            {
                flag=1;
            }
            else
                flag=0;
            if(arr[i][n-1-i]!=0)
            {
                flag=1;
            }
            else
                flag=0;


    }
      for(i=0;i<n;i++)
    {

            if(arr[i][i]!=1)
            {
                flag1=1;
            }
            else
                flag1=0;
            if(arr[i][n-1-i]!=1)
            {
                flag1=1;
            }
            else
                flag1=0;


    }
    if((flag==1)||(flag1==1))
printf("Matrix  Matched");
else
    printf("Matrix Not Matched");
}

int main()
{

int i=0,j=0,n,flag=0,count=0,flag1=0;
    int a[3][3];
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        if(((a[i][i]==0)||(a[i][i]==-99))&&((i+1)<3))
        {
            a[i][i]=-99;
            if(a[i+1][i+1]==0)
            a[i+1][i+1]=-99;
        }
          if((a[i][2-i]==0)||(a[i][2-i]==-99)&&((i+1)<3))
        {
            if(a[i+1][2-(i+1)]==0)
            a[i+1][2-(i+1)]=-99;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((a[i][j]==0)||(a[i][j]==-99)&&(j+1<3))
            {
                if(a[i+1][j]==0||a[i+1][j]==-99)
                a[i+1][j]=-99;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);

    }

}
