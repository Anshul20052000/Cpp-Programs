#include<iostream>
using namespace std;
int main()
{
    int a = 100;
    int* ptr = &a;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"Derefrencing - *ptr : "<<*ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;
    ptr++;
    *ptr++;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"Derefrencing - *ptr : "<<*ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;
    return 0;
}
