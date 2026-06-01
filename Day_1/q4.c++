//to count digits in a number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int count=0,num;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        count+=1;
        num=num/10;
    }
    cout<<"The number of digits are:"<<count;
    return 0;

}