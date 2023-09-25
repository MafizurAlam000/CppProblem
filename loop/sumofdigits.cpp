//WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int sum=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n/=10;
    }
    cout<<sum;
}