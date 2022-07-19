#include<iostream>
using namespace std;
int main()
{
    int n;
    x:
    cout<<"Enter the Year "<<endl;
    cin>>n;
    if(n%4==0)
    {
        cout<<"The "<<n<<" is a Leap Year "<<endl;

    }
    else
    {
        cout<<"The Entered Year is not a Leap Year"<<endl;
    }
    char ch;
    cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
