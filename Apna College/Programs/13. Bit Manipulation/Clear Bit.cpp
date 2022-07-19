#include<iostream>
using namespace std;
int main()
{
    int n, pos;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the Position : ";
    cin>>pos;
    cout<<"The Number after Clear Bit : "<<(n & (~(1 << pos)))<<endl;
    return 0;
}
