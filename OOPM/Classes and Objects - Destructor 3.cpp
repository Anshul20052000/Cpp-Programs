#include<iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample();
    void show();
    ~sample();
};
sample::sample()
{
        x = 10;
        y = 20;
}
void sample::show()
{
        cout<<"The Value of X is : "<<x<<endl;
        cout<<"The Value of Y is : "<<y<<endl;
}
sample::~sample()
{
        cout<<"Destructor Called!..."<<endl;
        cout<<"Destroying "<<x<<" and "<<y<<endl;
}
int main()
{
    sample ob1;
    ob1.show();
    cout<<"First"<<endl;
    return 0;
    cout<<"Hello World!..."<<endl;
}
