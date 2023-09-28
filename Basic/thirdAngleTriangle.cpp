//Write a C++ program to find the third angle of a triangle.
#include<iostream>
using namespace std;
int main(){
    float angle1,angle2,angle3;
    cout<<"Enter the first angle: ";
    cin>>angle1;
    cout<<"Enter the second angle: ";
    cin>>angle2;
    angle3=180-(angle1+angle2);
    cout<<"Third Angle of the triangle is: "<<angle3<<endl;
    return 0;
}