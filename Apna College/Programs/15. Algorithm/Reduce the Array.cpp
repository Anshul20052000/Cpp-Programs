#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return (p2.first < p2.first);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<pair<int, int>> v;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), compare);
    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second] = i;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}