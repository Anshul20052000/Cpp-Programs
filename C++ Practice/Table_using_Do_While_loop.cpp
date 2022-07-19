#include<iostream>
using namespace std;
int main()
{
    int n,N,i=1;
    cout<<"Enter the Number whose Table is to be Found out "<<endl;
    cin>>N;
    cout<<"Till Which Number you have to find out table "<<endl;
    cin>>n;
    do
    {
        cout<<"\t"<<N<<" * "<<i<<" = "<<i*N<<endl;
        i++;
    }
    while(i<=n);
    return 0;
}
