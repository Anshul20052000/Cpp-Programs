#include<iostream>
using namespace std;
class sample
{
    int x;

    static int y;
public:
    void init(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Value of X = "<<x<<endl;
        cout<<"Value of Y = "<<y<<endl;
    }
};
int sample::y = 99;
//int sample::x = 100;
int main()
{
    sample ob1,ob2,ob4;
    ob1.show();
    ob2.show();
    ob1.init(10,20);
    ob1.show();
    ob2.init(40,50);
    ob2.show();
    ob1.show();
    sample ob3;
    ob3.show();
    ob4.show();
    return 0;
}
