#include<iostream>
using namespace std;

void Factorization(int n)
{
    int spf[1000] = {0};
    for(int i=0;i<=n;i++)
    {
        spf[i] = i;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            if(spf[j] = j)
            {
                spf[j] = i;
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    Factorization(n);
    return 0;
}
