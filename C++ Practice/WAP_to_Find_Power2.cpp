#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    x:
    long long base,expo,ans;
    cout<<"Enter the Base And Exponent of the Number "<<endl;
    cin>>base>>expo;
    ans=pow(base,expo);
    cout<<base<<" ^ "<<expo<<" is "<<ans<<endl;
    cout<<"Do you want Another Chance[Y/N]!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
