#include<iostream>
using namespace std;
float simple_Interest();
int main()
{
    cout<<"Simple Interest "<<endl;
    float si;
    si = simple_Interest();
    return 0;
}
float simple_Interest()
{
    float p,r,t,si;
    cout<<"Enter the Principle,Rate and Interest : ";
    cin>>p>>r>>t;
    si = (p*r*t)/100.0;
    cout<<"The Simple Interest is : "<<si<<endl;
    return si;
}
