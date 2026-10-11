//q.4.Banking System — Hierarchical Inheritance

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(string acc, double bal)
    {
        accountNumber = acc;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(string acc, double bal, double rate)
        : BankAccount(acc, bal)
    {
        interestRate = rate;
    }

    void displayBalance()
    {
        double interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "Savings Account: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount
{
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(string acc, double bal, double minBal, double charge)
        : BankAccount(acc, bal)
    {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void displayBalance()
    {
        if (balance < minimumBalance)
        {
            balance = balance - maintenanceCharge;
        }

        cout << "Current Account: " << accountNumber << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s("SA101", 20000, 5);
    CurrentAccount c("CA101", 8000, 10000, 500);

    s.displayBalance();

    cout << endl;

    c.displayBalance();

    return 0;
}