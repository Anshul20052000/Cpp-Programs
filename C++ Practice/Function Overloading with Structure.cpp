#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch,factor;
};
void input(Distance& D);
void Display(Distance D);
void Display(float D);
void scale(Distance& D);
int main()
{
    Distance D1,D2;
    float D3;
    cout<<"Enter the Distance and Factor of D1 : ";
    input(D1);
    cout<<"\nEnter the Distance and Factor of D2 : ";
    input(D2);
    cout<<"Enter the Distance of D3 in inches only : ";
    cin>>D3;
    cout<<"\nThe Distances you Entered are : \n";
    Display(D1);
    Display(D2);
    Display(D3);
    scale(D1);
    scale(D2);
    cout<<"After Scaling : "<<endl;
    Display(D1);
    Display(D2);
    return 0;

}
void input(Distance& D)
{
    cout<<"\nEnter Feet : ";
    cin>>D.feet;
    cout<<"Enter Inches : ";
    cin>>D.inch;
    cout<<"Enter Factor : ";
    cin>>D.factor;
    cout<<endl;
}
void Display(Distance D)
{
    cout<<"  "<<D.feet<<"\' "<<D.inch<<"\""<<endl;
}
void Display(float D)
{
    int feet = D/12;
    float inch = D - feet*12;
    cout<<"  "<<feet<<"\' "<<inch<<"\""<<endl;
}
void scale(Distance& D)
{
    float inches;
    inches = ((D.feet*12) + D.inch)*D.factor;
    D.feet = inches/12;
    D.inch = inches - (D.feet*12);
}
