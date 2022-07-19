#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inch;
public:
    void get()
    {
        cout<<"Enter the Feet : ";
        cin>>feet;
        cout<<"Enter the Inches : ";
        cin>>inch;
    }
    void show()
    {
        cout<<"The Distance is : "<<feet<<"\' "<<inch<<"\""<<endl;
    }
};
int main()
{
    Distance D1,D2;
    D1.get();
    D1.show();
    D2.get();
    D2.show();
    return 0;
}
