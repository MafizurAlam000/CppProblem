//WAP to calculates the volume of cylinder
#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter the radius of the circular base of the cylinder: ";
    cin>>r;
    cout<<"Enter the height of the cylinder: ";
    cin>>h;
    float pi=3.14;
    float volume;
    volume= pi*h*(r*r);
    cout<<"volume of the cylinder is: "<<volume<<endl;
    return 0;
}