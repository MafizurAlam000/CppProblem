#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Lines: ";
    cin>>n;
    int nsp=2*(n-1);
    for(int i=1; i<=n; i++){
        //1234
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp-=2;
        //4321
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}