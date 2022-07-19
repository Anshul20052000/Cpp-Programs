#include<iostream>
using namespace std;
class line
{
public:
    inline float multiplication(float x,float y)
    {
        return x*y;
    }
    inline float cube(float x)
    {
        return (x*x*x);
    }
};
int main()
{
    line l1;
    float a,b;
    cout<<"Enter Two Values : ";
    cin>>a>>b;
    cout<<"Multiplication is : "<<l1.multiplication(a,b)<<endl;
    cout<<"Cube is : "<<l1.cube(a)<<"  "<<l1.cube(b)<<endl;
    return 0;
}
