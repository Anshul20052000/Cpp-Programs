#include<iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return(c1 + c2 - c3);
}

int main()
{
    int a, b, limit;
    cout<<"Enter the Two divisibility numbers : ";
    cin>>a>>b;
    cout<<"Enter the Upper Limit : ";
    cin>>limit;
    cout<<"Total number of Numbers : "<<divisible(limit,a,b)<<endl;
    return 0;
}
