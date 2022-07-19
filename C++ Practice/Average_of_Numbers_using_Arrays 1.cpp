#include<iostream>
using namespace std;
int main()
{
    x:
    int A[100],a;
    float sum=0;
    cout<<"Enter the Number of Elements "<<endl;
    cin>>a;
    cout<<"Enter the Elements in the Array "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<"Element "<<i+1<<" = ";
        cin>>A[i];
    }
    for(int i=0;i<a;i++)
    {
        sum+=A[i];
    }
    float avg;
    avg=sum/a;
    cout<<"The Average of the Numbers is  "<<avg<<endl;
    cout<<"Do you want Another Chance!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
