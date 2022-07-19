#include<iostream>
using namespace std;
class circle
{
    float radius;
public:
    void setRadius(float);
    float getRadius();
    float area();
};
void circle::setRadius(float r)
{
    radius = r;
}
float circle::getRadius()
{
    return radius;
}
float circle::area()
{
    return (3,14*radius*radius);
}
int main()
{
    circle c1;
    c1.setRadius(123.45);
    cout<<"The Radius is : "<<c1.getRadius()<<endl;
    cout<<"The Area of the Circle : "<<c1.area()<<endl;
    return 0;
}
