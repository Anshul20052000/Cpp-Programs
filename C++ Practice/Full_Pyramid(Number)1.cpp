#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=0,Count=0,count1=0;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
            Count++;
        }
        while(k!=2*i-1)
        {
            if(Count<=n-1)
            {
                cout<<k+i<<" ";
                Count++;
            }
            else
            {
                count1++;
                cout<<i+k-2*count1<<" ";
            }
            k++;
        }
        count1=Count=k=0;

        cout<<endl;
    }
    return 0;

}

