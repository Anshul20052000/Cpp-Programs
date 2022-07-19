#include<iostream>
using namespace std;
void Circle(float r,float &c,float &a);
int main()
{
    float r,c,a;
    cout<<"Enter the Radius of the Circle : ";
    cin>>r;
    Circle(r,c,a);
    cout<<"The Area of the Circle : "<<a<<endl;
    cout<<"The Circumference of the Circle : "<<c<<endl;
    return 0;
}
void Circle(float r,float &c,float &a)
{
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
}
