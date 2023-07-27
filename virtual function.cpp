#include<iostream>

using namespace std;

  class shape
  {
    protected:
    double dimOne,dimTwo;

    public:
    void set()
    {
        cout<<"\nEnter two dimensions";
        cin>>dimOne>>dimTwo;
    }
        virtual double area()=0;
  };
    class rectangle: public shape{
        public:
        double area(){
            return(dimOne*dimTwo);
        }
    };
    class triangle:public shape
    {
        public:
        double area()
        {
            return (1.0/2*dimOne*dimTwo);
        }
    };
         
    int main()
    {
        shape *sptr;
        rectangle robj;
        robj.set();
        sptr = &robj;
        cout<<"area of rectangle= "<<endl<<sptr->area();
        triangle tobj;
        tobj.set();
        sptr = &tobj;
        cout<<"area pf triangle ="<<endl <<sptr->area();
        return 0;


    }   