#include<iostream>
using namespace std;
class Time
{
    int hh,mm,ss;
public:
    Time()
    {
        hh=mm=ss=0;
        cout<<"Object Created!"<<endl;
    }
    void input(int i,int j,int k)
    {
        hh=i;
        mm=j;
        ss=k;
    }
    void output()
    {
        cout<<"Time => "<<hh<<" : "<<mm<<" : "<<ss<<endl;
    }
    ~Time()
    {
        cout<<"Destroying the Object!"<<endl;
    }
};
int main()
{
    Time t1,*tp;
    cout<<"Initializing Data Member using Object : "<<endl;
    t1.input(12,34,56);
    cout<<"Printing using Object : "<<endl;
    t1.output();
    tp=&t1;
    cout<<"Printing using Object Pointer : "<<endl;
    tp->output();
    cout<<"Initializing Data Member using Object Pointer : "<<endl;
    tp->input(1,23,45);
    cout<<"Printing using Object : "<<endl;
    t1.output();
    cout<<"Printing using Object Pointer : "<<endl;
    tp->output();
    return 0;
}
