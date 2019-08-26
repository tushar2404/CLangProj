#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
    int balance;
public:
    string statemetnt;
};
int main()
{
    cout << "Hello world!" << endl;
    Account a1;

    a1.statemetnt="Hello";
    cout<<a1.statemetnt;
    return 0;
}
