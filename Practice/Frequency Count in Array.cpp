#include<iostream>
using namespace std;
void Element_Frequency(int ar[],int n)
{
    int larg = 0,Min = 0,i;
    for(i=0;i<n;i++)
    {
        if(Min>ar[i])
        {
            Min = ar[i];
        }
        if(larg<ar[i])
        {
            larg = ar[i];
        }
    }
    cout<<"Frequency of the Elements is : "<<endl;
    int temp = Min;
    while(temp!=larg+1)
    {
        int Count=0;
        for(int i=0;i<n;i++)
        {
            if(temp==ar[i])
            {
                Count++;
            }
        }
        if(Count!=0)
        {
            cout<<" "<<temp<<" -> "<<Count<<endl;
        }
        temp++;
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
