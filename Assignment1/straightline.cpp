//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
int main(){
    float x1, x2, x3, y1, y2,y3;
    cout<<"Enter the Points x1:";
    cin>>x1;
    cout<<"Enter the Points y1:";
    cin>>y1;
    cout<<"Enter the Points x2:";
    cin>>x2;
    cout<<"Enter the Points y2:";
    cin>>y2;
    cout<<"Enter the Points x3:";
    cin>>x3;
    cout<<"Enter the Points y3:";
    cin>>y3;
    int m,n;
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/ (x3-x2);
    if(m==n) cout<<"All 3 Points lies on the same line";
    else cout<<"All 3 points do not lie on the same line";
    return 0;
}
