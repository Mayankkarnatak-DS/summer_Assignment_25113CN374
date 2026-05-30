#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,lcm;
    cout<<"Enter the numnber a:";
    cin>>a;
    cout<<"Enter the number b:";
    cin>>b;
    int a1=a;
    int b1=b;
    while(b!=0){
        int temp=b;
        b= a%b;
        a=temp;
    }
    lcm = (a1/a)*b1;

    cout << "The LCM is: " << lcm << endl;
    return 0;
}