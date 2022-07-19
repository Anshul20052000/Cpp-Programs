#include<iostream>
using namespace std;
int main()
{
    int n,ar[20],j,i;
    cout<<"\n\t... Bubble Sort ..."<<endl<<endl;
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
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(ar[j]>ar[j+1])
            {
                ar[j] = ar[j] + ar[j+1] - (ar[j+1] = ar[j]);
            }
        }

    }
    cout<<"Now Array After Bubble Sort..."<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<ar[i];
    }
    return 0;
}
