#include<iostream>
using namespace std;
int main()
{
    x:
    unsigned int n,p,ans=1;
    cout<<"Enter the Number "<<endl;
    cin>>n;
    cout<<"Enter the Power"<<endl;
    cin>>p;
    cout<<n<<" to the Power "<<p<<" is ";
    while(p!=0)
    {
        ans=ans*n;
        p--;
    }
    cout<<ans<<endl;
    cout<<"Do you want Another Chance[Y/N]!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        goto x;

    }
    return 0;
}
