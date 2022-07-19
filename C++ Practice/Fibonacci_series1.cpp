#include<iostream>
using namespace std;
int main()
{
    x:
    int t1=0,t2=1,next=0,n;
    cout<<"Enter Till which you have to find the Fibonacci Series "<<endl;
    cin>>n;
    cout<<"The Fibonacci Series is "<<endl;
    cout<<" "<<t1<<" "<<t2<<" ";
    next=t1+t2;
    int t=3;
    while(t<=n)
    {
        cout<<next<<" ";
        t1=t2;
        t2=next;
        next=t1+t2;
        t++;
    }
    char ch;
    cout<<endl<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    cin>>ch;
    if(ch=='y'||ch=='Y')
       {
           goto x;
       }
    return 0;
}
