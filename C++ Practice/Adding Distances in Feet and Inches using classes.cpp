#include<iostream>
using namespace std;

class Distance
{
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0.0;
    }
    Distance(int ft,float in)
    {
        feet = ft;
        inch = in;
    }
    void getDistance();
    void showDistance();
    void addDistance(Distance, Distance);
};
void Distance :: getDistance()
{
    cout<<"Enter the Distance in Feet and Inches : "<<endl;
    cout<<"Enter the Feet : ";
    cin>>feet;
    cout<<"Enter the Inch : ";
    cin>>inch;
}

void Distance :: showDistance()
{
    cout<<feet<<"\' "<<inch<<"\"";
}

void Distance :: addDistance(Distance disObj1, Distance disObj2)
{
    feet = disObj1.feet + disObj2.feet;
    inch = disObj1.inch + disObj2.inch;
    if(inch>=12)
    {
        feet++;
        inch -= 12;
    }
}

int main()
{
    Distance obj1;
    cout<<"Object 1 : "<<endl;
    obj1.getDistance();
    obj1.showDistance();
    Distance obj2(20,3.9);
    cout<<"\nObject 2 : "<<endl;
    obj2.showDistance();
    Distance obj3;
    cout<<endl;
    obj1.showDistance();
    cout<<" + ";
    obj2.showDistance();
    cout<<" = ";
    obj3.addDistance(obj1,obj2);
    obj3.showDistance();
    return 0;

}
