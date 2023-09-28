//Write a program in C++ to check whether a number is positive, negative or zero.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    if(n>0){
        cout<<"This is the Positive Number";
    }
    else if(n==0){
        cout<<"This is the Zero";
    }
    else{
        cout<<"This is the Negative Number";
    }
    return 0;
}