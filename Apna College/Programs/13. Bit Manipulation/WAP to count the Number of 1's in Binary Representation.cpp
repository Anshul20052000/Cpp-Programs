#include<iostream>
using namespace std;

int countOnes(int n)
{
    int cnt = 0;
    while(n)
    {
        n = (n & (n-1));
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"The Number of 1's are : "<<countOnes(n)<<endl;
    return 0;
}
