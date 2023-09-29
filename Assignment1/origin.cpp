//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of the X-axis: ";
    cin>>x;
    cout<<"Enter the value of the Y-axis: ";
    cin>>y;
    if(x==0 && y==0) cout<<"Points lie on the origin";
    else if(y==0) cout<<"The Points lie on the X-axis";
    else if(x==0) cout<<"The points lie on the Y-axis";
    else cout<<"The point is a different quadrant";
    return 0;
}