#include<iostream>
using namespace std;
int multi(int x,int y)
{
    return (x*y);
}
int main()
{
    int ans,A,B;
    int multi(int,int);
    cout<<"Enter the Two Numbers "<<endl;
    cin>>A>>B;
    ans=multi(A,B);
    cout<<"The Multiplication of the Two Numbers is "<<ans;
    return 0;
}
