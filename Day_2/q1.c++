//to find sum of the digits
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,r;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        r=n%10;
        s+=r;
        n=n/10;
    }
cout<<"The sum of the digits is:"<<s<<endl;
return 0;
}