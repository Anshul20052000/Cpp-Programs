#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if( A > B )
    {
        if( A > C )
        {
            cout<<"Max is : "<<A<<endl;
        }
        else
        {
            cout<<"Max is : "<<B<<endl;
        }
    }
    else
    {
        if( B > C )
        {
            cout<<"Max is : "<<B<<endl;
        }
        else
        {
            cout<<"Max is : "<<C<<endl;
        }
    }
    return 0;
}
