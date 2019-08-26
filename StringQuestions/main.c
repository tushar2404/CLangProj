#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int c[50];
     char *s;
 /*   gets(a);

    int sp=0,wo=0,ca=0;
    s=a;
    while(*s!='\0')
    {
        if(*s==' ')
            sp++;
        if((*s=='a')||(*s=='e')||(*s=='i')||(*s=='o')||(*s=='u')||(*s=='A')||(*s=='E')||(*s=='I')||(*s=='O')||(*s=='U'))
            wo++;
        if((*s>='A')&&(*s<='Z'))
            ca++;
        s++;
    }
    puts(a);
    printf("Has %d spaces and %d Vowels",sp,wo);
    printf("\nSentence have %d Capital Letters",ca);
    printf("****************************************************************\n");
    s=a;
    char *ss;
    int count=0,c;
    printf("Enter String\n");
    gets(a);
    printf("Enter another String\n");
    gets(b);
    c=strlen(b);
    ss=b;
    while((*s!='\0')&&(*ss!='\0'))
    {
        if(*s==*ss)
        {
            count++;
            ss++;
        }
        s++;
    }
    if(c==count)
        printf("\nFirst string Have Second String");
    else
         printf("\nFirst string does not Have Second String");
printf("--------------------------------------------------------");*/
   //int d;
   printf("Enter A String\n");
   gets(a);
  // d=strlen(a);
 /* while(*s!='\0')
   //{
     //   d--;
       // printf("%c\n",*s);
        //s--;
   }
   *s--;
   printf("%c",*s);
   */

   /*for(int i=0;i<l;i++)
   {
       printf("%d",c[i]);
   }*/
char *q[100];
int l=0;
s=a;
while(*s!='\0')
{
    while(*s!=' ')
    {
      s[l]=(char *)malloc(50);
    }

}
}
