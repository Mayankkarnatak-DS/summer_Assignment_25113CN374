//a program to Create contact management system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    long long number;

    cout << "Enter Name : ";
    cin >> name;

    cout << "Enter Mobile Number : ";
    cin >> number;

    cout << "\nContact Details\n";
    cout << "Name : " << name << endl;
    cout << "Mobile : " << number << endl;

    return 0;
}
