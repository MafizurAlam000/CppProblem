//Write a C++ program to print the area and perimeter of a rectangle.
#include<iostream>
using namespace std;
int main(){
    int l,w;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the width of the rectangle: ";
    cin>>w;
    int perimeter,area;
    perimeter=l*w;
    area=2*(l+w);
    cout<<"perimeter of the rectangle is: "<<perimeter<<endl;
    cout<<"Area of the rectangle is: "<<area<<endl;
    return 0;
}