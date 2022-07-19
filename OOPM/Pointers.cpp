#include<iostream>
using namespace std;
int main()
{
    int *p,a;
    float *p1,b;
    double *p2,c;
    long *p3,d;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<"int = "<<sizeof(a)<<endl;
    cout<<"float = "<<sizeof(b)<<endl;
    cout<<"double = "<<sizeof(c)<<endl;
    cout<<"long = "<<sizeof(d)<<endl;
    return 0;
}
