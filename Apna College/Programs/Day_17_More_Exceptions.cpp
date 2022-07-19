#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Calculator
{
    public:  
    int power(int n, int p)
    {
        if(n<0 || p<0)
        {
            throw runtime_error(" n and p should be non-negative");
        }
        int pow = 1;
        for(int i=0;i<p;i++)
        {
            pow *= n;
        }
        return pow;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
    Calculator c[T];
    int n, p;
    for(int i=0;i<T;i++)
    {
        cin>>n>>p;
        try{
            cout<<c[i].power(n,p)<<endl;
        }
        catch(exception& e)
        {
            cout<<e.what()<<endl;
        }
    }
    return 0;
}