#include<iostream>
using namespace std;
int main()
{
    int n,*p;
    cout<<"For how many elements you want to Declare the Array : ";
    cin>>n;
    p = new int[n];
    cout<<"Enter the Elements in the Array : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>p[i];
    }
    cout<<"The Elements in the Array are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"The Element "<<i+1<<" is : "<<p[i]<<endl;
    }
    delete p;
    return 0;
}
