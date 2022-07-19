#include<iostream>
using namespace std;
int prime(int L,int H)
{
    int flag;
    for(int i=L;i<=H;i++)
    {
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag==0)
        {
            cout<<i<<"  ";
        }

    }

}
int main()
{
    x:
    int low,high;
    cout<<"Enter the Interval"<<endl;
    cin>>low>>high;
    void swap(int,int);
    if(low>high)
    {
        int temp;
        temp=low;
        low=high;
        high=temp;
    }
    cout<<"The Prime Numbers in the Interval "<<low<<" and "<<high<<" are :"<<endl;
    int prime(int,int);
    prime(low,high);
    cout<<endl;
    cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        goto x;
    }
    return 0;

}

