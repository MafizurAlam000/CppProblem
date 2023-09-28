//Write a C++ program to calculate the volume of a cone.
#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter the radius of the circular base of the cone: ";
    cin>>r;
    cout<<"Enter the height of the cone: ";
    cin>>h;
    float pi= 3.14159;
    float volume;
    volume=(1.0/3.0)*pi*(r*r)*h;
    cout<<"Volume of the cone is: "<<volume<<endl;
    return 0;
}