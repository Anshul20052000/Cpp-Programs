#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the Number 1 : ";
    cin>>num1;
    cout<<"Enter the Number 2 : ";
    cin>>num2;
    if(num1 > num2)
    {
        cout<<num1<<" is Larger Number. "<<endl;
    }
    else
    {
        cout<<num2<<" is Larger Number. "<<endl;
    }
    return 0;
}
