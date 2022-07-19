#include<iostream>
using namespace std;
inline double lb_to_kg(double l);
int main()
{
    double lb;
    cout<<"Enter the Weight in lbs : ";
    cin>>lb;
    cout<<"The Weigth in Kgs is : "<<lb_to_kg(lb)<<endl;
    return 0;
}
inline double lb_to_kg(double l)
{
    return l * 0.453592;
}
