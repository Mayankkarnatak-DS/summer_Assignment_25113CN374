//a program to Develop complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>
using namespace std;

void display(string name[], int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " " << marks[i] << endl;
    }
}

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

    display(name, marks, n);

    return 0;
}
