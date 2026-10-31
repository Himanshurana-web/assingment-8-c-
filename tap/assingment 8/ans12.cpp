// 12. Encapsulation Using Bank Account

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    void display()
    {
        cout << "Balance: " << balance;
    }
};

int main()
{
    BankAccount account;

    account.deposit(5000);
    account.withdraw(1500);

    account.display();

    return 0;
}