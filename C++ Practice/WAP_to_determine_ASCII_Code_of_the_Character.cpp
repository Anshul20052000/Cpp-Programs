#include<iostream>
using namespace std;
int main()
{
    x:
    char a;
    cout<<"Enter the Character "<<endl;
    cin>>a;
    cout<<"The ASCII Code of the "<<a<<" is "<<int(a)<<endl;
    cout<<"Do you want Another Chance[Y/N]!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y'||ch=='y')
    {
        goto x;
    }
    return 0;
}
