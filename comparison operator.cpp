#include<iostream>
#include<string.h>

using namespace std;

class mountain
{
    private:
    string name;
    string location;
    double height;
    public:
    mountain(const string name,double height, const string location):name(name),height(height),location(location){}
    int operator>(const mountain& other) {
        return height > other.height;
    }

    
    void displayDetails()  {
        cout << "Mountain Name: " << name << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << "Location: " << location << endl;
    }
};
int main() {
    mountain m1("Mount Everest", 8848.86, "Nepal");
    mountain m2("K2", 8611, "Pakistan");
    mountain m3("Makalu", 8586, "Nepal");

    mountain highestMountain = m1;

    if (m2 > highestMountain) {
        highestMountain = m2;
    }
    if (m3 > highestMountain) {
        highestMountain = m3;
    }

    cout << "Details of the highest mountain:" << endl;
    highestMountain.displayDetails();

    return 0;
}