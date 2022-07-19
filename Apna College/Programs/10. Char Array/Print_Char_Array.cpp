#include<iostream>
using namespace std;
int main()
{
    char str[100] = "Apple";
    int i=0;
    while(str[i] != '\0')
    {
        cout<<str[i++];
    }
    return 0;
}