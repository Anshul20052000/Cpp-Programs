#include<iostream>
using namespace std;
class A
{
private :
    char ch = 'A';
    int num = 10;
public:
    friend class B;
};
class B
{
public:
    void display(A ob)
    {
        cout<<ob.ch<<endl;
        cout<<ob.num<<endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);
    return 0;
}
