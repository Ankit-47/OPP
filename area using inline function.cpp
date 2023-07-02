//Wap to find the area of circle using inline function
#include<iostream>
using namespace std;

inline float area(float r);

int main()
{
    float a;
    cout<<"Enter the radius:"<<endl;
    cin>>a ;
    cout<<"Area of the circle is"<< area(a);
    return 0;
}

float area(float x)
{
    float b, pi=22.0/7;
    b=pi*x*x;
    return b;
}