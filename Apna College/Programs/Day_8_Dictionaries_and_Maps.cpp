#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, string> mp;
    map<string, string>::iterator it;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        string num;
        cin>>name;
        cin>>num;
        mp[name] = num;
    }
    string qry;
    while(cin>>qry)
    {
        cout<<qry<<endl;
        it = mp.find(qry);
        cout<<mp.begin()<<endl;
        if(it!=mp.end())
        {
            cout<<it->first<<"="<<it->second<<endl;
        }
        else 
        {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
