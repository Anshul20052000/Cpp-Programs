#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int n1,n2;
    cout<<"Enter two Positive Integers "<<endl;
    cin>>n1>>n2;
    cout<<"The HCF of "<<n1<<" and "<<n2<<" is "<<hcf(n1,n2)<<endl;
    if(n1<n2)
    {
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    return 0;
}
int hcf(int n1,int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else
    {
        return n1;
    }
}
