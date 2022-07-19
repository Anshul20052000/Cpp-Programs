#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>n;
    for(i=n;i>0;i--)
    {
        k=0;
        for(j=0;j<=n-i;j++)
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
