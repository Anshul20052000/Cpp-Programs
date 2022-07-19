#include<iostream>
using namespace std;
class circle
{
    float radius;
public:
    void init(float);
    void set_radius();
    float get_radius();
    void show_radius();
};
void circle::init(float radius)
{
    this->radius = radius;
}
void circle::set_radius()
{
    cout<<"Enter the Radius of the Circle : ";
    cin>>radius;
}
void circle::show_radius()
{
    cout<<"The Radius of the Circle is : "<<radius<<endl;
}
float circle::get_radius()
{
    return (radius);
}
float area_of_circle(circle c)
{
    float area;
    area = 3.14*c.get_radius()*c.get_radius();
    return area;
}
int main()
{
    circle c1;
    c1.set_radius();
    c1.show_radius();
    cout<<"The Area of the 1st Circle : "<<area_of_circle(c1)<<endl;
    circle c2;
    c2.init(12.334);
    c2.show_radius();
    float ar = area_of_circle(c2);
    cout<<"The Area of the 1st Circle : "<<ar<<endl;
    return 0;
}
