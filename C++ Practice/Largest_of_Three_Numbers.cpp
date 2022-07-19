#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    x:
    cout<<"Enter the Three Numbers "<<endl;
    cin>>A>>B>>C;
    if(A>=B&&A>=C)
    {
        cout<<"The Largest Number is "<<A<<endl;
    }
    else if (B>=C&&B>=A)
    {
        cout<<"The Largest Number is "<<B<<endl;

    }
    else
    {
        cout<<"The Largest Number is "<<C<<endl;

    }
    cout<<"Do you want Another Chance!!!!(Y/N)"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        goto x;
    }
    return 0;

}
