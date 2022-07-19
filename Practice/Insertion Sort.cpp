#include<iostream>
using namespace std;
int main()
{
    int n,ar[20],key,j,i;
    cout<<"\n\t... Insertion Sort ..."<<endl<<endl;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Values in Array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Ar["<<i<<"] : ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<ar[i];
    }
    cout<<endl;
    for(i=1;i<n;i++)
    {
        key = ar[i];
        for(j=i-1;(j>=0)&&(ar[j]>key);j--)
        {
            ar[j+1] = ar[j];
        }
        ar[j+1] = key;
    }
    cout<<"Now Array After Insertion Sort..."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<ar[i];
    }
    return 0;
}
