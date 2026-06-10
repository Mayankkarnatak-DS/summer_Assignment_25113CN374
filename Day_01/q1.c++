//to calculate sum of first N numnbers
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,s=0;
    cout<<"Enter N:";
    cin>> num;
    for(int i=1;i<=num;i++){
        s+=i;
    }
    cout<<"The sum is:"<<s<<endl;
    return 0;
}