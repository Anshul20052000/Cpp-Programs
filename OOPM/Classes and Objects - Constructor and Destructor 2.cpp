#include<iostream>
using namespace std;
class sample
{
public:
    sample(int,int);
    void display();
    ~sample();
    private int i,j;
};
sample::sample(int x,int y)
{
    i=x;
    j=y;
}
void sample::display()
{
    cout<<"Value of i : "<<i<<endl;
    cout<<"Value of j : "<<j<<endl;
}
sample::~sample()
{
    cout<<"Destroying "<<i<<" and "<<j<<endl;
}
int main()
{
    sample ob(40,50);
    ob.display();
    cout<<ob.i<<" "<<ob.j<<endl;
    return 0;
}
