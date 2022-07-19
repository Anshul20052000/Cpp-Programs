#include<iostream>
using namespace std;

void swapping(int a, int b)
{
    cout<<"\tInside Swapping Function..."<<endl;
    cout<<"\tBefore Swapping : "<<endl;
    cout<<"\tA = "<<a<<endl;
    cout<<"\tB = "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"\tAfter Swapping : "<<endl;
    cout<<"\tA = "<<a<<endl;
    cout<<"\tB = "<<b<<endl;
    return;
}

int main()
{
    int a,b;
    cout<<"Enter A and B : ";
    cin>>a>>b;
    cout<<"Before Swapping : "<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    swapping(a,b);
    cout<<"After Swapping : "<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    return 0;
}