#include<iostream>
using namespace std;
int main()
{
    cout<<"Bitwise Operator"<<endl;
    int a,b,c;
    cout<<"Enter the Value of the A and B : ";
    cin>>a>>b;
    c = a & b;
    cout<<" A & B = "<<c<<endl;
    c = a | b;
    cout<<" A | B = "<<c<<endl;
    c = a ^ b;
    cout<<" A ^ B = "<<c<<endl;
    c = ~ a;
    cout<<" ~ A = "<<c<<endl;
    c = a >> b;
    cout<<" A >> B = "<<c<<endl;
    c = a << b;
    cout<<" A << B = "<<c<<endl;
    return 0;
}
