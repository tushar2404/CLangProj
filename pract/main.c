#include <stdio.h>
int main()
{
 int x = 10;
 static int y = x;

 if(x == y)
 printf("Both are Equal");
 else if(x > y)
 printf("X is Greater");
 else
 printf("X is Less");
}
