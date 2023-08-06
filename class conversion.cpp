#include<math.h>

#include<iostream>

using namespace std;

class polar{
    double angle,radius;
    public:
    polar(){}
    polar(double a,double r){
        angle=a;
        radius=r;}
        void display(){
            cout<<"\nangle :"<<radius;
        }
        double getangle()
        {
            return angle;
        }
        double getradius(){
            return radius;
    }

};
class rectangular{
    double xco,yco;
    public:
    rectangular(){}
    rectangular(double xco,double yco){
        this->xco=xco;
        this->yco=yco;}
    void display(){
        cout<<"radius : x-coord:"<<xco<<"\nY-coord: "<<yco;
        }
    rectangular(polar p){
        yco=p.getradius()*sin(p.getangle());
        xco=p.getradius()*cos(p.getangle());
    }
};

int main()
{
    rectangular r1;
    polar p1(12,30);
    r1=p1;
    r1.display();
    p1.display();   
    return 0;
}