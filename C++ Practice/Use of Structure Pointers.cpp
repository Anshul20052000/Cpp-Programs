#include<iostream>
using namespace std;
int main()
{
    struct date
    {
        int day,month,year;
    };
    date today={10,8,2020};
    date *temp;
    temp = &today;
    cout<<"Printing Structure Elements using Structure Variables : "<<endl;
    cout<<"Day = "<<today.day<<" Month = "<<today.month<<" Year = "<<today.year<<endl;
    cout<<"Printing Structure Elements using Structure Pointers : "<<endl;
    cout<<"Day = "<<temp->day<<" Month = "<<temp->month<<" Year = "<<temp->year<<endl;
    return 0;
}
