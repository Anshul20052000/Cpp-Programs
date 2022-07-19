#include<iostream>
using namespace std;
class loc
{
    int latitude,longitude;
public:
    loc(int lg,int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    loc()
    {
        longitude = latitude = 0;
    }
    void show()
    {
        cout<<"The Longitude is : "<<longitude<<endl;
        cout<<"The Latitude is : "<<latitude<<endl;
    }
    friend loc operator+(loc);
};
loc operator+(loc ob1,loc ob2)
{
    loc temp;
    temp.longitude = ob1.longitude + ob2.longitude;
    temp.latitude = ob1.latitude + ob2.latitude;
    return(temp);
}
int main()
{
    loc ob1(10,20);
    ob1.show();
    cout<<endl;
    loc ob2(30,40);
    ob2.show();
    cout<<endl;
    loc ob3;
    ob3.show();
    cout<<endl;
    ob3 = ob1 + ob2;
    ob3.show();
    return 0;
}
