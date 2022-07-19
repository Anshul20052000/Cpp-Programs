#include<iostream>
using namespace std;
class sample
{
    int x;
public:
    sample(int a=0)
    {
        x = a;
    }
    /*void show(sample ob[])
    {
        for(int i=0;i<3;i++)
        {
            cout<<ob[i].x<<endl;
        }
    }*/
    void show(sample ob)
    {
        cout<<ob.x<<endl;
    }
    ~sample()
    {
        cout<<"Destroying Objects"<<" "<<x<<endl;
    }
};
int main()
{
    sample ob[3] = {10,20,30};
    sample s;
    //s.show(ob);
    for(int i=0;i<3;i++)
    {
        s.show(ob[i]);
    }
    return 0;
}
