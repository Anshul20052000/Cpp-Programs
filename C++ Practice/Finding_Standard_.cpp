#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    x:
    int n;
    float ar[100],sum=0,sd=0,avg,sqsum=0;
    cout<<"Enter the Number of Elements "<<endl;
    cin>>n;
    cout<<"Enter the Elements in the Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<" ";
        cin>>ar[i];
    }
    for (int i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    cout<<"Total Sum is "<<sum<<endl;
    avg=sum/n;
    cout<<"Average = "<<avg;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        sqsum+=pow((ar[i]-avg),2);
    }
    cout<<"Sum of Square of all Numbers = "<<sqsum<<endl;
    sd=sqrt(sqsum/n);
    cout<<"The Standard Deviation of the Numbers is "<<sd<<endl;
    cout<<"Do you want Another Chance!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
