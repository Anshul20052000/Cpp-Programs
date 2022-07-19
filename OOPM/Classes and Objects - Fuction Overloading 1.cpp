#include<iostream>
using namespace std;
class sample
{
    int a,b;
public:
    void Swap(int x,int y)
    {
        cout<<"ii"<<endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void Swap(long int x,long int y)
    {
        cout<<"LL"<<endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void Swap(float x,float y)
    {
        cout<<"ff"<<endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void Swap(double x,double y)
    {
        cout<<"dd"<<endl;
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
};
int main()
{
    sample ob;
    ob.Swap(4,5);
    ob.Swap(4.6,5.9);
    ob.Swap(4.4,5.8F);
    ob.Swap(4.1f,5.7F);
    ob.Swap(4.1f,5.5l);
    return 0;
}
