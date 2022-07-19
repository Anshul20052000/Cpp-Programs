#include<iostream>
using namespace std;

int sum_till_n(int n)
{
    if(n == 1)
    {
        return (1);
    }
    return(n + sum_till_n(n-1));
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_till_n(n);
    return 0;
}