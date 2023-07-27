#include<iostream>


using namespace std; 
    
    class base{
        private:
        int a;
        public:
        int c;
        protected:
        int b;
        void set(){
             cout<<"Enter the numbers:"<<endl;
             cin>>a>>b>>c;
        }
    };
    class derived: public base{
            int result;
            public:
            void sum(){
                result=getA()+b+c;
                cout<<"result"<<endl;
            }
    };
    int main()
    {
        derived dobj;
        dobj.set();
        dobj.sum();
        dobj.c=100;
        return a;
    }


