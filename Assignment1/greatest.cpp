//Take 2 integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the First integer number: ";
    cin>>num1;
    cout<<"Enter the Second integer number: ";
    cin>>num2;
    if(num1>num2){
        cout<<num1<<" is the greatest of them";
    }
    else{
        cout<<num2<<" is the greatest of them";
    }
    return 0;
}