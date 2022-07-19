#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    point(int a=0,int b=0)
    {
        x = a;
        y = b;
    }
    point addPoint(point p)
    {
        point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return(temp);
    }
    void display()
    {
        cout<<"Value of X = "<<x<<endl;
        cout<<"Value of Y = "<<y<<endl;
    }
    ~point()
    {
        cout<<"Destructor Called... "<<x<<" and "<<y<<endl;
    }
};
int main()
{
    point p1(5,3);
    point p2(10,20);
    point p3;
    cout<<"Point 1"<<endl;
    p1.display();
    cout<<"Point 2"<<endl;
    p2.display();
    p3 = p1.addPoint(p2);
    cout<<"Point 3"<<endl;
    p3.display();
    return 0;
}
