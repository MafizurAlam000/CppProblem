#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Lines: ";
    cin>>n;
    //Printing the upper triangle
    for(int i=1;i<=n;i++){
        //Spaces
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //printing the lower triangle
    for(int i=1; i<=n-1; i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
    }
}