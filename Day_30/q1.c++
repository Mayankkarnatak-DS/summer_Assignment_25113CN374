//a program to Create student record system using arrays and strings.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string name[n];
    int marks[n];

    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> marks[i];
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " " << marks[i] << endl;
    }

    return 0;
}
