#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Which position : ";
    int pos;
    cin>>pos;
    cout<<"The Bit at "<<pos<<" is : ";
    (n & (1<<pos)) != 0 ? cout<<"1" : cout<<"0" ;
    return 0;
}
