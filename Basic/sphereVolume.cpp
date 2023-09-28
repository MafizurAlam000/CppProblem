//Wap to calculates the Volume of Sphere
#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the Value of Radius: ";
    cin>>radius;
    float pi=3.14;
    float volume;
    volume= (4/3) * pi * radius *radius *radius;
    cout<<"Volume of Sphere is: "<<volume<<endl;
    return 0;
}