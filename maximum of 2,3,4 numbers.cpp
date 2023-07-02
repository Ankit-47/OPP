//wap maximum of 2,3,4 number using 4functions with same name  maximum
#include<iostream>
using namespace std;

int maximum(int q, int p );

int maximum(int q,int p,int r);

int maximum(int q,int p,int r,int s);

int maximum(int q,int p,int r,int s,int t);

int main()
{
    int q,p,r,s,t;
    cout<<"enter the numbers:"<<endl;
    cin>>q>>p>>r>>s>>t;
    cout<<"the maximum number is"<<maximum(q,p)<<endl;
    cout<<"the maximum number is"<<maximum(q,p,r)<<endl;
    cout<<"the maximum number is"<<maximum(q,p,r,s)<<endl;
    cout<<"the maximum number is"<<maximum(q,p,r,s,t)<<endl;
}

int maximum(int q, int p)
{
    if (q>p)
    {
        return q;
    }
    else 
    {
        return p;
    }
}
int maximum(int q,int p,int r)
{
    if(q>p && q>r)
    {
        return q;
    }
    else if(p>q && p>r )
    {
        return p;
    }
    else
    {
        return r;
    }
}  
int maximum(int q,int p,int r,int s)
{
    if(q>p && q>r && q>s)
    {
        return q;
    }
    else if(p>q && p>r &&p>s )
    {
        return p;
    }
    else if(s>q && s>p && s>r)
    {
        return s;
    }
    else
    {
        return r;
    }
 
}
int maximum(int q,int p,int r,int s,int t)
{
    if(q>p && q>r && q>s && q>t)
    {
        return q;
    }
    else if(p>q && p>r &&p>s &&p>t )
    {
        return p;
    }
    else if(s>q && s>p && s>r &&s>t)
    {
        return s;
    }
    else if (r>q && r>p && r>s && r>t)
    {
        return r;
    }
    else 
    {
        return t;
    }
}
