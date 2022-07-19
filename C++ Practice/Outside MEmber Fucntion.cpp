#include<iostream>
using namespace std;
class circle
{
    float radius;
public:
    void get_radius();
    void show_radius();
    void area_of_circle();
};
void circle::get_radius()
{
    cout<<"Enter the Radius of the Circle : ";
    cin>>radius;
}
void circle::show_radius()
{
    cout<<"The Radius of the Circle : "<<radius<<endl;
}
void circle::area_of_circle()
{
    float area;
    area = 3.14*radius*radius;
    cout<<"The Area of the Circle is : "<<area<<endl;
}
int main()
{
    circle c1;
    c1.get_radius();
    c1.show_radius();
    c1.area_of_circle();
    return 0;
}
