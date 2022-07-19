#include<iostream>
using namespace std;
int main()
{
    int a,b,x = 0,y = 0;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    ((a > b) ? x : y )= 100;
    cout<<"The Value of A and B : "<<a<<" "<<b<<endl;
    cout<<"The Value of X and Y : "<<x<<" "<<y<<endl;
    return 0;
}
