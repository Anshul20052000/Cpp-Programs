#include<iostream>
using namespace std;
int main()
{
    int *ap[5];
    int a=10,b=20,c=30,d=40,e=50;
    ap[0]=&a;
    ap[1]=&b;
    ap[2]=&c;
    ap[3]=&d;
    ap[4]=&e;
    cout<<"The Values being Pointed by the Pointers : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"The Pointer ap["<<i<<"] pointing to : "<<*ap[i]<<endl;
    }
    cout<<"The Address of the First Element of the Array : "<<ap<<endl;
    cout<<"The Values Stored in the Array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"The Address stored at ap["<<i<<"] is : "<<ap[i]<<endl;
    }
    return 0;
}
