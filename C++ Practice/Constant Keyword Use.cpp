#include<iostream>
using namespace std;
int main()
{
    double radius;
    const double pi = 3.14156;
    cout<<"Enter the Radius of the Sphere : ";
    cin>>radius;
    double volume = (4.0/3.0) * pi * radius * radius * radius;
    cout<<"Volume of the Sphere is : "<<volume<<endl;
    return 0;
}
