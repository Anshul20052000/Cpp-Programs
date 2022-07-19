#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void helper(vector<int> a, vector<vector<int>> &ans, int idx);

vector<vector<int>> permute(vector<int> a)
{
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    helper(a, ans, 0);
    return ans;
}

void helper(vector<int> a, vector<vector<int>> &ans, int idx)
{
    if(idx == a.size())
    {
        ans.push_back(a);
    }
    for(int i=idx; i<a.size(); i++)
    {
        if(i != idx and a[i] == a[idx])
        {
            continue;
        }
        swap(a[i], a[idx]);
        helper(a, ans, idx+1);
    }
}

int main()
{ 
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i: a)
    {
        cin>>i;
    }
    vector<vector<int>> res = permute(a);
    int cnt = 1;
    for(auto i: res)
    {
        cout<<cnt<<" -> \t";
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        cnt++;
    }
    return 0;
}