#include<iostream>
using namespace std;
int main()
{
    x:
    int a,b,hcf;
    cout<<"Enter the Two Numbers whose HCF or GCD is to be found out "<<endl;
    cin>>a>>b;
    cout<<"The Highest Common Factor of the two Numbers is ";
    if(b>a)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=1;i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf<<endl;
    cout<<"Do you want Another Chance[Y/N]!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;

    }
    return 0;
}

