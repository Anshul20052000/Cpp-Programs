#include<iostream>
using namespace std;
float simple_interest(float p,float r,float t);
float simple_interest(float p,float r);
float simple_interest(float p);
float simple_interest();
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
float simple_interest(float p,float r)
{
    return (p*r*25.0);
}
float simple_interest(float p)
{
    return (p*50.98*25.0);
}
float simple_interest()
{
    return (5000.0*50.98*25.0);
}
