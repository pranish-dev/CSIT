#include <iostream>
using namespace std;

class Account
{
private:
    float balance;
    static int totalAccounts; // static data member shared by all objects

public:
    Account(float bal)
    {
        balance = bal;
        totalAccounts++;
    }

    static int getCount()
    {
        return totalAccounts;
    }

    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
    friend void addInterest(Account &a1, Account &a2, float rate);
};

int Account::totalAccounts = 0;

void addInterest(Account &a1, Account &a2, float rate)
{
    a1.balance += a1.balance * (rate / 100);
    a2.balance += a2.balance * (rate / 100);
}

int main()
{
    int ib1, ib2;
    cout << "Enter initial balances for two accounts: ";
    cin >> ib1 >> ib2;
    Account acc1(ib1);
    Account acc2(ib2);

    cout << "\nBefore adding interest:" << endl;
    acc1.displayBalance();
    acc2.displayBalance();

    addInterest(acc1, acc2, 5.0f);

    cout << "\nAfter adding 5% interest:" << endl;
    acc1.displayBalance();
    acc2.displayBalance();

    cout << "\nTotal accounts created: " << Account::getCount() << endl;

    return 0;
}