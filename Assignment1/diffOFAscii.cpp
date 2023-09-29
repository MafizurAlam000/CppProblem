//WAP to find the difference between ASCII of two characters ,take them as input . 
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter 1st char: ";
    cin>>a;
    char b;
    cout<<"Enter 2nd char: ";
    cin>>b;
    int x=int(a);
    int y=int (b);
    cout<<x-y;
    return 0;
}