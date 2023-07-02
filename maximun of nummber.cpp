//Wap to find the maximum of 4nummbers
#include<iostream>
using namespace std;

int maximum(int a, int b, int c, int d);

int main() 
    {
      int x,y,w,z;
      cout<<"Enter the numbers:"<<endl;
      cin>>x>>y>>w>>z;
      cout<<"The maximum number is"<< maximum(x,y,w,z);
      return 0;

    }
int maximum(int p,int q,int r,int s)
    {
        if(p>q && p>r && p>s)
        {
            return p;
        }
        else if (q>p && q>r && q>s)
        {
            return q;
        }
        else if (r>p && r>q && r>s)
        {
            return r;
        }
        else
        {
            return s;
        }
    }