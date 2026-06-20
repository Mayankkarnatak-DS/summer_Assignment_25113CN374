//check symmetric matrice 
#include <iostream>
using namespace std;

int main(){
    int n,flag=1;

    cout<<"Enter order of matrix: ";
    cin>>n;

    int a[10][10];

    cout<<"Enter matrix elements:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            }
        }
    }

    if(flag==1){
        cout<<"Symmetric Matrix";
    }
    else{
        cout<<"Not a Symmetric Matrix";
    }

    return 0;
}
