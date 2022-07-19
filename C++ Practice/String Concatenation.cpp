#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[60];
    strcpy(name,"Hello World ");
    strcat(name,"How ");
    strcat(name,"are ");
    strcat(name,"You ");
    strcat(name,"?");
    strcat(name," Thank You");
    cout<<name<<endl;
    return 0;
}
