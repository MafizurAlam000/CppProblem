//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    float length, breadth;
    cout<<"Enter the Length of the Rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of the Rectangle: ";
    cin>>breadth;
    float area,perimeter;
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter){
        cout<<"area of the rectangle is greater than its perimeter.";
    }
    else{
        cout<<"area of the rectangle is less than its perimeter.";
    }
    return 0;
}