#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(A == B)
    {
        cout<<"Both A and B are Equal"<<endl;
    }
    else if(A > B)
    {
        cout<<"A is Greater than B"<<endl;
    }
    else
    {
        cout<<"B is Greater than A"<<endl;
    }
    return 0;
}
