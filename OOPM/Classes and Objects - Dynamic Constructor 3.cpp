#include<iostream>
#include<string.h>
using namespace std;
class sample
{
    char *str;
    int len;
public:
    sample(char *s)
    {
        len = strlen(s);
        str = new char[len+1];
        strcpy(str,s);
    }
    void show()
    {
        cout<<"The String is : "<<str<<endl;
        delete (str);
    }
};
int main()
{
    sample ob1("Hello World");
    ob1.show();
    sample ob2("Introduction to Dynamic Constructor");
    ob2.show();
    return 0;
}
