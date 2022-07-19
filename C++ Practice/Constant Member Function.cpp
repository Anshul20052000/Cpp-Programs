#include<iostream>
using namespace std;
class value
{
    int x;
public:
    void getX()
    {
        cout<<"Enter the Value of X : ";
        cin>>x;
    }
    void showX() const
    {
        //x = x + 2;
        cout<<"The Value of X : "<<x<<endl;
    }
};
int main()
{
    value v1;
    v1.getX();
    v1.showX();
    return 0;
}
