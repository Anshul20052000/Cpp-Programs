#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the Value of A and B : ";
    cin>>a>>b;
    int result;
    result = (a > b )? a : b;
    cout<<"The Maximum Value is : "<<a<<endl;
    return 0;
}

