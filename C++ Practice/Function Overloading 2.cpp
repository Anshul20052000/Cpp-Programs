#include<iostream>
using namespace std;
void repchar(char,int);
void repchar(char);
void repchar();
int main()
{
    int n;
    char ch;
    cout<<"Enter the Frequency : ";
    cin>>n;
    cout<<"Enter the Character : ";
    cin>>ch;
    repchar(ch,n);
    repchar();
    repchar('=');
    repchar('#',40);
    return 0;
}
void repchar(char ch,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ch;
    }
    cout<<endl;
}

void repchar(char ch)
{
    for(int i=0;i<20;i++)
    {
        cout<<ch;
    }
    cout<<endl;
}

void repchar()
{
    for(int i=0;i<20;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
