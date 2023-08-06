//static class member

#include<iostream>

using namespace std;

class Member
{
private:
  static int count;
  int number;
public:
    void getdata(int a){
        number=a;
        count ++;
    }
    void getcount(void){
        cout<<"count :";
        cout<<count<<"\n";
    }
};

int Member::count;

int main()
{
    Member a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(22);
    a.getdata(65);
    a.getdata(89);

    cout<<"After reading data "<<"\n";
    a.getcount();
    b.getcount();
    c.getcount();
   
    return 0;
}
