#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a=10;
    ptr = &a;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<*ptr<<endl;
    return 0;
}
