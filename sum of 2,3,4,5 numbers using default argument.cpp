//wap to find the sum of 2,3,4,5 number using only one function using default argument
#include<iostream>
using namespace std;

void sum(double x ,double y,double z ,double w,double t );
 
void sum(double a,double b,double c=0,double d=0,double e=0);

void sum(double a,double b,double c,double d=0,double e=0);

void sum(double a,double b,double c,double d,double e=0);

int main()
{
    double a,b,c,d,e;
    cout<<"enter the numbers:";
    cin>>a>>b>>c>>d>>e;
    sum(a,b,c,d,e);
}
void sum(double a,double b,double c,double d,double e)
{
    cout<<"sum is"<<a+b+c+d+e;
}