//Array of object 

#include<iostream>

using namespace std;

class Employee {
    char name[30];
    int age;
    public:
    void getdata(void);
    void putdata(void);
};
void Employee:: getdata(void){
    cout<<"Enter name:"; 
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    }
void Employee::putdata(void)
{
    cout<<" Name :"<<name<<"\n";
    cout<<" Age :"<<age<<"\n";
}
 int array_size=5;
int main(){
    Employee manager[array_size];
    for(int i=0;i<array_size;i++)
    {
        cout<<"\n Details of manager"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<array_size;i++)
    {
        cout<<"\n manager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}
