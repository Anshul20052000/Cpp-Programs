#include<iostream>
using namespace std;
struct book
{
    int bookid;
    string title;
    float price;
};
book input();
void display(book);
int main()
{
    book b1;
    cout<<sizeof(b1);
    cout<<"Enter the Details of the Book : "<<endl;
    b1=input();
    display(b1);
    return 0;
}
book input()
{
    book b;
    cout<<"Enter the Bookid : "<<endl;
    cin>>b.bookid;
    cout<<"Enter the Title of the Book : "<<endl;
    cin.ignore();
    getline(cin,b.title);
    cout<<"Enter the Price of the Book : "<<endl;
    cin>>b.price;
    return(b);
}
void display(book b)
{
    cout<<"The Book ID is : "<<b.bookid<<endl;
    cout<<"The Book title is : "<<b.title<<endl;
    cout<<"The Price of the Book is : "<<b.price<<endl;
}
