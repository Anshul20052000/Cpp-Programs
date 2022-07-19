#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int *p,**p1;
    p=&a;
    p1=&b;
    cout<<*p<<endl;
    cout<<**p1<<endl;
    return 0;


}
