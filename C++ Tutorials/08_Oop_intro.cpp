
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:
        string name;
        int balance;

        void withdraw(int amount)
        {
            balance = balance - amount;
        }

        void print()
        {
            cout << name << " has " << balance << " dollars " << endl;
        }
};

int main()
{
    BankAccount account1;
    account1.name = "Phil";
    account1.balance = 3000;
    // cout << account1.name << " has " << account1.balance << " dollars " << endl;
    account1.print();

    BankAccount account2;
    account2.name = "Sophia";
    account2.balance = 1000;
    // cout << account2.name << " has " << account2.balance << " dollars " << endl;
    // account2.balance = account2.balance - 100;
    account2.print();
    account2.withdraw(100);
    // cout << account2.name << " has " << account2.balance << " dollars " << endl;
    account2.print();

    return (0);
}
