#include<iostream>
using namespace std;
union fun
{
    int i;
    char c;
    float f;
};
int main()
{
    union fun o;
    cout<<"Enter an Integer : ";
    cin>>o.i;
    cout<<"Enter a Character : ";
    cin>>o.c;
    cout<<"Enter a Float number : ";
    cin>>o.f;
    cout<<"Integer : "<<o.i<<endl;
    cout<<"Character : "<<o.c<<endl;
    cout<<"Float Number : "<<o.f<<endl;
    return 0;
}
