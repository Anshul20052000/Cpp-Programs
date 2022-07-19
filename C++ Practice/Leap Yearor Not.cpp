#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a Year : ";
    cin>>year;
    if(year%400 == 0)
    {
        cout<<"This Year is a Leap Year..."<<endl;
    }
    else if(year%100 == 0)
    {
        cout<<"This Year is not a Leap Year..."<<endl;
    }
    else
    {
        if(year%4 == 0)
        {
            cout<<"This year is a Leap Year..."<<endl;
        }
        else
        {
            cout<<"This year is not a Leap Year..."<<endl;
        }
    }
    return 0;
}
