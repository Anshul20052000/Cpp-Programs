#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* ptr = &a;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"Derefrencing - *ptr : "<<*ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;
    cout<<"sizeof(a) : "<<sizeof(a)<<endl;
    cout<<"sizeof(&a) : "<<sizeof(&a)<<endl;
    cout<<"sizeof(ptr) : "<<sizeof(ptr)<<endl;
    cout<<"sizeof(*ptr) : "<<sizeof(*ptr)<<endl;
    cout<<"sizeof(&ptr) : "<<sizeof(&ptr)<<endl;
    unsigned long long int num;
    num = 10;
    cout<<"sizeof(num) : "<<sizeof(num)<<endl;

    unsigned long int num1;
    num1 = 10;
    cout<<"sizeof(num1) : "<<sizeof(num1)<<endl;

    unsigned long num2;
    num2 = 10;
    cout<<"sizeof(num2) : "<<sizeof(num2)<<endl;
    //return 0;

    float num3;
    num3 = 10;
    cout<<"sizeof(num3) : "<<sizeof(num3)<<endl;

    double num4;
    num4 = 10;
    cout<<"sizeof(num4) : "<<sizeof(num4)<<endl;
    return 0;
}