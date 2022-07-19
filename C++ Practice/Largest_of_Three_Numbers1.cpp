#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    x:
    cout<<"Enter the Three Numbers"<<endl;
    cin>>a>>b>>c;
    if(a>=b)
    {if(a>=c)
    {
        cout<<"The Largest Number is "<<a<<endl;
    }
    else
    {
        cout<<"The Largest Number is "<<c<<endl;
    }}
    else
    {
    if(b>=c)
    {
        cout<<"The Largest Number is "<<b<<endl;
    }
    else
    {
        cout<<"The Largest Number is "<<c<<endl;
    }}
    cout<<"Do you want Another Chance!!!!(Y/N)"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
