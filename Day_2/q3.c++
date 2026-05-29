//to find the preoduct of the digits:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,p=1,r;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        r=num % 10;
        p*=r;
        num/=10;
    }
    cout<<"The product of the digits is:"<<p<<endl;
    return 0;
}