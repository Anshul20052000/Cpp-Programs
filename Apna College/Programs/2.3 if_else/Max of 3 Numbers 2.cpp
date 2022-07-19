#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int Max = A;
    if(Max < B)
    {
        Max = B;
    }
    if(Max < C)
    {
        Max = C;
    }
    cout<<"The Max is : "<<Max<<endl;
    return 0;
}
