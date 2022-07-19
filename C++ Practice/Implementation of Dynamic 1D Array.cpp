#include<iostream>
using namespace std;
int *rollno;
float *percentage;
int main()
{
    int n;
    cout<<"Enter the Number of Students of which you have to store Percentage and Roll Number : ";
    cin>>n;
    rollno=new int[n];
    percentage=new float[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Enter the Roll Number : ";
        cin>>rollno[i];
        cout<<"Enter the Percentage of the Student : ";
        cin>>percentage[i];
    }
    cout<<"The Details of the Students are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Roll Number : "<<rollno[i]<<endl;
        cout<<"Percentage : "<<percentage[i]<<endl;
    }
    delete[]rollno;
    delete[]percentage;
    return 0;
}
