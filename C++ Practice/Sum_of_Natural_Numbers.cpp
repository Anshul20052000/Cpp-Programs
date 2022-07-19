#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    x:
    cout<<"Sum of Natural Numbers "<<endl;
    cout<<"Till which number you have to find Sum "<<endl;
    cin>>n;
    cout<<"Sum is "<<endl;
    for(int i=1;i<=n;i++)
    {
        temp=temp+i;
        cout<<temp<<endl;
    }
    char ch;
    cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
