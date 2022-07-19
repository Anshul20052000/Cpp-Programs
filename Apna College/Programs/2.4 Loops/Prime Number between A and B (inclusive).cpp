#include<iostream>
using namespace std;
int main()
{
    int a,b;
    bool flag = true;
    cin>>a>>b;
    cout<<"Prime Numbers are : "<<endl;
    for(int i=a;i<=b;i++)
    {
        flag = true;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}
