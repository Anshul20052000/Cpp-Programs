#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    ans:
    cout<<i<<" ";
    i++;
    if(i<=10)
    {
        goto ans;
    }
    return 0;
}
