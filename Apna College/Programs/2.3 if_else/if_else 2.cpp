#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    if(savings > 20000)
    {
        cout<<"Go with A"<<endl;
    }
    else if(savings > 10000)
    {
        cout<<"Go with C"<<endl;
    }
    else
    {
        cout<<"Stay at Home"<<endl;
    }
}
