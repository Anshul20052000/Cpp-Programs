#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
void Display(Distance D);
int main()
{
    Distance D1 = {123,11.7};
    Distance D2,D3,D4;
    cout<<"Enter the Feet of D2 : ";
    cin>>D2.feet;
    cout<<"Enter the Inches of D2 : ";
    cin>>D2.inches;
    D4 = D3 = D2;
    Display(D1);
    Display(D2);
    Display(D3);
    Display(D4);
    return 0;

}
void Display(Distance D)
{
    cout<<"The Distance is : "<<D.feet<<"\' - "<<D.inches<<"\"."<<endl;
}
