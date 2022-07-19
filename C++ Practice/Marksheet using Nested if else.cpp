#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the Marks : ";
    cin>>marks;
    if(marks >= 80)
    {
        cout<<"Grade = A+"<<endl;
    }
    else
    {
        if(marks >= 70)
        {
            cout<<"Grade = A"<<endl;
        }
        else
        {
            if(marks >= 60)
            {
                cout<<"Grade = B"<<endl;
            }
            else
            {
                if(marks >= 40)
                {
                    cout<<"Grade = C"<<endl;
                }
                else
                {
                    cout<<"Grade = F"<<endl;
                }
            }
        }
    }
    return 0;
}

