//WAP to check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    bool flag=true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<n<<" is prime";
    else cout<<n<<" is a composite number";
    return 0;
}