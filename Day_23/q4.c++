// program to Find maximum occurring character.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    int maxi = 0;
    char ans;

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] > maxi)
        {
            maxi = freq[s[i]];
            ans = s[i];
        }
    }

    cout << ans;

    return 0;
}

