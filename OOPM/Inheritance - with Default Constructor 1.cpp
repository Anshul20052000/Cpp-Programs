#include<iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout<<"Base1 Constructor!..."<<endl;
    }
    ~base1()
    {
        cout<<"Base1 Destructor!..."<<endl;
    }
};
class base2
{
public:
    base2()
    {
        cout<<"Base2 Constructor!..."<<endl;
    }
    ~base2()
    {
        cout<<"Base2 Destructor!..."<<endl;
    }
};
class derived:public base1,public base2
{
public:
    derived()
    {
        cout<<"Derived Constructor!..."<<endl;
    }
    ~derived()
    {
        cout<<"Derived Destructor!..."<<endl;
    }
};
int main()
{
    derived ob;
    return 0;
}
