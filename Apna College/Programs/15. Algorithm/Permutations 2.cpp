#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<vector<int>> ans;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i: a)
    {
        cin>>i;
    }
    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}