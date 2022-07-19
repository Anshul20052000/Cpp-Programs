#include<iostream>
using namespace std;
class sample
{
    int x,y,z;
public:
    sample(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void show()
    {
        cout<<"Value of X = "<<x<<endl;
        cout<<"Value of Y = "<<y<<endl;
        cout<<"Value of Z = "<<z<<endl;
    }
};
int main()
{
    /*sample ob1;
    ob1.show();
    sample ob2(10);
    ob2.show();
    sample ob3(10,20);
    ob3.show();*/
    sample ob4(10,20,300);
    ob4.show();
    return 0;
}
