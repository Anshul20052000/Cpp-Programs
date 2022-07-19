#include<iostream>
using namespace std;
int main()
{
    x:
    char alphabet='A';
    int a;
    char input;
    cout<<"Enter the Largest Uppercase Alphabet "<<endl;
    cin>>input;
    a=input-'A';
    cout<<a<<endl;
    for(int i=1;i<=(input-'A'+1);i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<endl;
    }
    cout<<"do you want Another Chance[Y/N]!!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        goto x;
    }
    return 0;
}

