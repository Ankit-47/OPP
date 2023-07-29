#include<string.h>
#include<iostream>
using namespace std;
class Mountain{
    private :string name;
            float height;
 
    public: Mountain(){}
 
    Mountain(string n, float h){
        name=n;
        height=h;
    }

 bool operator >(Mountain obj2){
        if(height>obj2.height){
            return 1;
        }
        else
        {
            return 0;
        }
    }
 
     void display(){
        cout<<"name:"<<name<<endl;
        cout<<"height:"<<height;
    }
};
 
int main(){
    Mountain obj1("everest",8848.86);
    Mountain obj2("K2",8830);
    if(obj1>obj2){
        obj1.display();
    }
    else
    {
        obj2.display();
    }
    return 0;
}