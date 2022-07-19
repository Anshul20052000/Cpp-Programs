#include<iostream>
using namespace std;
int main()
{
    y:
    int c1,r1,c2,r2;
    float ar1[10][10],ar2[10][10],ar3[10][10];
    cout<<"For Array 1 "<<endl;
    cout<<"Enter the Size of Matrix "<<endl;
    cout<<"Enter Number of Columns "<<endl;
    cin>>c1;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>r1;
    cout<<"Enter the Elements in the Multidimensional Array "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter ar["<<i+1<<"]["<<j+1<<"] = ";
            cin>>ar1[i][j];
        }
    }
    x:
    cout<<"For Array 2"<<endl;
    cout<<"Enter the Size of Matrix "<<endl;
    cout<<"Enter Number of Columns "<<endl;
    cin>>c2;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>r2;
    if(c1!=c2||r1!=r2)
    {
        cout<<"Enter the Correct Rows and Columns "<<endl;
        cout<<"Retry Second Matrix Again"<<endl;
        goto x;
    }
    cout<<"Enter the Elements in the Multidimensional Array "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter ar["<<i+1<<"]["<<j+1<<"] = ";
            cin>>ar2[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            ar3[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    cout<<"The Sum of the Two Matrix is "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"      "<<ar3[i][j];
        }
        cout<<endl;
    }
    cout<<"Do you want Another Chance!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto y;
    }
    return 0;
}
