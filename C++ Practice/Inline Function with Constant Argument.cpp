#include<iostream>
using namespace std;
const float pi = 3.14;
inline float area (const float r);
int main()
{
    float r;
    cout<<"Enter the Radius of the Circle : ";
    cin>>r;
    cout<<"The Area of the Circle area : "<<area(r)<<endl;
    return 0;
}
inline float area(const float r)
{
    return (pi * r * r);
}
