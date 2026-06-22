//to check the pallinnrome of a string 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int flag = 1;

    for(int i = 0; i < str.length() / 2; i++) {
        if(str[i] != str[str.length() - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}

