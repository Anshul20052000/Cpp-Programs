#include<iostream>
using namespace std;
void fib(int n)
{
    int a = 0, b = 1;
    if(n == 1)
        cout<<"0"<<endl;
    else if(n == 2)
        cout<<"0 1"<<endl;
    else
        cout<<"0 1 ";
        int next = 0, terms = 2, temp = 0;
        while(terms<n)
        {
            next = a + b;
            terms++;
            cout<<next<<" ";
            a = b;
            b = next;
        }
    return;
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}
