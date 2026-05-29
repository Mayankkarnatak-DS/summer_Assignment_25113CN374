//to check wheter a pallindrome or not:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,rev=0,temp,r;
    cout<<"Enter the number:";
    cin>>num;
    temp=num;
    while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    if(rev==temp){
        cout<<"Number is pallindrome"<<endl;
    }
    else{
        cout<<"Not a pallindrome"<<endl;
    }
    return 0;
}