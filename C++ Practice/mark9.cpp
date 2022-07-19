#include<iostream>
using namespace std;
int main()
{
    int a,b;
    x:
    cout<<"Enter the Two Values " <<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"You are a Hero "<<endl;
        goto x;
    }
    else if(a<100)
    {
        cout<<"You are Genius"<<endl;
        goto x;
    }
    else if(b=0)
    {
        cout<<"You are a student "<<endl;
        goto x;
    }
    else
    {
        cout<<"What do you want "<<endl;
        goto x;
    }
    return 0;
     }
