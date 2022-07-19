#include<iostream>
using namespace std;
class circle
{
    float radius;
public:
    void init(float);
    void get_radius();
    float show_radius();
    float area_of_circle();
};
void circle::init(float radius)
{
    this->radius = radius;
}
void circle::get_radius()
{
    cout<<"Enter the Radius of the Circle : ";
    cin>>radius;
}
float circle::show_radius()
{
    return radius;
}
float circle::area_of_circle()
{
    float area;
    area = 3.14*radius*radius;
    return area;
}
int main()
{
    circle c1;
    c1.get_radius();
    cout<<"The Radius of the Circle is : "<<c1.show_radius()<<endl;
    cout<<"The Area of the 1st Circle : "<<c1.area_of_circle()<<endl;
    circle c2;
    c2.init(12.334);
    cout<<"The Radius of the Circle is : "<<c2.show_radius()<<endl;
    float ar = c2.area_of_circle();
    cout<<"The Area of the 1st Circle : "<<ar<<endl;
    return 0;
}
