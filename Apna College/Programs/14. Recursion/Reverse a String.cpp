#include<iostream>
using namespace std;

void reverse_str(char ch[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    reverse_str(ch, n, i+1);
    cout<<ch[i];
    return;
}

int main()
{
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }   
    reverse_str(ch, n, 0);
    return 0;
}