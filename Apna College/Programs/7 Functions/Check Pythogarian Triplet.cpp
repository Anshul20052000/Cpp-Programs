#include<iostream>
using namespace std;
void checkTriplet(int x,int y, int z)
{
    int a = (max(x, max(y,z)));
    int b,c;
    if(a == x)
    {
        b=y;
        c=z;
    }
    else if(a == y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a == (b*b + c*c))
        cout<<"It is a Triplet"<<endl;
    else
        cout<<"It is not a Triplet"<<endl;
    return;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    checkTriplet(x,y,z);
    return 0;
}
