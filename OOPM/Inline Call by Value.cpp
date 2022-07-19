#include<iostream>
using namespace std;
int temp;
inline void Swap(int A,int B);
int main()
{
    int a,b;
    cout<<"Enter the Value of A and B : "<<endl;
    cin>>a>>b;
    cout<<"Before Value of A : "<<a<<" and B : "<<b<<endl;
    Swap(a,b);
    /*temp=a;
    a=b;
    b=temp;*/
    cout<<"After Value of A : "<<a<<" and B : "<<b<<endl;
    return 0;
}
inline void Swap(int A,int B)
{
    temp=A;
    A=B;
    B=temp;
}
