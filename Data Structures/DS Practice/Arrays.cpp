#include<iostream>
using namespace std;
int main()
{
    int a[] = {6,2,1,5,3};
    int *q;
    q = a;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    q = &a[2];
    cout<<q<<endl;
    q++;
    cout<<q<<endl;
    q--;
    cout<<q<<endl;
    cout<<a[2]<<endl;
    cout<<*(a+2)<<endl;
    cout<<q+3<<endl;
    q=a;
    cout<<*q<<endl;
    cout<<*q+2<<endl;
    cout<<*(q+2)<<endl;

    cout<<a[3]<<endl;
    cout<<*(a+3)<<endl;
    cout<<*(q+3)<<endl;
    cout<<*(3+a)<<endl;
    cout<<*(3+q)<<endl;
    cout<<a[2]<<endl;
    cout<<2[a]<<endl;
    cout<<q[2]<<endl;
    cout<<2[q]<<endl;

    cout<<a[0]<<endl;
    cout<<*a<<endl;
    cout<<*q<<endl;

    cout<<a+1<<endl;
    cout<<&a+1<<endl;
    cout<<&a[0]+1<<endl;
    cout<<*a<<endl;
    cout<<*a+1<<endl;
    cout<<*(a+1)<<endl;

    cout<<q+2<<endl;
    cout<<q-2<<endl;
    cout<<(q+2)-q<<endl;
   // cout<<q*2<<endl;
    //cout<<q/2<<endl;

    int b[5],*p=b;
    cout<<"Enter Elements in Array :" <<endl;
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}
