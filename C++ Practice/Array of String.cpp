#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of Name you want to Add : ";
    cin>>n;
    char name[n][50];
    cout<<"Enter the Names : "<<endl;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Name "<<i+1<<" : ";
        gets(name[i]);
    }
    cout<<"The Name you Entered are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Name "<<i+1<<" : "<<name[i]<<endl;
    }
    return 0;
}
