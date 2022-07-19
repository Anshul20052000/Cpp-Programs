#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    int Max;
    Max = ( a > b )? a : b ;
    cout<<"The Maximum Value is : "<<Max<<endl;
    return 0;
}

