#include<iostream>
using namespace std;
int main()
{
    int a,b,s,hcf;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    if(a>b)
        s = b;
    else
        s = a;
    for(int i=1;i<s;i++)
    {
        if((a%i == 0)&&(b%i == 0))
        {
            hcf = i;
        }
    }
    cout<<"The Highest Common Factor is : "<<hcf<<endl;
    int lcf;
    lcf = (a*b)/hcf;
    cout<<"The Least Common Factor is : "<<lcf<<endl;
    return 0;
}
