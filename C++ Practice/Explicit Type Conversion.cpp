#include<iostream>
using namespace std;
int main()
{
    int a = 10 , b = 500;
    float c = 34.57;
    long d = 45678 , e;
    e = ( long(a) + long(b) )*( long(c) + long(d) );
    cout<<"Result : "<<e<<endl;
    return 0;
}
