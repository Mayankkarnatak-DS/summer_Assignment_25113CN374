//to find factorial of a number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,f=1;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=num;i++){
        f*=i;
    }
    cout<<"The factorial is:"<<f<<endl;
    return 0;
}