#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,res;
    cout<<"Enter the Value of A , B , C and D : ";
    cin>>a>>b>>c>>d;
    res = a * b + c / d;
    cout<<res<<endl;
    res = a - b + c;
    cout<<res<<endl;
    res = a * (b + c) / d;
    cout<<res<<endl;
    res = a * c / d;
    cout<<res<<endl;
    return 0;
}
