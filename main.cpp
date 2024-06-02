#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

int main()
{
    Account account;
    account.deposit(1000.0);
    account.withdraw(500.0);

    Account *pAccount = new Account{};
    pAccount->deposit(1000.0);
    pAccount->withdraw(500.0);
    delete pAccount;

    SavingsAccount sav_account;
    sav_account.deposit(1000.0);
    sav_account.withdraw(500.0);

    SavingsAccount *pSavingsAccount = new SavingsAccount{};
    pSavingsAccount->deposit(1000.0);
    pSavingsAccount->withdraw(500.0);
    delete pSavingsAccount;

    return 0;
}