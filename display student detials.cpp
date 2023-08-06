#include<iostream>
#include<string.h>

using namespace std;

class Student
{
    private:
        char name[10];
        int roll, marks;

    public:
        Student() {}

        Student(const char name[], int roll, int marks) {
            strcpy(this->name, name);
            this->roll = roll;
            this->marks = marks;
        }
        void setStudent(   const char name[],int roll,int marks) {
            this->roll = roll;
            strcpy(this->name, name);
            this->marks = marks;
        }
        void displayStudent() {
            cout<<"Name: "<<this->name<<endl;
            cout<<"roll: "<<this->roll<<endl;
            cout<<"marks: "<<this->marks<<endl;
        }
        int getmarks(){
            return this->marks;
        }

};

int main()
{
    Student s("ankit" ,1 ,100),s1;
    s.displayStudent();
    cout<<endl;
    s1.setStudent("anish", 2, 99);

    s1.displayStudent();
    cout<<"marks:"<<s.getmarks()<<endl;
    
    return 0;
}




