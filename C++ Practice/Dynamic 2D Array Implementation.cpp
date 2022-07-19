#include<iostream>
using namespace std;
int *value,*Rsum,*Csum;
int main()
{
    int row,column;
    cout<<"Enter the Dimensions: "<<endl;
    cout<<"Enter Rows : ";
    cin>>row;
    cout<<"Enter Columns : ";
    cin>>column;
    value=new int[row*column];
    Rsum=new int[row];
    Csum=new int[column];
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the Elements of Row "<<i+1<<" : "<<endl;
        Rsum[i]=0;
        for(int j=0;j<column;j++)
        {
            cin>>value[i*column+j];
            Rsum[i]+=value[i*column+j];
        }
    }
    for(int i=0;i<column;i++)
    {
        Csum[i]=0;
        for(int j=0;j<row;j++)
        {
            Csum[i]+=value[j*column+i];
        }
    }
    cout<<"The Given Array along with the Sum of Rows and Columns : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<"  "<<value[i*column+j];
        }
        cout<<" | "<<Rsum[i];
        cout<<endl;
    }
    for(int j=0;j<column;j++)
    {
        cout<<"  "<<Csum[j];
    }
    delete[]Csum;
    delete[]Rsum;
    delete[]value;
    return 0;
}
