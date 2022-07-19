#include<iostream>
using namespace std;
int main()
{

    int s,r,l,b,L,B,H,ch;
    x:
    cout<<"Enter your Choice for which you have to find Area/Volume "<<endl;
    cout<<"1.  Square \n2.  Rectangle  \n3.  Circle  \n4.  Cuboid "<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1 :
            cout<<"Enter the side of the Square "<<endl;
            cin>>s;
            cout<<"The Area of the Square is "<<s*s<<endl;
            break;
        case 2 :
            cout<<"Enter the Length and Breadth of the Rectangle "<<endl;
            cin>>l>>b;
            cout<<"The Area of the Rectangle is "<<l*b<<endl;
            break;
        case 3 :
            cout<<"Enter the Radius of the Circle "<<endl;
            cin>>r;
            cout<<"The Area of the Circle is "<<3.14*r*r<<endl;
            break;
        case 4 :
            cout<<"Enter the Length , Breadth and height of the Cuboid "<<endl;
            cin>>L>>B>>H;
            cout<<"The Volume of the Cuboid is "<<L*B*H<<endl;
            break;
        default :
            cout<<"You Entered a Wrong Choice!!!!!!!!!"<<endl;

            break;
    }
    char res;
    cout<<"Do you want Another Chance!!!(Y/N) "<<endl;
    cin>>res;
    if(res=='Y'||res=='y')
    {
        goto x;
    }
    else
    {
        cout<<"Thank You!!!!! :)"<<endl;
    }
    return 0;
}
