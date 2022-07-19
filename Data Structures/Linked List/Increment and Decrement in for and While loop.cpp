#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<i<<endl;
    }
    cout<<endl;
    for(int i=0;i<5;++i)
    {
        cout<<"\t"<<i<<endl;
    }
    cout<<endl;
    int i=0;
    while(i<5)
    {
        cout<<"\t"<<i<<endl;
        i++;
    }
    cout<<endl;
    i=0;
    while(i<5)
    {
        cout<<"\t"<<i<<endl;
        ++i;
    }
    cout<<endl;
    int j=0;
    i=0;
    while(j<5)
    {
        cout<<"\t"<<j<<endl;
        j=++i;
    }
    cout<<endl;
    j=0;
    i=0;
    while(j<5)
    {
        cout<<"\t"<<j<<endl;
        j=i++;
    }
    int a[4][3];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<3;++j)
        {
            cout<<"  "<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
