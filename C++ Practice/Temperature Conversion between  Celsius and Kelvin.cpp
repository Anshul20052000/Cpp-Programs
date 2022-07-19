#include<iostream>
using namespace std;
int main()
{
    double f,c;
    int choice;
    cout<<"Temperature Conversion Menu : "<<endl;
    cout<<" 1. Celsius to Fahrenheit "<<endl;
    cout<<" 2. Fahrenheit to Celsius "<<endl;
    cout<<"Enter Your Choice : ";
    cin>>choice;
    if(choice == 1 )
    {
        cout<<endl<<endl;
        cout<<"Celsius to Fahrenheit..."<<endl;
        cout<<"Enter the Temperature in Celsius : ";
        cin>>c;
        f = (9.0/5.0) * c + 32.0;
        cout<<"Temperature in Fahrenheit : "<<f<<endl;
    }
    else
    {
        if(choice == 2 )
        {
            cout<<endl<<endl;
            cout<<"Fahrenheit to Celsius..."<<endl;
            cout<<"Enter the Temperature in Fahrenheit : ";
            cin>>f;
            c = (5.0/9.0) * (f - 32.0);
            cout<<"Temperature in Celsius : "<<c<<endl;
        }
        else
        {
            cout<<"Wrong Choice..."<<endl;
        }
    }
    return 0;

}
