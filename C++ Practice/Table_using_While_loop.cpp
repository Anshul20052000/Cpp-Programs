#include<iostream>
using namespace std;
int main()
{
    int i=0,n,N;
    cout<<"Enter the Number whose Table is to be Found out "<<endl;
    cin>>N;
    cout<<"Enter the Number Till which you have to find out Table "<<endl;
    cin>>n;
    while(i<=n)
    {
        cout<<"\t"<<N<<" * "<<i<<" = "<<N*i<<endl;
        i++;
    }
    return 0;
}
