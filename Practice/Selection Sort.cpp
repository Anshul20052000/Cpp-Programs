#include<iostream>
using namespace std;
int main()
{
    int n,ar[20],Min,temp;
    cout<<"\n\t... Selection Sort ..."<<endl<<endl;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Values in Array : "<<endl;
    for(int i=0;i<n;i++)
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
    for(int i=0;i<n-1;i++)
    {
        Min = i;
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<ar[Min])
            {
                Min = j;
            }
        }
        /*temp = ar[i];
        ar[i] = ar[Min];
        ar[Min] = temp;*/
        ar[i] = ar[i] + ar[Min] - (ar[Min] = ar[i]);
    }
    cout<<"Now Array After Selection Sort..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<ar[i];
    }
    return 0;
}
