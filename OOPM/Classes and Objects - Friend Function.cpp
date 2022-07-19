#include<iostream>
using namespace std;
class sample
{
    int x,y,z;
public:
    sample(int a,int b)
    {
        x = a;
        y = b;
    }
    friend void sum(sample);
    void show()
    {
        cout<<"Value of Z : "<<z<<endl;
    }
    void show1()
    {
        cout<<"Value of X : "<<x<<endl;
        cout<<"Value of Y : "<<y<<endl;
    }
};
void sum(sample ob)
{
    cout<<"Value of X : "<<ob.x<<endl;
    cout<<"Value of Y : "<<ob.y<<endl;
    cout<<"Value of Z : "<<ob.z<<endl;
    ob.z = (ob.x+ob.y);
    cout<<"Value of Z : "<<ob.z<<endl;
}
int main()
{
    sample ob(20,145);
    sum(ob);
    ob.show();
    //ob1.show1();
    return 0;
}
