#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str = "xcvksdkhdoiuemf";
    cout<<str<<endl;
    sort(str.begin(), str.end());
    cout<<str<<endl;
    return 0;    
}