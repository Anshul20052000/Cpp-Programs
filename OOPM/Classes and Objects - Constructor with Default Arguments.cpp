#include<iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample()
    {
        x=0;
        y=0;
    }
    sample(int a,int b)
    {
        x=a;
        y=b;
    }
    sample(sample &ob)
    {
        x = ob.x;
        y = ob.y;
    }
    void show()
    {
        cout<<"Value of X = "<<x<<endl;
        cout<<"Value of Y = "<<y<<endl;
        cout<<endl;
    }
};
int main()
{
    sample ob1;
    ob1.show();
    sample ob2(10,20);
    ob2.show();
    sample ob3=ob2;
    ob3.show();
    return 0;
}
