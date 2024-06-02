#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount()
    : interestRate{3.0}
{
    std::cout << "Savings Account constructor called" << std::endl;
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::deposit(double amount)
{
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}

void SavingsAccount::withdraw(double amount)
{
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}
