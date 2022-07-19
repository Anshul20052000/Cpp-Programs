#include<iostream>
using namespace std;
void Element_Frequency(int ar[],int n)
{
    int temp,Count,Ar_temp[n],tp=0;
    for(int i=0;i<n;i++)
    {
        Count = 0;
        temp = ar[i];
        Ar_temp[tp] = temp;
        if(for(int k=0;k<tp;k++){})
        for(int j=0;j<n;j++)
        {
            if(temp==ar[j])
            {
                Count++;
            }
        }
        cout<<"  "<<temp<<" -> "<<Count<<endl;
        tp++;
    }
}
int main()
{
    int ar[100],n;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" A["<<i<<"] : ";
        cin>>ar[i];
    }
    Element_Frequency(ar,n);
    return 0;
}

