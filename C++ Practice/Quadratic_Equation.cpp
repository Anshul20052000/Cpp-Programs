#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,R1,R2,dis,real,img;
    x:
    cout<<"The Quadratic Equation is of the Form [ax^2+bx+c] "<<endl;
    cout<<"Enter the Values of a,b and c "<<endl;
    cin>>a>>b>>c;
    dis=((b*b)-(4*a*c));
    if (dis>0)
    {
        R1=((-b)+sqrt(dis))/(2*a);
        R2=((-b)-sqrt(dis))/(2*a);
        cout<<"The Roots are Real and Distinct "<<endl;
        cout<<"Root 1 = "<<R1<<endl;
        cout<<"Root 2 = "<<R2<<endl;
    }
    else if(dis==0)
    {
        R1=((-b)/(2*a));
        cout<<"The Roots are Real and Same "<<endl;
        cout<<"Root 1 = Root 2 = "<<R1<<endl;
    }
    else
    {
        real=((-b)/(2*a));
        img=(sqrt(-dis)/(2*a));
        cout<<"The Roots are Imaginary "<<endl;
        cout<<"Root 1 = "<<real<<" + ("<<img<<")i"<<endl;
        cout<<"Root 2 = "<<real<<" - ("<<img<<")i"<<endl;
    }
    char ch;
    cout<<"Do you want Another Chance[Y/N]!!!!!"<<endl;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
