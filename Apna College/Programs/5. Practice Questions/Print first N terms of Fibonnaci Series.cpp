#include<iostream>
using namespace std;
int main()
{
    int a = 0,b = 1,n;
    cout<<"Enter the Value of N : ";
    cin>>n;
    if(n==1)
        cout<<"0"<<endl;
    else if(n==2)
        cout<<"0 1"<<endl;
    else
    {
        cout<<a<<" "<<b;
        int temp,cnt = 2;
        while(cnt < n)
        {
            temp = b;
            b = a+b;
            a = temp;
            cout<<" "<<b;
            cnt++;
        }
    }
    return 0;
}
