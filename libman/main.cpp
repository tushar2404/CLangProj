#include <iostream>
 using namespace std;
  #include <conio.h>
  #include <time.h>
  #include <stdio.h>
  #include<stdlib.h>
#include <stdio.h>

/*int main()
{
  int n, a[100], b[100], count = 0, c, d;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);

  for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
      {
        break;
      }
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }

  printf("Array obtained after removing duplicate elements:\n");

  for (c = 0; c < count; c++)
    printf("%d\n", b[c]);

  return 0;
}*/
/*int main() {
    const unsigned char WHITE = 229;
      unsigned char GRAY  = 186;
    unsigned char ch;
    for(int count=0; count<800*25-1; count++)
        { ch = WHITE;
    for(int j=2; j<count; j++)
    if(count%j == 0)
     { ch = GRAY;
        break;
} cout << ch;
 } getch();

        return 0;
}
*/
/*int main()
{
    int milli_seconds = 1000;
    clock_t start_time = clock();
  //cout<<"Hello";
  time_t tt;

    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;
    // Applying time()
    time (&tt);

    // Using localtime()
    ti = localtime(&tt);

    cout << "Current Day, Date and Time is = "
         << asctime(ti);

    while (clock() < start_time + milli_seconds);
    //system("cls");
}*/
/*void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
int main()
{
    int num[100];
    int *ptr;
    int temp;
    int i, n, j;
    printf("\nHow many number you want to enter: ");
        scanf("%d", &n);
    printf("\nEnter a list of numbers to see all combinations:\n");
    for (i = 0 ; i < n; i++)
        scanf("%d", &num[i]);
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    return 0;
}*/
class add
{
    private:
    int a,b;
public:

void inputab(void)
{
    printf("Enter two numbers");
    scanf("%d\n%d",&a,&b);
    addit();
}
void addit(void)
{
    printf("%d",a+b);
}
};
int main()
{
    add a1;
 a1.inputab();

}
