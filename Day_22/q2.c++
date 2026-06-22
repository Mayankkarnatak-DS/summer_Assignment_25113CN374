//To count words in a stringg
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int count = 1;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ')
            count++;
    }

    cout << "Total Words = " << count;

    return 0;
}
