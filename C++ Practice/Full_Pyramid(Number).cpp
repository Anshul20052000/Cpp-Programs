#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        while(k!=i)
        {
            cout<<k+i<<" ";
            k++;
        }
        while(k>=2)
        {
            cout<<(k+i)-2<<" ";
            k--;
        }
        cout<<endl;
    }
    return 0;

}
