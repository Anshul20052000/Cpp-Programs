#include<iostream>
using namespace std;
int main()
{
    int a = 100;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    cout<<"a : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    cout<<"ptr1 : "<<ptr1<<endl;
    cout<<"Derefrencing - *ptr1 : "<<*ptr1<<endl;
    cout<<"&ptr1 : "<<&ptr1<<endl;
    cout<<"ptr2 : "<<ptr2<<endl;
    cout<<"Derefrencing - *ptr2 : "<<*ptr2<<endl;
    cout<<"Derefrencing - **ptr2 : "<<**ptr2<<endl;
    cout<<"&ptr2 : "<<&ptr2<<endl;
    cout<<"ptr3 : "<<ptr3<<endl;
    cout<<"Derefrencing - *ptr3 : "<<*ptr3<<endl;
    cout<<"Derefrencing - **ptr3 : "<<**ptr3<<endl;
    cout<<"Derefrencing - ***ptr2 : "<<***ptr3<<endl;
    cout<<"&ptr3 : "<<&ptr3<<endl;
    return 0;
}