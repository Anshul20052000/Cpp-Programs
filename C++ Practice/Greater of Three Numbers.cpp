#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Three Numbers  : ";
    cin>>a>>b>>c;
    int gre;
    if(a>b)
    {
        if(a > c)
            gre = a;
        else
            gre = c;
    }
    else
    {
        if(b > c)
            gre = b;
        else
            gre = c;
    }
    cout<<"The Greater Number is : "<<gre<<endl;
    return 0;
}
