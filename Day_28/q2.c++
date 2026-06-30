//a program to Create bank account system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int acc;
    float balance;

    cout << "Enter Name : ";
    cin >> name;

    cout << "Enter Account Number : ";
    cin >> acc;

    cout << "Enter Balance : ";
    cin >> balance;

    cout << "\nAccount Details\n";
    cout << "Name : " << name << endl;
    cout << "Account Number : " << acc << endl;
    cout << "Balance : " << balance << endl;

    return 0;
}
