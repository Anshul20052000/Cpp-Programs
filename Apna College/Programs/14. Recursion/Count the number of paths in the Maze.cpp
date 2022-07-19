#include<iostream>
using namespace std;

int paths(int n, int s, int e)
{
    if(s==n-1 && e==n-1)
    {
        return 1;
    }
    if(s>=n || e>=n)
    {
        return 0;
    }
    return (paths(n, s+1, e) + paths(n, s, e+1));
}

int main()
{
    int n, start, end;
    cin>>n>>start>>end;
    cout<<paths(n, start, end)<<endl;
    return 0;
}