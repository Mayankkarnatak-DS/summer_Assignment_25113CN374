//to check wheter a prime or not
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,flag=0;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag+=1;
            break;
        }
    }
    if(flag <1){
        cout<<"Number is prime";
    }
    else{
        cout<<"Not a prime";
    }
    return 0;
}