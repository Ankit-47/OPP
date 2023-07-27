#include<iostream>
 
using namespace std;
  
  class base{
    protected:
    int x;
    public:
    base(){}
    
        base(int a){
            x=a;
            cout<<"\n constructor of base:";
        }
        void display(){
            cout<<"\n x="<<x<<endl;}
  };
  class derived:public base
  {
    int y,z;
    public:
    derived(){}
    derived(int a,int b,int c):base(a){
    y=b; 
    z=c;
    cout<<"y:"<<y<<endl<<"z:"<<z<<endl;
    cout<<"This is derived constructor\n";
    }
    void display(){
        base::display();
        cout<<"\ny= "<<y<<"z="<<z<<endl;
    }
  };
    
    int main()
    {
        derived d1(2,3,4);
        d1.display();
         return 0;
    }