#include<iostream>
using namespace std;
int main()
{
    int a;
    double b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the Value of B : ";
    cin>>b;
    int &x = a;
    double &y = b;
    cout<<"The Value of A = "<<a<<endl;
    cout<<"The Value of Reference of A = "<<x<<endl;
    cout<<"The Value of B = "<<b<<endl;
    cout<<"The Value of Reference of B = "<<y<<endl;
    return 0;
}
