//a program to Create ticket booking system.

#include <iostream>
using namespace std;

int main()
{
    int tickets;
    float price = 250;
    float total;

    cout << "Enter Number of Tickets : ";
    cin >> tickets;

    total = tickets * price;

    cout << "Total Amount : " << total << endl;

    return 0;
}
