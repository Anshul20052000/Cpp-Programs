#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    int Min,Max;
    if(A > B)
    {
        Min = B;
        Max = A;
    }
    else
    {
        Min = A;
        Max = B;
    }
    cout<<"Max is : "<<Max<<endl;
    cout<<"Min is : "<<Min<<endl;
    return 0;
}
