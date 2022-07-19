#include<iostream>
using namespace std;
int main()
{
    x:
    float ar[200],n,sum=0;
    cout<<"Enter the Length of the Array "<<endl;
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cout<<"Enter the Values "<<j+1<<"  ";
        cin>>ar[j];
    }
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    cout<<"Average of the Numbers is "<<sum/n<<endl;
    cout<<"Do you want Another Chance!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
