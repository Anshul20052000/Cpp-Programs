#include<iostream>
using namespace std;
int main()
{
    x:
    unsigned long long fact=1;
    unsigned int n;
    cout<<"Enter the Number till which you have to find the Factorial "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        cout<<fact<<endl;
    }
    cout<<"do you want Another Chance[Y/N]!!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;

    }
    return 0;

}
