//WAP to calculate Simple Interest
#include<iostream>
using namespace std;
int main(){
    int principal,time,rate;
    cout<<"Enter the Principal Amount: ";
    cin>>principal;
    cout<<"Enter the Time Period: ";
    cin>>time;
    cout<<"Enter the Rate of interest: ";
    cin>>rate;
    int SI= (principal*rate*time)/100 ;
    cout<<"Simple Interest is: "<<SI<<endl;
    return 0;
}