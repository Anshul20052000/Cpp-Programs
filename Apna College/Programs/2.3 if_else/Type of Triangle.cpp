#include<iostream>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    if((sidea == sideb) && (sideb == sidec))
    {
        cout<<"This is an Equilateral Triangle"<<endl;
    }
    else if(sidea == sideb || sideb == sidec || sidec == sidea)
    {
        cout<<"This is an Isoceles Triangle"<<endl;
    }
    else
    {
        cout<<"This is an Scalene Triangle"<<endl;
    }
    return 0;
}
