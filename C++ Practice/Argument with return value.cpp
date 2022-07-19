#include<iostream>
using namespace std;
float simple_Interest(float,float,float);
int main()
{
    cout<<"Simple Interest "<<endl;
    float p,r,t,si;
    cout<<"Enter the Principle,Rate and Interest : ";
    cin>>p>>r>>t;
    si = simple_Interest(p,r,t);
    cout<<"The Simple Interest is : "<<si<<endl;
    return 0;
}
float simple_Interest(float p,float r,float t)
{
    float si;
    si = (p*r*t)/100.0;
    return si;
}
