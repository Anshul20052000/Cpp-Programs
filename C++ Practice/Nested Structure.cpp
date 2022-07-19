#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
};
struct Room
{
    Distance length;
    Distance width;
};
int main()
{
    Room dimensions;
    cout<<"Enter the Feet and Inches of the Room's Length : ";
    cin>>dimensions.length.feet>>dimensions.length.inch;
    cout<<"Enter the Feet and Inches of the Room's Width : ";
    cin>>dimensions.width.feet>>dimensions.width.inch;
    float l,w;
    l = dimensions.length.feet + (dimensions.length.inch/12);
    w = dimensions.width.feet + (dimensions.width.inch/12);
    cout<<"The Area of the Room is  : "<<l*w<<endl;
    return 0;
}
