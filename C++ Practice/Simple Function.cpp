#include<iostream>
using namespace std;
void show(int x);
int main()
{
    int a;
    cout<<"Enter the Value of A : ";
    cin>>a;
    show(a);
    return 0;
}
void show(int x)
{
    cout<<"The Value is : "<<x<<endl;
}
