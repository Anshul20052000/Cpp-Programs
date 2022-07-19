#include<iostream>
using namespace std;
class sample1
{
    int a,b;
public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Value of A : "<<a<<endl;
        cout<<"Value of B : "<<b<<endl;
    }
protected:
    int addition()
    {
        return (a+b);
    }
}s3;
sample1 s2;
class sample2:public sample1
{
    int c,d;
    void fun()
    {
        cout<<"Hello World"<<endl;
    }
public :
    void input1(int x,int y)
    {
        c=x;
        d=y;
        fun();
    }
    void show1()
    {
        cout<<"Value of C : "<<c<<endl;
        cout<<"Value of D : "<<d<<endl;
    }
    void call()
    {
        cout<<"Addition is : "<<addition()<<endl;
    }
}s5;
void display();
int main()
{
    sample1 s1;
    s1.input(1,2);
    s1.show();
    cout<<"Size of Object s1 : "<<sizeof(s1)<<endl;
    s2.input(3,4);
    s2.show();
    //s2.call();
    cout<<"Size of object s2 : "<<sizeof(s2)<<endl;
    s3.input(5,6);
    s3.show();
//    s3.call();
    cout<<"Size of Object s3 : "<<sizeof(s3)<<endl;
    display();
    return 0;
}
void display()
{
    sample2 s4;
    s4.input(6,7);
    s4.show();
    s4.call();
    s5.input1(7,9);
    s5.show1();
    s5.call();
}
