#include<iostream>
using namespace std;

class demo
{
public:
    void Display()
    {
        cout<<"Inside the Class..."<<endl;
    }
};
int main()
{
    demo d;
    d.Display();
    return 0;
}
