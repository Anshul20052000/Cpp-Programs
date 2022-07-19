#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"The Factors of "<<n<<" are : ";
    for(int i=1;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}
