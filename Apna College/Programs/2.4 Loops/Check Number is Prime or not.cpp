#include<iostream>
using namespace std;
int main()
{
    bool flag = true;
    int n;
    cin>>n;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<n<<" is Prime Number"<<endl;
    }
    else
    {
        cout<<n<<" is not a Prime Number"<<endl;
    }
    return 0;
}
