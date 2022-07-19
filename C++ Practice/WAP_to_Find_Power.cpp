#include<iostream>
using namespace std;
int main()
{
    x:
    unsigned int p,i=2,ans;
    float n;
    cout<<"Enter the Number "<<endl;
    cin>>n;
    cout<<"Enter the Power "<<endl;
    cin>>p;
    ans=n;
    while(i<=p)
    {
        ans=ans*n;
        i++;
    }
    cout<<n<<" to the Power "<<p<<" is "<<ans<<endl;
    cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;

    }
    return 0;
}
