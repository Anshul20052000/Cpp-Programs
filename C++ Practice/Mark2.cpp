#include<iostream>
using namespace std;
float area(float x)
{
    return(3.14*x*x);
}
float area(float L,float B,float H)
{
    return (L*B*H);
}
int main()
{
    float r,l,b,h;
    cout<<"Enter the Radius of the Circle "<<endl;
    cin>>r;
    float area(float);
    cout<<"Area of the Circle  "<<area(r)<<endl;
    cout<<"Enter the Length , Breadth and Height of the Figure "<<endl;
    cin>>l>>b>>h;
    float area(float,float,float);
    cout<<"Area of the Figure  "<<area(l,b,h)<<endl;
    return 0;
}
