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
        while(k!=2*i-1)
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    return 0;

}
