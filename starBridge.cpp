#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Lines: ";
    cin>>n;
    int m=n-1;
    int nsp=1;
    //2*n-1
    for(int a=1; a<=2*n-1; a++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=m; i++){
        //stars
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";
        }
        //spaces
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        nsp+=2;
        //stars
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}