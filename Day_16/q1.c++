//a program to Find missing number in array:
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n;
    cout << "Enter size of array (e.g. 5 means numbers 1 to 6 with one missing): ";
    cin >> n;
 
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int total = (n + 1) * (n + 2) / 2;
    int arrSum = 0;
    for(int i = 0; i < n; i++){
        arrSum += arr[i];
    }
 
    cout << "Missing number is: " << total - arrSum << endl;
 
    return 0;
}
 