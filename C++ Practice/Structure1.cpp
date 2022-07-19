#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
book input()
{
    book b;
    cout<<"Enter the Bookid , title and price of the Book "<<endl;
    cin>>b.bookid>>b.title>>b.price;
    return (b);
}
int main()
{
    book B1,B2;
    B1=input();

    cout<<"Bookid = "<<B1.bookid;
    cout<<"Tiltle = "<<B1.title;
    cout<<"price = "<<B1.price;
    B2=B1;
    return 0;
}
