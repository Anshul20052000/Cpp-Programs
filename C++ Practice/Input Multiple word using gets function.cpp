#include<iostream>
using namespace std;
const int Max = 50;
int main()
{
    char str[Max];
    cout<<"Enter your Name : ";
    cin.get(str,Max);
    cout<<"You Entered : "<<str<<endl;
    return 0;
}
