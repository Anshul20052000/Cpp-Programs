#include<iostream>
using namespace std;

int main()
{
    int days_left,days,years,weeks,months;
    cout<<"Enter the Number of Days : ";
    cin>>days;
    years = days/365;
    days_left = days%365;
    months = days_left/30;
    days_left = days_left%30;
    weeks = days_left/7;
    days_left = days_left%7;
    cout<<"Number of Years : "<<years<<endl;
    cout<<"Number of Months : "<<months<<endl;
    cout<<"Number of weeks : "<<weeks<<endl;
    cout<<"Number of Days : "<<days_left<<endl;
    return 0;
}
