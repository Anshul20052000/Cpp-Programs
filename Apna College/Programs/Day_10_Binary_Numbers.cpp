#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n)
{
    string bin;
    int rem;
    while(n>0)
    {
        rem = n%2;
        bin = to_string(rem) + bin;
        n = n/2;
    }
    return bin;
}

int main()
{
    int n;
    cin>>n;
    string binary;
    binary = decimal_to_binary(n);
    int cnt = 0, max_cnt = 0;
    for(int i=0;i<binary.length();i++)
    {
        if(binary[i] == '1')
        {
            cnt++;
        }
        else 
        {
            cnt = 0;
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout<<max_cnt<<endl;
    return 0;
}