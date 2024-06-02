#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>
class Account
{
private:
    /* data */
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);

    Account(/* args */);
    ~Account();
};

#endif // _ACCOUNT_H