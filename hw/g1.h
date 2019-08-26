
#include <vector>
#include <string>
#include "Transactions.h"
class Account1
{
private:
    int balance;
    std::vector<Transaction> log;
public:
    Account1();
    std::vector<std::string>Report();
     bool Deposit(int amt);
     bool withdraw(int amt);
};

