#include<iostream>
using namespace std;
enum days_of_week {sun,mon,tue,wed,thur,fri,sat};
int main()
{
    days_of_week day1,day2;
    day1 = mon;
    day2 = fri;
    int diff = day2 - day1;
    cout<<"The Difference between Day 1 and Day 2 is : "<<diff<<endl;
    if(day1 < day2)
        cout<<"Day 1 Comes before Day 2..."<<endl;
    return 0;
}
