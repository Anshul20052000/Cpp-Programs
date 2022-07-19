#include<iostream>
using namespace std;
int main()
{
    int  n,k=1;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=i;y++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
