#include<iostream>
using namespace std;
int main()
{
    int n;
    bool pr=true;
    cout<<"Enter a Number "<<endl;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            pr=false;
        }
        else
        {
            continue;
        }
    }
    if(pr==true)
    {
        cout<<"The Entered Number is a Prime number "<<endl;

    }
    else
    {
        cout<<"The Enter Number is not a Prime Number "<<endl;
    }
    return 0;
}
