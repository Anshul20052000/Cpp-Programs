#include<iostream>
using namespace std;
void simple_Interest();
int main()
{
    cout<<"Simple Interest "<<endl;
    simple_Interest();
    return 0;
}
void simple_Interest()
{
    int p,r,t,si;
    cout<<"Enter the Principle,Rate and Interest : ";
    cin>>p>>r>>t;
    si = (p*r*t)/100;
    cout<<"The Simple Interest is : "<<si<<endl;
}
