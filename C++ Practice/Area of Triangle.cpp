#include<iostream>
#include<cmath>
using namespace std;

double Area_of_Triangle(double a, double b,double c);

int main()
{
    double a, b, c, area;
    cout<<"Enter the Side A : ";
    cin>>a;
    cout<<"Enter the Side B : ";
    cin>>b;
    cout<<"Enter the Side C : ";
    cin>>c;
    area = Area_of_Triangle( a , b , c );
    cout<<"The Area of the Triangle : "<<area<<endl;
    return 0;
}

double Area_of_Triangle(double a, double b,double c)
{
    double semiPerimeter,Area;
    semiPerimeter = (a + b + c)/2;
    cout<<"The Semi-Perimeter is : "<<semiPerimeter<<endl;
    Area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    return Area;
}
