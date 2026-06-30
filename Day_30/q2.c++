//a program to Create mini library system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> book[i];
    }

    cout << "\nBooks Available\n";

    for (int i = 0; i < 3; i++)
    {
        cout << book[i] << endl;
    }

    return 0;
}
