#include<iostream>
using namespace std;
int main()
{
    x:
    int n1,n2,max1,lcm;
    cout<<"Enter the Two Numbers whose LCM is to be Found out"<<endl;
    cin>>n1>>n2;
    cout<<"The LCM of the Two Numbers is ";
    if(n1>n2)
    {
        max1=n1;
    }
    else
    {
        max1=n2;
    }
    while(true)
        {
            if(max1%n1==0&&max1%n2==0)
            {
                lcm=max1;
                break;
            }
            else
            {
                max1++;
            }
        }
        cout<<lcm<<endl;
        cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
        char ch;
        cin>>ch;
        if(ch=='y'||ch=='Y')
        {
            goto x;

        }
        return 0;

}
