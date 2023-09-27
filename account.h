#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(string accNumber, string accHolderName, double initialBalance)
    {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }
    void deposit(double amount) 
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "Insufficient funds!" << endl;
        }
    }
    double checkBalance() 
    {
        return balance;
    }
};
#endif