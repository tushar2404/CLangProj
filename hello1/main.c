#include <stdio.h>
struct address
{
    char name[50];
    int salary;
    long long int  phone_no;
    char country[50];
};
int main()
{

    struct address tushar= {"Tushar",100000,8607202295,"india"};
    printf("%s %d %lld %s",tushar.name,tushar.salary,tushar.phone_no,tushar.country);
    return 0;
}
