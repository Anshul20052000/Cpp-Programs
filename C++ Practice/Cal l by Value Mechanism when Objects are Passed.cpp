#include<iostream>
using namespace std;
class sample
{
    int x;
public:
    sample(int i)
    {
        x=i;
        cout<<"Constructing Object with "<<x<<endl;
    }
    ~sample()
    {
        cout<<"Destroying Object having "<<x<<endl;
    }
    void put(int i)
    {
        x=i;
    }
    int  get()
    {
        return(x);
    }
};
void fun(sample S)
{
    S.put(2);
    cout<<"This is Fun Function : "<<endl;
    cout<<"x = "<<S.get()<<endl;
}
int main()
{
    sample S1(1);
    cout<<"This is main Function : "<<endl;
    cout<<"X = "<<S1.get()<<endl;
    fun(S1);
    cout<<"Back to Main Function "<<endl;
    cout<<" X = "<<S1.get()<<endl;
    return 0;
}
