#include<iostream>
using namespace std;
int  main()
{
    x:
    int a,b;
    int ch;
    cout<<"Enter the Two Numbers"<<endl;
    cin>>a>>b;
    y:
    cout<<"Enter your Choice :"<<endl;
    cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Divide"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1 :
            cout<<"Addition"<<endl;
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
            break;
        case 2 :
            cout<<"Subtraction"<<endl;
            cout<<a<<" - "<<b<<" = "<<a-b<<endl;
            break;
        case 3:
            cout<<"Multiplication"<<endl;
            cout<<a<<" * "<<b<<" = "<<a*b<<endl;
            break;
        case 4:
            cout<<"Division"<<endl;
            cout<<a<<" / "<<b<<" = "<<a/b<<endl;
            break;
        default :
            cout<<"The Entered Choice is not valid!!!!"<<endl;
            break;

    }
    cout<<"Do you want any other Pair for the same Pair of Number[Y/N]"<<endl;
    char temp;
    cin>>temp;
    if(temp=='y'||temp=='Y')
       {
           goto y;
       }
    cout<<"Do you want Another Chance[Y/N]!!!!"<<endl;
    char n;
    cin>>n;
    if(n=='y'||n=='Y')
    {
        goto x;
    }
return 0;
}
