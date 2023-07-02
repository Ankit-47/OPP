#include<iostream>
using namespace std;

int fibo(int a);

int main()
{
    int x;
    cout<<"enter the number :"<<endl;
    cin>>x;
    int i=0;
    while(i<x)
    {
        cout<<" "<<fibo(i);
        i++;
    }
    return 0;
}
int fibo(int c)
{
    if(c>1)
    {
        return fibo(c-1)+fibo(c-2);
    }
    else
    {
        return c;   
    }   
}