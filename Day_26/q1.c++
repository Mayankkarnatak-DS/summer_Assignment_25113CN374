// Write a program to Create number guessing game.

#include <iostream>
using namespace std;

int main()
{
    int number = 25;
    int guess;

    do
    {
        cin >> guess;

        if (guess < number)
        {
            cout << "Too Low" << endl;
        }
        else if (guess > number)
        {
            cout << "Too High" << endl;
        }

    } while (guess != number);

    cout << "Correct Guess";

    return 0;
}
