#include<iostream>
#include<string.h>
using namespace std;
class string_function
{
    char name[20];
public:
    void String(char ch1[],char ch2[])
    {
        strcat(ch1,ch2);
        strcpy(name,ch1);
    }
    void show()
    {
        cout<<"The Name is : "<<name<<endl;
    }
};
int main()
{
    char str1[50],str2[50];
    string_function s1;
    cout<<"Enter the First Name : ";
    gets(str1);
    cout<<"Enter the Last Name : ";
    gets(str2);
    s1.String(str1,str2);
    s1.show();
    return 0;
}
