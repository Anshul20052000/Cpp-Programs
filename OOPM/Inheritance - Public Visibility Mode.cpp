#include<iostream>
using namespace std;
class Base
{
private:
    int a;
    void get()
    {
        cout<<"Get"<<endl;
    }
public:
    int b;
    void put()
    {
        cout<<"Put"<<endl;
    }
protected:
    int c;
    void show()
    {
        cout<<"Show"<<endl;
    }
};
class Derived:public Base
{
private:
    int x;
    void f1()
    {
        cout<<"F1()"<<endl;
    }
public:
    int y;
    void f2()
    {
        cout<<"F2()"<<endl;
    }
protected:
    int z;
    void f3()
    {
        cout<<"F3()"<<endl;
    }
};
int main()
{
    Derived ob;
    //ob.a=10;
    ob.b=20;
    //ob.c=30;
    //ob.get();
    ob.put();
    //ob.show();
    //ob.x=40;
    ob.y=50;
    //ob.z=60;
    //ob.f1();
    ob.f2();
    //ob.f3();
    return 0;
}
