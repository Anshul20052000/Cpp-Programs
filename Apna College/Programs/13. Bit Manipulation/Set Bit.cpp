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
    cout<<"The Number after setting bit is : "<<(n | (1<<pos))<<endl;
    return 0;
}
