//a program to Create library management system.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book;
    int id;

    cout << "Enter Book Name : ";
    cin >> book;

    cout << "Enter Book ID : ";
    cin >> id;

    cout << "\nLibrary Record\n";
    cout << "Book : " << book << endl;
    cout << "Book ID : " << id << endl;

    return 0;
}
