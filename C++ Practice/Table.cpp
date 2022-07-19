#include<iostream>
using namespace std;
int main()
{
    x:
    float a,n;
    cout<<"Of which Number you have to find the Table "<<endl;
    cin>>n;
    cout<<"Till which Number you have to find the Table"<<endl;
    cin>>a;
    cout<<"The Table of "<<n<<" till "<<a<<" is : "<<endl;
    for(int i=1;i<=a;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    char ch;
    cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    cin>>ch;
    if(ch=='y'||ch=='Y')
        goto x;
    return 0;
}
