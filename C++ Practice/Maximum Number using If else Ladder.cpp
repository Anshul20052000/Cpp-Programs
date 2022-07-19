#include<iostream>
using namespace std;
int main()
{
    int a,b,c,large;
    cout<<"Enter the Three Numbers : ";
    cin>>a>>b>>c;
    if((a>=b)&&(a>=c))
    {
        large = a;
    }
    else if((b>=c)&&(b>=a))
    {
        large = b;
    }
    else
    {
        large = c;
    }
    cout<<"The Largest Number is : "<<large<<endl;
    return 0;
}
