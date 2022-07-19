#include<iostream>
using namespace std;

int count_paths(int s, int e)
{
    if(s == e)
    {
        return 1;
    }
    if(s > e)
    {
        return 0;
    }
    int count = 0;
    for(int i=1;i<=6;i++)
    {
        count += count_paths(s + i, e);
    }
    return count;
}

int main()
{
    int start, end;
    cin>>start>>end;
    cout<<count_paths(start, end)<<endl;
    return 0;
}