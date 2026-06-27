// Write a program to Create ATM simulation.

#include <iostream>
using namespace std;

int main()
{
    int balance = 10000;
    int choice, amount;

    cin >> choice;

    if (choice == 1)
    {
        cout << balance;
    }
    else if (choice == 2)
    {
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << balance;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
    else if (choice == 3)
    {
        cin >> amount;
        balance += amount;
        cout << balance;
    }

    return 0;
}
