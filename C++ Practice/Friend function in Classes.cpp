#include<iostream>
using namespace std;
class height;
class width
{
    float wd;
public:
    void getdata(float w)
    {
        wd = w;
        cout<<"The Width is : "<<wd<<endl;
    }
    friend void area(width,height);
};
class height
{
    float ht;
public:
    void getdata(float h)
    {
        ht = h;
        cout<<"The Height is : "<<ht<<endl;
    }
    friend void area(width,height);
};
void area(width w,height h)
{
    float area;
    area = w.wd * h.ht;
    cout<<"The Area is : "<<area<<endl;
}
int main()
{
    width w;
    height h;
    w.getdata(123.45);
    h.getdata(543.21);
    area(w,h);
    return 0;
}
