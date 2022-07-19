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
    D2.feet = D1.feet;
    D2.inches = D1.inches;
    D3 = D2;
    cout<<"The Distance of D1 is : "<<D1.feet<<"\' - "<<D1.inches<<"\"."<<endl;
    cout<<"The Distance of D2 is : "<<D2.feet<<"\' - "<<D2.inches<<"\"."<<endl;
    cout<<"The Distance of D3 is : "<<D3.feet<<"\' - "<<D3.inches<<"\"."<<endl;
    return 0;

}

