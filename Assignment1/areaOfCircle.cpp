//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the Radius of the Circle: ";
    cin>>r;
    float pi=3.141529;
    float area, circum;
    area= pi*r*r;
    circum=2*pi*r;
    if(area>circum){
        cout<<"Area of the circle is greater than circumference";
    }
    else{
        cout<<"Area of the circle is less than circumference";
    }
    return 0;
}