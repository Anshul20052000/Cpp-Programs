#include<iostream>
using namespace std;
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the Number "<<i+1<<" : ";
        cin>>num[i];
    }
    cout<<"\nThe Numbers are : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"The Number "<<i+1<<" is : "<<num[i]<<endl;
    }
    return 0;
}
