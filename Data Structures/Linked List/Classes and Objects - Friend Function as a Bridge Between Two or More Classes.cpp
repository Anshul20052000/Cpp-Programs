#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int x;
public:
    A(int a)
    {
        x = a;
    }
    friend int max(A ob1,B ob2,C ob3);
    friend void show(A ob1,B ob2,C ob3);
};
class B
{
    int y;
public:
    B(int b)
    {
        y = b;
    }
    friend int max(A ob1,B ob2,C ob3);
    friend void show(A ob1,B ob2,C ob3);
};
class C
{
    int z;
public:
    C(int c)
    {
        z = c;
    }
    friend int max(A ob1,B ob2,C ob3);
    friend void show(A ob1,B ob2,C ob3);
};
int max(A ob1,B ob2,C ob3)
{
    if(ob1.x>ob2.y && ob1.x>ob3.z)
    {
        return(ob1.x);
    }
    else if(ob2.y>ob3.z)
    {
        return(ob2.y);
    }
    else
    {
        return(ob3.z);
    }
}
void show(A ob1,B ob2,C ob3)
{
    cout<<"The Value of X = "<<ob1.x<<endl;
    cout<<"The Value of Y = "<<ob2.y<<endl;
    cout<<"The Value of Z = "<<ob3.z<<endl;
}
int main()
{
    A ob1(10);B ob2(20);C ob3(15);
    cout<<"The Maximum Value is : "<<max(ob1,ob2,ob3)<<endl;
    show(ob1,ob2,ob3);
    return 0;
}
