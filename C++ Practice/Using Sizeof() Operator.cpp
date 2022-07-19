#include<iostream>
using namespace std;
int main()
{
    cout<<"The Size of \'int\' Data Type :            "<<sizeof(int)<<" Bytes"<<endl;
    cout<<"The Size of \'short\' Data Type :          "<<sizeof(short)<<" Bytes"<<endl;
    cout<<"The Size of \'float\' Data Type :          "<<sizeof(float)<<" Bytes"<<endl;
    cout<<"The Size of \'double\' Data Type :         "<<sizeof(double)<<" Bytes"<<endl;
    cout<<"The Size of \'long\' Data Type :           "<<sizeof(long)<<" Bytes"<<endl;
    cout<<"The Size of \'long int\' Data Type :       "<<sizeof(long int)<<" Bytes"<<endl;
    cout<<"The Size of \'long long int\' Data Type :  "<<sizeof(long long int)<<" Bytes"<<endl;
    cout<<"The Size of \'unsigned int\' Data Type :   "<<sizeof(unsigned int)<<" Bytes"<<endl;
    cout<<"The Size of \'unsigned long\' Data Type :  "<<sizeof(unsigned long)<<" Bytes"<<endl;
    cout<<"The Size of \'bool\' Data Type :           "<<sizeof(bool)<<" Bytes"<<endl;

    int a = 100,b;
    b = sizeof(a);
    cout<<"The Size of A : "<<b<<endl;
    b = sizeof(double);
    cout<<"The Size of \'double\' : "<<b<<endl;
    b = sizeof(123l);
    cout<<"The Size of \'123l\' : "<<b<<endl;
    b = sizeof(123L);
    cout<<"The Size of \'123L\' : "<<b<<endl;
    b = sizeof(123.45);
    cout<<"The Size of 123.45 : "<<b<<endl;
    b = sizeof(123.45f);
    cout<<"The Size of \'123.45f\' : "<<b<<endl;
    b = sizeof(123.45D);
    cout<<"The Size of \'123.45D\' : "<<b<<endl;
    return 0;
}
