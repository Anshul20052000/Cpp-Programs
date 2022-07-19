#include<iostream>
using namespace std;
class student
{
    int i;
public:
    student()
    {
        i=0;
    }
    student operator ++()
    {
        student temp;
        temp.i=++i;
        return(temp);

    }
    student operator ++(int)
    {
        student temp;
        temp.i=i++;
        return(temp);
    }
    void display()
    {
        cout<<" i = "<<i<<endl;
    }
};
int main()
{
    student obj,obj1;
    obj.display();
    obj1.display();
    obj1=++obj;
    obj.display();
    obj1.display();
    obj1=obj++;
    obj.display();
    obj1.display();
    return 0;

}

