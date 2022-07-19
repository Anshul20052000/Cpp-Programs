#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
};
Distance input(Distance D);
void Display(Distance D);
void add_Distance(Distance d1,Distance d2);
int main()
{
    Distance D1,D2;
    cout<<"\nEnter the Distance of D1 : ";
    D1 = input(D1);
    cout<<"\nEnter the Distance of D2 : ";
    D2 = input(D2);
    cout<<"\nThe Distances you Entered are : ";
    Display(D1);
    Display(D2);
    add_Distance(D1,D2);
    return 0;

}
Distance input(Distance D)
{
    cout<<"\nEnter Feet : ";
    cin>>D.feet;
    cout<<"Enter Inches : ";
    cin>>D.inch;
    return (D);
}
void Display(Distance D)
{
    cout<<"\nThe Distance is : "<<D.feet<<"\' - "<<D.inch<<"\""<<endl;
}
void add_Distance(Distance d1,Distance d2)
{
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    while(d3.inch>=12)
    {
        d3.inch -= 12;
        d3.feet++;
    }
    Display(d3);
}
