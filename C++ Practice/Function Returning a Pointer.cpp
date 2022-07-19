#include<iostream>
using namespace std;
int *big(int &x,int &y)
{
    if(x>y)
        return &x;
    else
        return &y;
}
int main()
{
    int a,b,*c;
    cout<<"Enter Two Integers : "<<endl;
    cin>>a>>b;
    c=big(a,b);
    cout<<"The Bigger Number of the Two Integers is : "<<*c<<endl;
    return 0;
}
