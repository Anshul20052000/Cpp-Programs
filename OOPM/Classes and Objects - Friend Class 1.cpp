#include<iostream>
using namespace std;
class A
{
    int x;
public:
    A(int a)
    {
        x = a;
    }
    friend class B;
};
class B
{
    int y;
public:
    B(int b)
    {
        y = b;
    }
    int Max(A ob)
    {
        if(ob.x>y)
        {
            return (ob.x);
        }
        else
        {
            return (y);
        }
    }
};
int main()
{
    A ob1(100);
    B ob2(20);
    int m;
    m = ob2.Max(ob1);
    cout<<"The Maximum Value is : "<<m<<endl;
    return 0;
}
