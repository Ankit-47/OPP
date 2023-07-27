#include<iostream>

using namespace std;
  
    class University
    {
        protected:
        char name[50];
        char location[30];
         
        public:
        void input(){
            cout<<"enter the name";
            cin>>name;
            cout<<"enter the location"<<endl;
            cin>>location;

        }
        void display()
        {
            cout<<"name="<<name<<endl;
            cout<<"location="<<location<<endl;
        }
    };
    class affiliatedcollage :virtual public University{
        protected:
        char name[50];
        char address[50];
        int program;
        public:
        void input(){
            cout<<"Enter name"<<endl;
            cin>>name;
            cout<<"Enter the location"<<endl;
            cin>>address;
            cout<<"Enter no of programs"<<endl;
            cin>>program;     
        }
        void display(){
            cout<<"name"<<name<<endl;
            cout<<"address"<<address<<endl;
            cout<<"no of programs"<<program<<endl;
        }
    };
    class constitutedcollage: virtual public University
    {
        protected:
        char dean[20];
        char school[30];
        char nameofprogram[20];
        public:
        void input()
        {
            cout<<"enter dean's name:"<<endl;
            cin>>dean;
            cout<<"name of school:"<<endl;
            cin>>school;
            cout<<"name of programs:"<<endl;
            cin>>nameofprogram;
        }
        void display()
        {
            cout<<"dean name"<<dean<<endl;
            cout<<"name of school"<<school<<endl;
            cout<<"name of program"<<nameofprogram<<endl;
        }
    };
    class student : public affiliatedcollage ,public constitutedcollage
    {
        int roll ;
        char namel[30];
        char programe[30];
        public:
        void input(){
            cout<<"enter roll no:" <<endl;
            cin>>roll;
            cout<<"Enter name of student" <<endl;
            cin>>namel;
            cout<<"enter program"<<endl;
            cin>>programe;

        }
        void display()
        {
            cout<<"enter roll no:"<<roll<<endl;
            cout<<"enter name"<<namel<<endl;
            cout<<"enter program:"<<programe<<endl;


        }

    };
    int main()
    {
        student s1,s2;
       s1.input();
    s1.display();
    return 0;
    }
