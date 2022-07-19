#include<iostream>
using namespace std;
int main()
{
    int low,high,flag;
    cout<<"Enter the Intervals"<<endl;
    cin>>low>>high;
    while(low<=high)
    {
        flag=0;
        for(int i=2;i<low/2;++i)
        {
            if(low%i==0)
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
            cout<<low<<" ";
        }
        ++low;
    }
    return 0;
}
