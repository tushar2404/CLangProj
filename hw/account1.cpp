
#include "g1.h"
using namespace std;
Account1::Account1(void):balance(0)
{

}
vector<string>Account1::Report()
{
    vector<string>report;
    report.push_back("Balance is "+ to_string(balance));
   report.push_back("Transactions: ");
   for(auto t:log)
   {
       report.push_back(t.Report());

   }
   report.push_back("---------------");
   return report;

}
bool Account1::Deposit(int amt)
{
    if(amt>=0)
    {
        balance+=amt;
        log.push_back(Transaction(amt,"Deposit"));
        return true;
    }
    else
        return false;

}
bool Account1::withdraw(int amt)
{
    if(amt>=0)
    {
        if(balance>=amt)
        {
            if(balance>=amt)
            {
                balance-=amt;
                log.push_back(Transaction(amt,"Withdraw"));
                return true;
            }
            else
                return false;

        }
        else
            return false;
    }
    return 0;
}

