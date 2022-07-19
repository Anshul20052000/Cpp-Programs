#include<iostream>
using namespace std;
int main()
{
    x:
    int j,n;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"do you want Another Chance[Y/N]!!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        goto x;
    }
    return 0;
}
