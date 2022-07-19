#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
    Distance D1;
    Distance D2;
    D1.feet = 123;
    D2.inches = 32.432;
    cout<<"Enter the Inches of D1 : ";
    cin>>D1.inches;
    cout<<"Enter the Feet of D2 : ";
    cin>>D2.feet;
    cout<<"The Distance of D1 is : "<<D1.feet<<"\' - "<<D1.inches<<"\"."<<endl;
    cout<<"The Distance of D2 is : "<<D2.feet<<"\' - "<<D2.inches<<"\"."<<endl;
    return 0;

}
