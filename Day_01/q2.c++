//to print the multiplication table of a program
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,m;
    cout <<"Enter the number:";
    cin>> num;
    for (int i=1;i<=10;i++){
        m=num*i;
        cout<<m<<endl;
    }
    return 0;
}