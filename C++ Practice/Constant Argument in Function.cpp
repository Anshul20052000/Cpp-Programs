#include<iostream>
using namespace std;
void show(const int b);
int main()
{
    int a;
    cout<<"Enter the Value of A : ";
    cin>>a;
    show(a);
    cout<<"The Value of A : "<<a<<endl;
    return 0;
}
void show(const int b)
{
    cout<<"The value of B : "<<b<<endl;
}
