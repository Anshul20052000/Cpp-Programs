#include<iostream>
using namespace std;
int main()
{
    int ar[][3] = {1,2,3,4,5,6};
    int *p;
    p = &ar[0][0];
    cout<<p<<endl;
    p = &ar[0][1];
    cout<<p<<endl;
    p = &ar[0][2];
    cout<<p<<endl;
    p = &ar[0][3];
    cout<<p<<endl;
    p = &ar[1][0];
    cout<<p<<endl;
    p = ar[0];
    cout<<p<<endl;
    p = ar[1];
    cout<<p<<endl;
    //p = ar[0][0];
    p = ar[0];
    cout<<p<<endl;
    cout<<ar<<endl;

    return 0;
}
