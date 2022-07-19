#include<iostream>
#include<string.h>
using namespace std;
class salesman
{
    char name[25];
    float total;
public:
    salesman(char *s,float f)
    {
        strcpy(name," ");
        strcpy(name,s);
        total=f;
    }
    void Print()
    {
        cout.write(this->name,strlen(name));
        cout<<" has Invoked Print()" <<endl;
    }
};
int main()
{
    salesman Raman("Raman",1234),Sita("Sita",2345),Vedant("Vedant",3456);
    Raman.Print();
    Vedant.Print();
    Sita.Print();
    return 0;
}
