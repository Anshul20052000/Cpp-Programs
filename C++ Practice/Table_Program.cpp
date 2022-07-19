#include<iostream>
using namespace std;
int main()
{
    int i,N,n;
    cout<<"The Table of any Number of your Choice "<<endl;
    cin>>N;
    cout<<"Till which Number you have to find the Table "<<endl;
    cin>>n;
    cout<<"The Table of "<<N<<" is "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<N<<" * "<<i<<" = "<<N*i<<endl;
    }
    return 0;
}
