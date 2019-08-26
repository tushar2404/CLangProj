#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Binary(int );
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    while(a>=0)
    {Binary(a);
    a--;}
    printf("-----------------------------");
    int a1=0,b=0,n,arr[100];
    printf("Enter no. of elements in array");
    scanf("%d",&n);
    int max=-999943;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    if(max<arr[i])
        max=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        a1 = a1 + arr[i];
        if (b < a1)
            b = a1;

        if (a1 < 0)
            a1 = 0;
    }
    printf("Result = %d",b);


    printf("--------------------------");
    int sum = 0,arr1[100],n1;
    int leftsum = 0,t=1;
  printf("Enter Number");
  scanf("%d",&n1);
  for(int i=0;i<n;i++)
  scanf("%d",&arr1[i]);

    for (int i = 0; i < n; ++i)
        sum += arr1[i];

    for (int i = 0; i < n; ++i)
    {
        sum -= arr1[i];

        if (leftsum == sum)
            {printf("position is = %d",i);
            t=0;}

        leftsum += arr1[i];
    }
    if(t==1)
        printf("No Position ");
}

void Binary(int N)
{
    int B_Number = 0;
    int cnt = 0;
    while (N >0) {
        int rem = N % 2;
        int c = ceil(pow(10, cnt));
        B_Number += ceil(rem * c);
        N /= 2;


        cnt++;
    }


    printf("%03d\n",B_Number);
}
