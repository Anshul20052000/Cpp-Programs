#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Three Numbers : ";
    cin>>a>>b>>c;
    int Max = ((a>b) ? ((a>c) ? a : c ) : ((b>c) ? b : c));
    cout<<"The Maximum Value is : "<<Max<<endl;
    return 0;
}
