#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account
{
private:
public:
    double interestRate;
    SavingsAccount(/* args */);
    ~SavingsAccount();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNT_H