#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    if(savings > 5000)
    {
        if(savings > 10000)
        {
            cout<<"Go with A "<<endl;
        }
        else
        {
            cout<<"Go with B"<<endl;
        }
    }
    else if(savings > 2000)
    {
        cout<<"Go with C"<<endl;
    }
    else
    {
        cout<<"Stay At Home"<<endl;
    }
    return 0;
}
