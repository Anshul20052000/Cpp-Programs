#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the Two Numbers "<<endl;
    cin>>a>>b;
    cout<<"The Numbers Before Swapping "<<endl;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The Numbers After Swapping "<<endl;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    return 0;
}
