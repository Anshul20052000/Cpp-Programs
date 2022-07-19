#include<iostream>
using namespace std;
int main()
{
    int a,b,l,lcm;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    if(a>b)
        l = a;
    else
        l = b;
    for(int i=l;i<=(a*b);i++)
    {
        if((i%a == 0)&&(i%b == 0))
        {
            lcm = i;
            break;
        }
    }
    cout<<"The Least Common Factor is : "<<lcm<<endl;
    int hcf = (a*b)/lcm;
    cout<<"The Highest Common Factor is : "<<hcf<<endl;
    return 0;
}
