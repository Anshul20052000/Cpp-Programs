#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
    Distance D1 = {123,11.7};
    Distance D2,D3;
    cout<<"Enter the Feet of D2 : ";
    cin>>D2.feet;
    cout<<"Enter the Inches of D2 : ";
    cin>>D2.inches;
    D3.feet = D1.feet + D2.feet;
    D3.inches = D1.inches + D2.inches;
    while(D3.inches >= 12)
    {
        D3.inches -= 12;
        D3.feet++;
    }
    cout<<"The Distance of D1 is : "<<D1.feet<<"\' - "<<D1.inches<<"\"."<<endl;
    cout<<"The Distance of D2 is : "<<D2.feet<<"\' - "<<D2.inches<<"\"."<<endl;
    cout<<"The Distance of D3 is : "<<D3.feet<<"\' - "<<D3.inches<<"\"."<<endl;
    return 0;

}

