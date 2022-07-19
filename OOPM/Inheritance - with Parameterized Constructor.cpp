
#include<iostream>
using namespace std;
class base1
{
    int x;
public:
    base1(int k)
    {
        x = k;
        cout<<"Base1 Constructor!..."<<endl;
    }
    void show1()
    {
        cout<<"Value of X = "<<x<<endl;
    }
    ~base1()
    {
        cout<<"Base1 Destructor!..."<<endl;
    }
};
class base2
{
    int y;
public:
    base2(int k)
    {
        y = k;
        cout<<"Base2 Constructor!..."<<endl;
    }
    void show2()
    {
        cout<<"Value of Y = "<<y<<endl;
    }
    ~base2()
    {
        cout<<"Base2 Destructor!..."<<endl;
    }
};
class derived:public base1,public base2
{
    int z;
public:
    derived(int k,int l,int m):base1(k),base2(l)
    {
        z = m;
        cout<<"Derived Constructor!..."<<endl;
    }
    void show3()
    {
        cout<<"Value of Z = "<<z<<endl;
    }
    ~derived()
    {
        cout<<"Derived Destructor!..."<<endl;
    }
};
int main()
{
    derived ob(10,20,30);
    ob.show1();
    ob.show2();
    ob.show3();
    return 0;
}
