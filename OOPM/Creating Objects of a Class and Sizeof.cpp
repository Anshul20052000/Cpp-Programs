#include<iostream>
using namespace std;
class sample
{
private:
    int a,b;
public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Value of A : "<<a<<endl;
        cout<<"Value of B : "<<b<<"\n"<<endl;
    }
};
int main()
{
    cout<<"Size of Class Sample : "<<sizeof(sample)<<endl;
    sample obj1;
    cout<<"\nSize of obj1 "<<sizeof(obj1)<<endl;
    obj1.get(10,20);
    obj1.show();
    sample obj2;
    cout<<"Size of obj2 "<<sizeof(obj2)<<endl;
    obj2.get(30,40);
    obj2.show();
    obj1.show();
    cout<<"Size of obj1 "<<sizeof(obj1)<<endl;
    cout<<"Size of obj2 "<<sizeof(obj2)<<endl;
    return 0;
}
