#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a;
    cout<<"Enter the Side of the Triangle: ";
    cin>>a;
    float area;
    area=sqrt(3)/4 *(a*a);
    cout<<area;
    return 0;
}