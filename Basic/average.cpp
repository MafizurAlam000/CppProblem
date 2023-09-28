//WAP to compute the total and average numbers;
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    cout<<"Enter the fourth number: ";
    cin>>num4;
    int total,average;
    total=num1+num2+num3+num4;
    average=(num1+num2+num3+num4)/4;
    cout<<"Total is: "<<total<<endl;
    cout<<"Average is: "<<average<<endl;
    return 0;
}