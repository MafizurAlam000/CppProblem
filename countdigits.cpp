//WAP to count digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
    int a=n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<1;
    cout<<count<<endl;
    return 0;

}