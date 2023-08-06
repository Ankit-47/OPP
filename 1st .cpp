#include<iostream>

using namespace std;

class Item{
     int number; // private by default
    float cost;
    public:
    void getdata(int a,float b); // function for accesing private data
    void putdata(){
        cout<<"number="<<number<<"\n";
        cout<<"cost ="<<cost<<"\n";
    }
};
void Item::getdata(int a,float b){
    number=a;
    cost=b;
}

int main(){
    Item x;  // object of item class
    cout<<"\n object of x:"<<"\n ";
    x.getdata(200,2.4);  //function called to show data of number and cost 
    x.putdata();
    Item y;
    cout<<"\n object of y:"<<"\n ";
    y.getdata(20,66.4);
    y.putdata();
    return 0;
}

