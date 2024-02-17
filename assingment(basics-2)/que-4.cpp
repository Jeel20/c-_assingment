#include<iostream>
using namespace std;
int main()
{
    // volume of cylinder = pi*r*r*h;
    float pi = 3.1415;
    float r,h; // r=radius,h=height
    cout<<"Enter radius : ";
    cin>>r;
    cout<<"Enter height : ";
    cin>>h;
    float v = pi*r*r*h;
    cout<<"The volume of a cylinder is : "<<v;

}