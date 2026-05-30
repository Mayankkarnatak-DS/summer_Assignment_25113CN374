//program to Find GCD of two number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the numnber a:";
    cin>>a;
    cout<<"Enter the number b:";
    cin>>b;
    while(b!=0){
        int temp=b;
        b= a%b;
        a=temp;
    }
    cout<<"The GCD is :"<< a<<endl;
    return 0;
}