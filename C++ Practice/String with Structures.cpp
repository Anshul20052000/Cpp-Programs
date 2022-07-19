#include<iostream>
using namespace std;
struct book
{
    char name[50];
    int pages;
    float price;
};
int main()
{
    int n;
    cout<<"Enter the Number of Books : ";
    cin>>n;
    book b[n];
    cout<<"Enter the Book Details..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        cout<<"Book "<<i+1<<endl;
        cout<<"Enter the Name of the Book : ";
        cin.ignore();
        gets(b[i].name);
        cout<<"Enter the Number of Pages in the Book : ";
        cin>>b[i].pages;
        cout<<"Enter the Price of the Book : ";
        cin>>b[i].price;
    }
    cout<<"\nDisplaying the Book Details..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Book "<<i+1<<endl;
        cout<<"The Name of the Book is : "<<b[i].name<<endl;
        cout<<"The Number of Pages in the Book is : "<<b[i].pages<<endl;
        cout<<"The Price of the Book is : "<<b[i].price<<endl;
    }
    return 0;
}
