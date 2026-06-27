// Write a program to Create quiz application.

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int ans;

    cout << "What is 5 + 3 ?" << endl;
    cin >> ans;

    if (ans == 8)
    {
        score++;
    }

    cout << "What is 10 - 4 ?" << endl;
    cin >> ans;

    if (ans == 6)
    {
        score++;
    }

    cout << "What is 7 * 2 ?" << endl;
    cin >> ans;

    if (ans == 14)
    {
        score++;
    }

    cout << "Score = " << score;

    return 0;
}
