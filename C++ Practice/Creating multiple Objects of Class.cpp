#include<iostream>
using namespace std;
class Distance
{
    int feet;
    float inch;
public:
    void get()
    {
        cout<<"Enter the Distance : "<<endl;
        cout<<"Feet : ";
        cin>>feet;
        cout<<"Inch : ";
        cin>>inch;
    }
    void show()
    {
        cout<<"The Distance is : "<<feet<<"\' "<<inch<<"\""<<endl;
    }
};
int main()
{
    Distance d1,d2;
    d1.get();
    d1.show();
    d2.get();
    d2.show();
    return 0;
}
