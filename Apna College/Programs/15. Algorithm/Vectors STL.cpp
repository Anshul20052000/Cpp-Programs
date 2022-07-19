#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(100);
    v.push_back(200);
    v.push_back(50);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator it;
    for(it = v.begin();it != v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    v.pop_back();
    vector<int> v2(43, 121);
    swap(v, v2);
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    for(auto ele:v2)
    {
        cout<<ele<<" ";
    }
    cout<<endl; 
    return 0;
}