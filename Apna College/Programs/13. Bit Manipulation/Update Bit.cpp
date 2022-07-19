#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the Position : ";
    int pos;
    cin>>pos;
    int value;
    cout<<"Enter the Value : ";
    cin>>value;
    cout<<"The Number after Update is : "<<((n & (~(1 << pos))) | (1<<pos))<<endl;
    return 0;
}
