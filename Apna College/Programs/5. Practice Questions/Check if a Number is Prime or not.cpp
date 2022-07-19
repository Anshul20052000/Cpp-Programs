#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number to Check : ";
    cin>>n;
    bool flag = true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<n<<" is a Prime Number..."<<endl;
    else
        cout<<n<<" is not a Prime Number..."<<endl;
    return 0;
}
