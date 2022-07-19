#include<iostream>
using namespace std;
int &Min(int &a,int &b);
int main()
{
    int x,y;
    cout<<"Enter the Value of X and Y : ";
    cin>>x>>y;
    Min(x,y) = 100;
    cout<<"The Value of X : "<<x<<" and Y : "<<y<<endl;
    return 0;
}
int &Min(int &a,int &b)
{
    b += 10;
    a += 10;
    if(a>b)
        return b;
    else
        return a;
}
