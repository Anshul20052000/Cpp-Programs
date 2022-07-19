#include<iostream>
using namespace std;
struct distance
{
    int feet;
    float inch;
}d1,d2,sum;
int main()
{
    cout<<"Enter the Information of the 1 Reading : "<<endl;
    cout<<"Enter the Feet : "<<endl;
    cin>>d1.feet;
    cout<<"Enter the Inch : "<<endl;
    cin>>d1.inch;
    cout<<"\nEnter the Information of the 2nd Reading : "<<endl;
    cout<<"Enter the Feet : "<<endl;
    cin>>d2.feet;
    cout<<"Enter the Inch : "<<endl;
    cin>>d2.inch;
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12)
    {
        sum.feet++;
        sum.inch-=12;
    }
    cout<<"The Sum of Distances : "<<endl;
    cout<<"Feet : "<<sum.feet<<"\n";
    cout<<"Inch : "<<sum.inch<<"\n";
    cout<<sum.feet<<" Feet "<<sum.inch<<" Inches ";
    return 0;
}
