#include<iostream>
using namespace std;
class Area
{
private:
    float radius;
public:
    void input()
    {
        cout<<"Enter the Radius of the Circle : ";
        cin>>radius;
    }
    void Display_Radius()
    {
        cout<<"The Radius of the Circle is : "<<radius<<endl;
    }
    void area()
    {
        float area;
        cout<<"The Area of the Circle is : "<<3.14*radius*radius<<endl;
    }
};
int main()
{
    Area a1;
    a1.input();
    a1.Display_Radius();
    a1.area();
    return 0;

}
