#include<iostream>
using namespace std;
class sample
{
    int x,y,z;
public:
    sample(int a=10,int b=20,int c=30)
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
        cout<<endl;
    }
};
int main()
{
    sample ob1;
    ob1.show();
    sample ob2(109999);
    ob2.show();
    sample ob3(25,50);
    ob3.show();
    sample ob4(109,2190,30088);
    ob4.show();
    sample ob5(ob2);
    ob5.show();
    sample ob6=ob3;
    ob6.show();
    sample ob7;
    ob7 = ob2;
    ob7.show();
    return 0;
}
