//a program to Create menu-driven array operations system.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int choice;

    cout << "1. Display\n2. Sum\n3. Largest\n";
    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else if (choice == 2)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << sum;
    }
    else if (choice == 3)
    {
        int largest = a[0];

        for (int i = 1; i < n; i++)
        {
            if (a[i] > largest)
            {
                largest = a[i];
            }
        }

        cout << largest;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
