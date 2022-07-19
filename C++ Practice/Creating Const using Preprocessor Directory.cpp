#include<iostream>
#define pi 3.14156
using namespace std;
int main()
{
    float r,vol;
    cout<<"Enter the Radius of the Hemi-Sphere : ";
    cin>>r;
    vol = (2.0/3.0) * pi * r * r * r;
    cout<<"The Volume of the Hemi-Sphere is : "<<vol<<endl;
    return  0;
}
