#include<iostream>
using namespace std;
void cube(int* x);
int main()
{
    int a;
    cout<<"Enter the value of A : ";
    cin>>a;
    cube(&a);
    cout<<"Value of A : "<<a<<endl;
    return 0;
}
void cube(int* x)
{
    *x = (*x) * (*x) * (*x);
    cout<<"The Value of X : "<<*x<<endl;
}
