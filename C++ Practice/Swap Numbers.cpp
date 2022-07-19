#include<iostream>
using namespace std;
int main()
{
    int temp,a,b;
    cout<<"Enter the Number A :";
    cin>>a;
    cout<<"Enter the Number B :";
    cin>>b;
    cout<<"Before Swapping : A = "<<a<<" B = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After Swapping : A = "<<a<<" B = "<<b<<endl;
    return 0;
}
