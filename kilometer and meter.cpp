#include<iostream>

using namespace std;

class distance
{
    protected:
    int kilometer;
    int meter;
    public:
    distance(){}
    distance(int kilometer,int meter){
        this->kilometer=kilometer;
        this->meter=meter;
    }
    void display(){
        cout<<kilometer<<"km"<<meter<<"m"<<endl;
    }
    distance operator+(int value){
        distance d2;
        d2.kilometer=kilometer+value;
        d2.meter=meter+value;
        return d2;
    }
};
int main(){
    distance d1(5,200),d2;
    d2=d1+5;
    d2.display();
    return 0;
}