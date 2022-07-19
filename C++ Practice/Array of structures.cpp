#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
};
Distance input(Distance D);
void Display(Distance D);
int main()
{
    Distance D[5];
    cout<<"Enter the Distances... "<<endl;
    for(int i=0;i<5;i++)
    {
        D[i] = input(D[i]);
    }
    cout<<"\nThe Distances are... "<<endl;
    for(int i=0;i<5;i++)
    {
        Display(D[i]);
    }
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
    cout<<"\nThe Distance is : "<<D.feet<<"\' "<<D.inch<<"\""<<endl;
}
