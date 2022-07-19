#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            cout<<"\n"<<n<<" is not a Prime Number"<<endl;
            exit(0);
        }
    }
    cout<<"\n"<<n<<" is a Prime Number"<<endl;
    return 0;
}
