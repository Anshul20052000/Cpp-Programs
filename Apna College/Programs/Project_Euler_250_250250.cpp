#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, k;
    cin>>n>>k;
    vector<int> values;
    for(int i=1;i<=n;i++)
    {
        //cout<<pow(i,i)<<" ";
        values.push_back(pow(i, i));
    }
    vector<vector<int>> subsets;
    for (int i = 0; i < pow(2, n); i++) 
    {
        int t = i;
        vector<int> v;
        for (int j = 0; j < n; j++) 
        {
            if (t & 1)
                v.push_back(values[j]);
            t >>= 1;
        }
        subsets.push_back(v);
    }
    cout<<endl;
    int combi = 0, sum;
    for(auto ele: subsets)
    {
        sum = 0;
        for(auto i: ele)
        {
            cout<<i<<" ";
            sum += i;
        }
        cout<<endl;
        if(sum%k == 0 && sum!=0)
        {
            cout<<"S : "<<sum<<endl;
            combi++;
        }
    }
    cout<<combi<<endl;
    return 0;
}
