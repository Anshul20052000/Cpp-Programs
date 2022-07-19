#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int flag = -1;
    for(int i=2;i<n/2;i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == -1)
    {
        cout<<"The Number is a Prime Number..."<<endl;
    }
    else
    {
        cout<<"The Number is not a Prime Number..."<<endl;
    }
    return 0;
}
