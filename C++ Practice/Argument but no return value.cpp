#include<iostream>
using namespace std;
void simple_Interest(float,float,float);
int main()
{
    cout<<"Simple Interest "<<endl;
    float p,r,t,si;
    cout<<"Enter the Principle,Rate and Interest : ";
    cin>>p>>r>>t;
    simple_Interest(p,r,t);
    return 0;
}
void simple_Interest(float p,float r,float t)
{
    float si;
    si = (p*r*t)/100.0;
    cout<<"The Simple Interest is : "<<si<<endl;
}
