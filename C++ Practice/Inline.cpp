#include<iostream>
#include<stdlib.h>
using namespace std;
void fun()
{
    cout<<"My Name is Anshul "<<endl;
}
inline void fun();
int main()
{
    system("cls");
    int s;
    cout<<"Enter a Number "<<endl;
    cin>>s;
    cout<<"The Number you Entered is "<<s<<endl;
    system("Pause");
    fun();
    system("Pause");
    return 0;
}
