#include<iostream>
using namespace std;
float simple_interest(float p = 4000.0,float r = 50.98,float t = 25);
int main()
{
    float p,r,t;
    cout<<"Enter the Principle, Rate and Time : ";
    cin>>p>>r>>t;
    cout<<"The Simple Interest is : "<<simple_interest(p,r,t)<<endl;
    cout<<"The Simple Interest is : "<<simple_interest(p,r)<<endl;
    cout<<"The Simple Interest is : "<<simple_interest(p)<<endl;
    cout<<"The Simple Interest is : "<<simple_interest()<<endl;
    return 0;
}
float simple_interest(float p,float r,float t)
{
    return (p*r*t);
}
