#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],st1[50],st2[50],*st3;
    gets(str);
    st3=st2;
    int a=strlen(str)/2;

    strncpy(st1,str,strlen(str)/2);
   //int i=a;
   int j=0;
   st1[a+1]='\0';


    while(str!='\0')
    {
        st2[j]=str[a+1];
        j++;
    }
    st2[j]='\0';
    printf("%s",st2);


    puts(st2);


}
