#include<iostream>
using namespace std;
int main()
{
    int l,ar[100];
    cout<<"Enter the Length of the Array : "<<endl;
    cin>>l;
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<"Enter A["<<i+1<<"] : ";
        cin>>ar[i];
    }
    cout<<endl;
    cout<<"You Entered : "<<endl;
    for(int i=0;i<l;i++)
    {
        int *a;
        a=&ar[i];
        cout<<"The Element A["<<i+1<"] : "<<  *a  <<endl;
    }
    return 0;
}
