#include<iostream>
using namespace std;
class sample
{
    float ar;
public:
    void area(float r)
    {
        cout<<"f"<<endl;
        ar = 3.14*r*r;
        cout<<"The Area of the circle is : "<<ar<<endl;
    }
    void area(float l,float b)
    {
        cout<<"ff"<<endl;
        ar = l*b;
        cout<<"The Area of the Rectangle : "<<ar<<endl;
    }
    void area(double ba,double he)
    {
        cout<<"dd"<<endl;
        ar = (ba*he)/2;
        cout<<"The Area of the Triangle is : "<<ar<<endl;
    }
};
int main()
{
    sample ob1;
    ob1.area(2);
    ob1.area(2.5);
    ob1.area(2.5,3.5);
    ob1.area(2.5F,4.9);
    ob1.area(2.5F,4.9F);
    return 0;
}
