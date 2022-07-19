#include<iostream>
using namespace std;
class sample
{
    int i,j;
public:
    sample(int x,int y)
    {
        i=x;
        j=y;
    }
    void display()
    {
        cout<<"Value of i : "<<i<<endl;
        cout<<"Value of j : "<<j<<endl;
    }
    ~sample()
    {
        cout<<"Destroying "<<i<<" and "<<j<<endl;
    }
};
int main()
{
    sample ob(40,50);
    ob.display();
    return 0;
}
