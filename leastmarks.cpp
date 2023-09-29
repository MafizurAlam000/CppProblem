// If the marks of A, B and C are input through the keyboard, write a program to determine the student  scoring the least marks.
#include<iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3;
    cout<<"Enter the 1st Subject's marks: ";
    cin>>sub1;
    cout<<"Enter the 2nd Subject's marks: ";
    cin>>sub2;
    cout<<"Enter the 3rd Subject's marks: ";
    cin>>sub3;
    if(sub1<sub2 && sub1<sub3) cout<<sub1<<" has the least marks";
    else if(sub2<sub1 && sub2<sub3) cout<<sub2<<" has the least marks";
    else cout<<sub3<<" has the least marks";
    return 0;
}