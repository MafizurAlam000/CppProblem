//WAP to find the area and circumference of a circle
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    float pi=3.14;
    float area,circumference;
    area= pi *(r*r);
    cout<<"Area of the circle is: "<<area<<endl;
    circumference= 2* pi* r;
    cout<<"Circumference of the circle is: "<<circumference<<endl;
    return 0;
}