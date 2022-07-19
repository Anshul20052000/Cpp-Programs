#include<iostream>
using namespace std;
struct book
{
    int bookid;
    string title;
    float price;
};
int main()
{
    book b1={101,"Despacito",4000.50};
    book b2,b3;
    cout<<"Book 1 ID : "<<b1.bookid<<endl;
    cout<<"Book Title : "<<b1.title<<endl;
    cout<<"Book Price : "<<b1.price<<endl;
    cout<<"Enter the Book ID : "<<endl;
    cin>>b2.bookid;
    cout<<"Enter the Book Title : "<<endl;
    cin.ignore();
    getline(cin,b2.title);
    cout<<"Enter the Price of the Book : "<<endl;
    cin>>b2.price;
    b3=b2;
    cout<<"Enter the Book ID : "<<b3.bookid<<endl;
    cout<<"Enter the Book Title : "<<b3.title<<endl;
    cout<<"Enter the Price of the Book : "<<b3.price<<endl;
    return 0;
}
