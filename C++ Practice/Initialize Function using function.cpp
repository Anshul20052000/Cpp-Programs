#include<iostream>
using namespace std;
class circle
{
    float radius;
public:
    void init(float);
    void get_radius();
    void show_radius();
    float area_of_circle();
};
void circle::init(float r)
{
    radius = r;
}
void circle::get_radius()
{
    cout<<"Enter the Radius of the Circle : ";
    cin>>radius;
}
void circle::show_radius()
{
    cout<<"The Radius of the Circle : "<<radius<<endl;
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
    c1.show_radius();
    cout<<"The Area of the 1st Circle : "<<c1.area_of_circle()<<endl;
    circle c2;
    c2.init(12.334);
    c2.show_radius();
    float ar = c2.area_of_circle();
    cout<<"The Area of the 1st Circle : "<<ar<<endl;
    return 0;
}
