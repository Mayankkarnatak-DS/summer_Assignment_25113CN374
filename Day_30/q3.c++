//a program to Create mini employee management system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string name[n];
    float salary[n];

    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> salary[i];
    }

    cout << "\nEmployee Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " " << salary[i] << endl;
    }

    return 0;
}
