//to reverse a number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,r,rev=0;
    cout<<"Enter the number:";
    cin>>num;
    while (num!=0){
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    cout<<"The reverse of the number is:"<<rev<<endl;
    return 0;
}