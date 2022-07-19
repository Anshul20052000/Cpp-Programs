#include<iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample()
    {
        x = 10;
        y = 20;
    }
    void show()
    {
        cout<<"The Value of X is : "<<x<<endl;
        cout<<"The Value of Y is : "<<y<<endl;
    }
    ~sample()
    {
        cout<<"Destructor Called!..."<<endl;
    }
};
int main()
{
    sample ob1;
    ob1.show();
    return 0;
}
