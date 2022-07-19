#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    switch(a)
    {
    case 100:
        cout<<"In Outer Switch..."<<endl;
        switch(b)
        {
        case 200:
            cout<<"In Inner Switch..."<<endl;
        }
    }
    cout<<"The Value of A : "<<a<<endl;
    cout<<"The Value of B : "<<b<<endl;
    return 0;
}
