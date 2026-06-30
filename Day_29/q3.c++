//a program to Create menu-driven string operations system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int choice;

    cout << "1. Length\n2. Reverse\n3. Uppercase\n";
    cin >> choice;

    if (choice == 1)
    {
        cout << s.length();
    }
    else if (choice == 2)
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            cout << s[i];
        }
    }
    else if (choice == 3)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }

        cout << s;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
